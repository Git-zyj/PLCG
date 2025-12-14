/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((~(((var_6 == (min(var_11, var_15)))))));
    var_20 = (max(var_20, ((max(((min(var_6, -310603292))), (((!((min(var_8, var_0)))))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((!(((171 & (arr_0 [i_0]))))));
        var_22 = (max(var_22, (min((((min(945664987, (arr_2 [i_0]))) + (((~(arr_2 [i_0])))))), (((((((arr_2 [i_0]) == (arr_0 [7])))) != (var_0 >= 3627292685))))))));
        var_23 = (max(var_23, (((((min(((max(var_2, 124))), (min((arr_0 [i_0]), -106))))) ? (((var_0 >= ((86 ? 3145829091214492238 : (arr_0 [i_0])))))) : (min((arr_2 [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = var_3;
        var_24 = (max(var_0, 303001997));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_10 [i_1] = (((((((3627292685 ? 12 : 0)) + 310603291))) ? (max((arr_9 [i_3] [i_1] [i_1]), (arr_9 [i_3] [13] [i_1]))) : (((((max(1428391866, 310603291))) ^ 5)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_25 *= (arr_9 [i_1] [i_1] [i_3]);
                                arr_19 [i_1] [i_1] [i_3] [i_4] [1] = ((~(((0 >= (arr_17 [i_1] [i_2] [i_2] [i_1] [i_4] [i_4]))))));
                                arr_20 [i_1] [1] [i_4] [1] [i_2] [i_1] = 127222576;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
