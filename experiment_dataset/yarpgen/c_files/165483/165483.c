/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [6] = (((var_2 / (arr_5 [i_1 - 1] [i_3 + 3] [i_3 - 1]))));
                                var_20 = ((arr_3 [11]) << (((((((var_0 ? -12175 : var_9))) ? -2404971889 : (((-7388318546300745476 ? 27 : 10373))))) - 1889995406)));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_0] = var_11;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_21 = (min((((arr_10 [i_6]) ? (arr_10 [i_0]) : (arr_10 [i_0]))), -26));
                            arr_21 [i_5] [i_1] [i_2] [i_5] [9] = ((-((var_7 ^ (arr_19 [8] [i_5])))));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_22 ^= (((92 / 2894414304) % (arr_18 [i_0] [i_2] [i_1] [i_0])));
                            var_23 = var_11;
                            arr_26 [i_5] [i_1] [8] [i_7] [i_5] = ((9296 ? ((min((arr_24 [i_0] [i_1] [i_2] [i_5] [2] [i_0] [i_7]), (arr_9 [i_0])))) : (((((arr_9 [2]) / var_10))))));
                        }
                        arr_27 [i_0] [6] [i_2] [2] [i_5] = var_14;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_24 = ((max((arr_31 [i_1 + 1] [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [0]), var_13)) % (((((var_12 ? 38 : -24064))) ? (max((arr_3 [i_0]), -10372)) : -37)));
                                var_25 = (max(var_25, (((((var_15 / 20236) > -28504))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_10 <= (((var_8 && (13352 + var_8))))));
    var_27 = (max(var_27, (((var_15 ? ((10373 ? 416600851663897888 : 14985908383324099869)) : var_10)))));
    #pragma endscop
}
