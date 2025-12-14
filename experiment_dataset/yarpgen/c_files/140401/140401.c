/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (7031 ? (((-(-7023 ^ -7031)))) : 661236091);
                arr_6 [12] [12] [0] |= (((((!(arr_5 [i_1] [i_1] [i_1])))) >= var_15));
                var_17 = 1389679954;
                arr_7 [i_0] = 3653;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = 1389679954;
                            var_19 = ((((min((((!(arr_13 [6] [6] [i_5])))), var_2))) ? 7031 : (((661236091 ^ -7056) ? (min(0, var_8)) : 3633731216))));
                            var_20 = (arr_15 [i_2] [i_2] [i_4 + 2] [i_5]);
                            var_21 += -1;
                            var_22 = -1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] [5] [i_3] [i_2] = ((42 || (((-7031 ? (-127 - 1) : -12)))));
                                arr_26 [i_2] [i_3] [i_6 - 1] [i_7] [i_8 - 1] = (((1389679954 <= 1790290217) ? 22056 : 2017612633061982208));
                                var_23 = (max(var_23, (((((0 ? var_11 : (!243))) << (((arr_12 [i_8 - 4] [i_6 - 1]) - 5287532669418404289)))))));
                                var_24 = ((232 == (((arr_8 [i_7]) ? (((max(var_15, 255)))) : var_2))));
                                arr_27 [i_8] [i_7 + 1] [i_3] [i_3] [i_2] = ((-((((var_5 ? var_10 : (arr_14 [17] [17] [i_6 - 1] [i_7]))) ^ (717707813503785913 < 243)))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, ((((max(var_3, ((var_4 ? var_3 : (arr_10 [i_2]))))) > (1 >= 0))))));
                var_26 = -22056;
            }
        }
    }
    var_27 = 11349;
    #pragma endscop
}
