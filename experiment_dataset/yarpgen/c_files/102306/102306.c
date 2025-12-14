/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-(var_7 >= var_8))) >= var_5));
    var_15 = (min(var_3, (((~34461) ? var_4 : var_9))));
    var_16 = var_6;
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 -= ((16 ? (-127 - 1) : -251178296));
                            arr_9 [i_0] = (-251178296 ^ (((arr_8 [i_0 - 1]) & var_4)));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (((((-(arr_8 [i_2])))) ? (arr_5 [i_2] [i_2]) : ((-1537696475262520418 ? 34 : -251178296))));
                        }
                    }
                }
                arr_11 [i_1] [i_0] = (((((((3 ? 1 : (arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_1]))) > (((-251178300 ? 1 : 930806721)))))) > (max(-253952, (arr_5 [i_0] [i_1])))));
                arr_12 [i_0] = 29150;
            }
        }
    }
    #pragma endscop
}
