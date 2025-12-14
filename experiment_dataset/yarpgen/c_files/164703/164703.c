/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 -= 16;
                    var_12 = (((((var_0 <= (((var_6 < (arr_4 [i_2] [i_1]))))))) << ((((((var_2 ? var_3 : (arr_1 [i_0]))) ^ (arr_3 [i_2 - 1] [i_0] [i_0]))) + 6334860671323623754))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] = (~-17);
                        arr_11 [i_2] [i_2] = var_3;
                        var_13 -= (~var_7);
                        arr_12 [i_2] [i_0] [i_1] [i_1] [i_2] [i_2] = ((~((26512 ? -8164610306008536105 : 8164610306008536104))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_14 = ((((arr_13 [i_1] [i_2] [i_2]) ? (arr_7 [i_2 + 1]) : (arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1]))));
                        var_15 = (arr_8 [i_4] [i_2] [i_1] [19]);
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_16 -= ((+(min((arr_4 [i_5] [i_2 - 1]), (arr_4 [i_2 + 1] [i_2 - 1])))));
                        var_17 = (((-(arr_14 [i_5] [i_1] [i_2] [i_1]))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_18 &= (arr_2 [i_6 + 1] [i_2 + 1] [i_2 - 1]);
                            arr_22 [i_2] = ((((min((arr_15 [i_6] [i_2] [i_2] [i_0]), (arr_5 [i_2] [i_2])))) ? (arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_6 - 1]) : var_2));
                            var_19 = var_4;
                            var_20 = (26512 || -8164610306008536105);
                        }
                        var_21 = (min(var_21, var_7));
                        var_22 = max((max((arr_19 [2] [i_6 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_16 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))), ((min(((-(arr_20 [1] [i_1]))), var_9))));
                        var_23 = (max(var_23, ((((var_3 ? var_9 : var_7))))));
                    }
                }
            }
        }
    }
    var_24 = ((((!(((-26512 ? 16 : -9))))) ? (min((~-17310), ((var_6 ? var_0 : var_10)))) : (((var_7 ? (-7 || 31652) : var_10)))));
    #pragma endscop
}
