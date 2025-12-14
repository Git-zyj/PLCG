/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112088
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) 14LL))))))), (var_13)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 |= ((/* implicit */short) -3LL);
        var_16 = ((/* implicit */unsigned long long int) ((((-3LL) > (-3LL))) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) arr_4 [i_1]);
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))) : (var_0)));
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_3 [i_1]) / (((/* implicit */unsigned int) var_13)))))));
            var_20 = ((/* implicit */int) var_0);
            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-17LL)))));
        }
        for (unsigned int i_3 = 4; i_3 < 23; i_3 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_1]))) : ((~(67108864U)))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (28LL) : (-14LL)))) ? (-9223372036854775802LL) : (((/* implicit */long long int) 67108866U))));
            arr_13 [i_3] &= ((/* implicit */unsigned long long int) (+(-424324238)));
            var_23 = ((/* implicit */short) (-(arr_3 [i_1])));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (long long int i_5 = 2; i_5 < 24; i_5 += 4) 
                {
                    {
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_5] [i_4] [i_1] [i_1]))))) ? ((+(6LL))) : (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) == (2LL)))))));
                        var_25 += ((/* implicit */_Bool) arr_11 [i_5] [i_3] [24U]);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-3LL)))) ? (((/* implicit */unsigned int) -424324238)) : (0U)));
                            var_27 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_5)))));
                            arr_23 [i_1] [i_1] [i_4] [(short)14] = ((/* implicit */long long int) (-(arr_14 [12] [17] [i_1] [i_5])));
                            var_28 = ((/* implicit */long long int) var_11);
                        }
                        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) var_9);
                            arr_26 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_3 - 2] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_4]))) : (arr_17 [i_3] [i_1] [i_3 - 2] [(short)10])));
                        }
                    }
                } 
            } 
        }
        for (short i_8 = 2; i_8 < 22; i_8 += 4) 
        {
            arr_30 [i_8] [i_1] [i_1] = ((/* implicit */_Bool) -3LL);
            var_30 = ((/* implicit */_Bool) arr_6 [21] [i_1] [i_8]);
            var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((/* implicit */unsigned long long int) 4227858416U)) : (var_10)));
        }
        var_32 += ((/* implicit */short) (-(9223372036854775802LL)));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 2; i_9 < 23; i_9 += 2) 
        {
            var_33 = ((/* implicit */unsigned int) arr_31 [i_1]);
            var_34 ^= ((/* implicit */signed char) ((((9LL) ^ (-20LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_32 [i_9]) : (((/* implicit */int) (_Bool)1)))))));
            var_35 = ((/* implicit */int) ((((((/* implicit */int) var_9)) > (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) 127)) + (67108864U)))) : ((~(-6LL)))));
        }
        var_36 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */_Bool) (~(4294967295U)));
        var_38 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_10 + 1] [i_10 + 1])) + (2147483647))) << (((((var_12) << (((((/* implicit */int) (short)32767)) - (32728))))) - (14701923467981225984ULL)))));
    }
}
