/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102752
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) -4357191767429375586LL);
        var_15 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [2U])), (((unsigned long long int) ((arr_0 [(signed char)2] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [12U])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) arr_1 [10LL]);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) var_10);
                    arr_8 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (+(arr_4 [i_1] [i_2] [i_3])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_18 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) -4357191767429375586LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) : (5646494358739535648ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) : (-4357191767429375586LL))))));
            var_19 = ((/* implicit */signed char) ((arr_13 [i_5]) / (arr_13 [i_4])));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_16 [i_4] [i_4]))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 7; i_9 += 3) 
                        {
                            arr_28 [i_4] [2ULL] [i_7] [2ULL] [i_9 + 3] = ((/* implicit */long long int) ((arr_22 [i_4] [0] [i_9 + 1]) != (((/* implicit */long long int) arr_25 [i_9 - 1] [9LL] [i_9 + 4] [i_9] [9LL] [9LL] [9LL]))));
                            var_22 |= arr_14 [10LL] [i_9 + 1];
                            var_23 *= ((/* implicit */_Bool) (-((+(var_12)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_24 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2));
                            var_25 ^= ((/* implicit */short) (-(140733193388032LL)));
                        }
                        var_26 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_0 [i_4] [i_8])))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_10 [i_8]))));
                        arr_32 [i_4] = ((/* implicit */int) var_1);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */int) var_3);
                        arr_40 [i_13] [i_12] [i_11] [i_12] = ((/* implicit */unsigned int) (+((+(var_10)))));
                    }
                    var_29 = ((/* implicit */int) ((((arr_30 [i_12] [4ULL] [i_11] [i_6] [i_6] [i_4] [i_4]) <= (var_2))) ? (((/* implicit */unsigned int) var_7)) : (arr_23 [i_12] [i_11] [7LL] [i_4])));
                    var_30 = ((/* implicit */long long int) var_7);
                    var_31 ^= ((/* implicit */long long int) arr_14 [i_4] [i_6]);
                }
                var_32 = ((((/* implicit */unsigned int) var_10)) == (arr_26 [i_4] [i_4] [i_4] [i_4] [(short)7] [i_4]));
            }
            var_33 = ((/* implicit */signed char) var_8);
            var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [(short)4] [(short)4]))));
        }
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4])) ? (((long long int) var_0)) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))));
        var_36 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))));
        var_37 |= ((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_4]);
    }
    var_38 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) ((signed char) var_12))), (var_11)))));
    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((-4357191767429375584LL) % (((/* implicit */long long int) 806878629U)))) : (((long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) ^ (min((4357191767429375585LL), (((/* implicit */long long int) -1165244533))))))) : (min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_12))))));
}
