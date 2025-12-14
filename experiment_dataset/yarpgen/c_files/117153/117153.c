/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((max(1185202914, 3109764379))) + (max(var_14, 16772505388816145785)))), var_4));
    var_18 = (max(((min(var_4, var_2))), (13537019757192744951 + var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((-(1185202920 + var_3))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = (min((((arr_7 [i_3] [i_1] [i_3] [i_3]) != (arr_7 [i_0] [i_1] [i_2] [i_1]))), (((((min(26, (arr_1 [i_1]))))) == ((1674238684893405813 ? 16772505388816145770 : 3109764358))))));
                            var_19 = (((((arr_10 [i_3] [i_2] [i_1] [9] [i_0]) != (((var_1 << (((arr_7 [i_3] [0] [1] [i_0]) - 60))))))) ? (((((min(var_16, (arr_3 [i_0] [i_0])))) << ((((arr_4 [i_0] [i_2] [i_0]) || 39723)))))) : (max((var_11 | var_8), (arr_8 [i_1] [5] [5])))));
                            var_20 &= var_3;
                            var_21 = (((((arr_10 [i_0] [i_1] [i_0] [i_3] [i_1]) ? var_10 : (arr_9 [i_0] [i_1] [i_0] [i_1] [i_3]))) | (((1674238684893405839 ? (arr_5 [i_0] [i_1] [i_3]) : (arr_5 [i_0] [i_1] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
