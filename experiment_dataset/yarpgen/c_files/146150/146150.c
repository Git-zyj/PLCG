/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_1 / var_2) - var_7)), var_5));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_15 = var_3;
                        var_16 = (((var_3 - (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
                        var_17 |= (min(var_10, ((var_4 >> (((arr_0 [i_1]) + 137))))));
                        var_18 = ((~((~(arr_1 [i_2 + 2])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_19 = ((var_13 >= (var_10 <= var_1)));
                        var_20 = (((arr_2 [i_0 - 1] [i_0]) >> (arr_2 [i_0 + 2] [i_0])));
                    }
                    var_21 = (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                    var_22 = ((((max((arr_8 [i_0 + 1] [i_2 + 2] [3] [3]), (arr_8 [i_0 + 2] [i_2 - 1] [i_2 + 2] [5])))) * (((var_12 == (arr_8 [i_0 + 1] [i_2 - 1] [i_2] [i_2 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
