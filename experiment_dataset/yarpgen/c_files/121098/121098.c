/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 &= ((-(((var_9 >= var_7) - ((var_6 ? var_4 : 32754))))));
    var_12 = ((var_2 && ((((var_1 + 224) ? var_2 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (max(42, (!128)));
                            arr_10 [i_0] [i_1] [1] [i_0] [i_0] = (min(((((arr_8 [i_0] [i_0] [i_0] [i_0]) != ((((arr_4 [17]) ? -1822517122 : 104)))))), (arr_8 [i_3] [i_1 - 1] [i_1 - 1] [i_0])));
                            var_14 = (max(var_14, var_4));
                        }
                    }
                }
                arr_11 [8] [i_1] = (((((arr_8 [i_1 - 1] [i_1] [7] [7]) || var_0)) ? (max(var_1, var_0)) : ((((45 != (arr_2 [i_1 - 1])))))));
                var_15 *= ((((-(arr_0 [i_1 - 1]))) + (arr_0 [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
