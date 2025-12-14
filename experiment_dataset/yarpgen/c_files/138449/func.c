/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138449
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_3))))) != (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) 2147483647))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_15)))) ? (((((/* implicit */_Bool) var_14)) ? (var_13) : (var_18))) : (((((var_16) + (2147483647))) >> (((((/* implicit */int) var_3)) - (153)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6165121507226104253ULL)))) : (9276746440330100634ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)61417)) : (arr_2 [(unsigned short)8]))) | (((/* implicit */int) ((var_13) > (var_5)))))))));
        arr_10 [i_1] = ((/* implicit */int) arr_1 [i_1]);
        var_19 = ((/* implicit */_Bool) 842393968);
        arr_11 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-90)) && (var_4)));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [(signed char)8]))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_14))) | (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 10LL)) ? (5072055591321303907LL) : (((/* implicit */long long int) var_13))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1023))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) / (var_18))) | (((var_17) ? (((/* implicit */int) var_12)) : (var_5))))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_11);
                                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(1112414381360159961ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4581737562533311937LL)))) ? ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (-3606277252753604881LL))) : (((((/* implicit */_Bool) var_7)) ? (10LL) : (((/* implicit */long long int) -1730101299)))))) : (((/* implicit */long long int) arr_17 [i_2] [i_3 - 1] [i_2]))));
                                var_25 -= ((unsigned char) ((unsigned char) var_10));
                            }
                        } 
                    } 
                    arr_24 [(unsigned short)8] [i_2] [i_4] [i_4] = ((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_18) : (arr_14 [i_4] [i_3] [i_2])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))));
                    arr_25 [i_2] [i_4] [i_3] = ((/* implicit */_Bool) (+(max((var_7), (((/* implicit */int) ((((/* implicit */int) (short)-29707)) != (var_18))))))));
                }
            } 
        } 
    } 
}
