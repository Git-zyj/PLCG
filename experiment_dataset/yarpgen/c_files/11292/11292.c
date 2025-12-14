/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (((((12495632265210239224 ? (arr_3 [i_0] [i_1]) : (~1125899906842623)))) ? (arr_2 [i_1] [4] [i_0]) : (((arr_0 [9] [i_1]) << (((arr_0 [i_1] [i_0]) - 7270129812982528899))))));
                var_19 = (min(((min(56, 122264317))), 27));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (((((((arr_2 [i_4] [i_3] [i_2]) ? -702634926 : 122264320))) || (arr_4 [i_0] [i_4]))) ? var_10 : ((max(2064384, -1918858452))));
                                var_21 = (min((arr_4 [i_0] [i_1]), (((((arr_5 [i_2] [i_1]) ^ 5067320204415283848)) ^ (((72 ? var_5 : (arr_1 [i_0] [i_0]))))))));
                                var_22 = ((((arr_4 [i_1] [1]) && (arr_4 [i_0] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= max(((min(1, var_2))), var_15);
    #pragma endscop
}
