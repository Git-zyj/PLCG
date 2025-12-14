/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108820
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
    var_17 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_8)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (+(var_14)));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_15)), (arr_0 [i_1])))))));
                    }
                } 
            } 
        } 
        var_22 = (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) * (((/* implicit */int) var_8))))))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) ((7189835042782609837ULL) < (((/* implicit */unsigned long long int) -1701139712))))) | (arr_5 [i_1]))));
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_5 [i_1]) / ((-(((/* implicit */int) var_8)))))))));
            var_25 = ((/* implicit */unsigned short) var_14);
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_6] [i_7])) ? (max((-6539822442093189127LL), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) 4070977544U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 1] [i_6] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (min((var_15), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_28 = max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4070977530U)));
                    }
                } 
            } 
            var_29 += (-(((/* implicit */int) ((signed char) arr_20 [i_1 - 1] [i_6] [i_6] [i_1 - 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) (signed char)-42);
                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_9] [i_1 + 1]))));
            }
            var_32 |= ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_14)))));
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))));
            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)4339)) & (((/* implicit */int) arr_12 [i_1 - 1] [i_9])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        var_35 = ((/* implicit */int) min((arr_23 [8] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((_Bool) var_8)))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                {
                    var_36 = ((/* implicit */_Bool) var_2);
                    var_37 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6)))));
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) ((unsigned char) 3368459059U))) : (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    }
    for (int i_13 = 1; i_13 < 17; i_13 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_13])) >= (var_4)))), ((~(4294967295U))))), (((/* implicit */unsigned int) arr_3 [i_13 + 1]))));
        var_40 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) var_0)), (1701139735)))), (-4191062810221023617LL))))));
        var_41 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) arr_19 [i_13 + 1] [10U] [i_13 + 1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)4346)) : (((/* implicit */int) var_12)))))));
    }
    var_42 = ((/* implicit */unsigned char) (short)-4340);
}
