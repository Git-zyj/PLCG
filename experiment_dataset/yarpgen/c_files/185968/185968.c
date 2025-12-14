/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 7076689531170999769;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 1] = ((-(arr_3 [i_0 + 3] [i_0 + 1])));
                var_17 = (max(((1 ? 0 : 28)), ((((-73 ? -44 : 39004))))));
            }
        }
    }
    var_18 = 72;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (~232);
                                var_20 = ((84 ? (((max(40, -84)))) : 1));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, var_3));
                var_22 = ((255 - ((((max(1524892436, 934906214))) ? (24 > 15) : (arr_15 [i_2] [19] [15] [15] [i_2] [8] [i_3])))));
                arr_16 [i_2] = max(-1036409877, 102);
            }
        }
    }
    #pragma endscop
}
