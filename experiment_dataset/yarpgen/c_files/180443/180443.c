/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_16;
    var_21 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 = (arr_5 [i_0]);
                        var_23 = ((-(max((arr_9 [i_0] [i_0]), (((164 ? 13 : (arr_7 [i_1] [i_2] [i_3]))))))));
                        var_24 = (arr_3 [i_0] [i_0] [i_3]);
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((var_7 | ((27765 ^ (arr_3 [i_3] [i_0] [i_0]))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_25 = ((!((((max(var_11, (arr_3 [i_0] [i_1] [i_2]))) >> (!113))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = (((((max((arr_5 [i_0]), 228)) * var_3)) / ((-(arr_1 [i_0 - 1])))));
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = ((-2080097757 / ((12876 ? -37770 : (var_13 + var_15)))));
                    arr_16 [i_0 - 2] [i_1] [i_1] [i_0] = (max((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
