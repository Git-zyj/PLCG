/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 -= ((((~((((arr_6 [i_0] [i_3] [i_2] [i_3]) == 18446744073709551615)))))) > 1135105110);
                                var_23 = (max(var_23, (((((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2])))))));
                                var_24 -= ((!((!(arr_7 [i_3])))));
                            }
                        }
                    }
                    var_25 -= (arr_11 [i_0] [i_0] [i_2] [i_2]);
                    var_26 = (min(var_26, -18446744073709551615));
                }
            }
        }
    }
    var_27 -= var_15;
    #pragma endscop
}
