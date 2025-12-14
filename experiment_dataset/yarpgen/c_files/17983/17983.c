/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = (min(var_16, ((min(((var_1 ? var_12 : (arr_0 [i_0] [i_0 + 1]))), (~var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = ((((((var_5 ? var_13 : 3123067623)) ? var_2 : (max((arr_8 [i_0] [4] [i_0]), (arr_3 [i_0] [10])))))));
                                arr_11 [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = (arr_5 [i_0] [i_1] [i_3] [i_4]);
                                var_19 = (max((-30373 / var_8), (((arr_2 [i_0] [i_2] [i_3]) ? 4132660454331912608 : (arr_0 [i_1 - 2] [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = ((-(((var_6 ? (arr_0 [1] [i_0]) : var_6)))));
                var_20 = 15062;
                var_21 = (min(var_21, ((min((max(3490288323624740080, (arr_4 [i_0] [i_0 - 1] [i_1 - 1]))), ((min((arr_3 [i_0 + 2] [i_1 - 2]), (3123067593 != var_2)))))))));
            }
        }
    }
    #pragma endscop
}
