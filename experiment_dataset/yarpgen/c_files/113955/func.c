/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113955
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (82523441U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57017)))));
            var_15 = ((/* implicit */unsigned char) ((10670354301599703937ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) 1204871536U))));
            var_17 = ((/* implicit */long long int) arr_4 [1ULL]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 + 1] [i_0])) + (((/* implicit */int) arr_2 [i_3 + 1] [i_0]))));
                var_19 = ((/* implicit */unsigned int) 1294407830);
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) -1294407828);
                        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)2202)) << (((var_1) - (6682969862345904316LL))))) << (((((((((/* implicit */_Bool) -1294407827)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)62557)))) + (32791))) - (13)))));
                        var_22 -= ((/* implicit */short) ((arr_14 [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_3 + 1] [i_3 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1LL))))));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_23 = arr_13 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [(signed char)1] [i_0 - 2] [i_0 - 2];
                        var_24 ^= ((/* implicit */_Bool) (~(-8438872761620035817LL)));
                    }
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_4] [i_4] [i_4] [i_4]))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_3 + 1] [i_0 - 3]);
                        var_27 |= ((/* implicit */unsigned char) arr_17 [i_0] [i_2] [i_3] [i_4] [i_7]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_21 [i_3 + 1] [(unsigned short)7] [i_3 + 1] [i_3] [i_3] [i_2 - 2] [i_2]))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || ((_Bool)1))))));
                    }
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_30 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                var_31 = arr_15 [i_0] [i_0 + 1] [i_2 + 1] [i_2 + 2] [i_9];
                var_32 = ((/* implicit */unsigned long long int) ((arr_12 [i_9] [i_9] [i_2 - 1] [i_2] [i_0] [i_0]) - (((/* implicit */long long int) ((arr_17 [i_0 - 3] [i_0] [i_9] [i_0] [(short)11]) & (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_2] [i_2 + 2] [i_0])))))));
            }
            var_33 = ((/* implicit */unsigned short) arr_9 [i_0]);
            var_34 = ((/* implicit */unsigned char) (signed char)-31);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0 - 3]);
            arr_28 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 - 3] [i_0]))));
        }
        var_36 = ((/* implicit */long long int) (short)-10093);
        var_37 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) 1294407826)) : (10670354301599703957ULL)));
    }
    var_38 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    var_39 = min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_13)))))), (8191));
    var_40 = ((/* implicit */signed char) ((((/* implicit */int) min(((short)-10093), (((/* implicit */short) var_10))))) == (((/* implicit */int) var_4))));
    var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) 1294407847)))))));
}
