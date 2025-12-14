/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-6699640414226391493 / var_1);
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] &= ((((((min(1603886231, var_7))) ? ((-(arr_2 [i_0]))) : var_3)) == (((var_9 | var_3) ? (((arr_5 [2] [i_1] [i_1]) * var_5)) : (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((((max((arr_0 [i_2 - 2]), ((((arr_4 [i_0] [i_1]) || var_8)))))) ? (max((min(57745, -1603886232)), var_9)) : (arr_9 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                            var_14 &= 8778913153024;
                        }
                    }
                }
                var_15 = arr_4 [i_0] [i_0];
            }
        }
    }
    #pragma endscop
}
