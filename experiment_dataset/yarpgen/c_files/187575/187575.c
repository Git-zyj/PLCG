/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((+(max((~var_0), (!1)))));
    var_12 = -2;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] [i_0] = arr_8 [i_0];
                    var_14 = (!4095);
                    var_15 = (arr_8 [i_0]);
                }
                var_16 = (((!-1) ? (max((arr_3 [i_0]), (((!(arr_6 [i_0])))))) : (arr_1 [i_0])));
                var_17 = ((!((!((!(arr_6 [i_0])))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_18 -= (((arr_3 [i_0 + 2]) ? ((((!(arr_2 [0]))))) : (arr_2 [12])));
                            var_19 += (((arr_1 [6]) ? (min((arr_14 [i_0]), (arr_5 [i_0 + 1]))) : (arr_13 [i_4] [i_3] [i_1] [i_0])));
                            arr_15 [i_0] [i_0] [9] [i_0] [i_4] = ((!((!(arr_8 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, ((min((((var_5 ? var_5 : var_6))), var_3)))));
    #pragma endscop
}
