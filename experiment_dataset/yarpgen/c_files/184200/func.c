/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184200
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), ((((~(3468120730U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52962)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (signed char)-37)))))))));
    var_14 += ((/* implicit */unsigned short) min((max((var_9), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)13))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-37)) * (((/* implicit */int) (signed char)-40))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) / (119239263U)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 119239259U)) && (((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-37)))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)110)) - (98))))))))));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((119239243U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))))), (max((((/* implicit */unsigned long long int) 72057594037927935LL)), (18446744073709551597ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((119239252U) < ((-(4175728044U)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) == (((/* implicit */int) (unsigned short)65528)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) - (187514572U)))));
                    arr_10 [1ULL] [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) ^ (((((/* implicit */_Bool) -5828947714605077219LL)) ? (12002814209003511003ULL) : (((/* implicit */unsigned long long int) 119239263U))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_20 [i_4] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) - (119239263U)))));
                        var_19 += ((/* implicit */unsigned long long int) ((((15612059907827070224ULL) >> (((((/* implicit */int) (signed char)-102)) + (126))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)13)) / (((/* implicit */int) (unsigned short)34398)))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (2800709272U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49933))) : (18446744073709551588ULL))) : (((/* implicit */unsigned long long int) 5832266103161604100LL))));
                        var_21 = ((/* implicit */_Bool) ((unsigned short) (signed char)87));
                        var_22 = ((/* implicit */unsigned short) (~(7135835358377134328LL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5832266103161604096LL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned short)17239))))) ? (-5832266103161604123LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)74))))))));
                        var_24 ^= ((/* implicit */signed char) ((unsigned short) (unsigned short)0));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
