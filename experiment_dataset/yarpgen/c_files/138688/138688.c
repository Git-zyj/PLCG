/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(88, 1322780837));
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_10 [i_0] [i_2 - 1] [i_0]) ? (arr_10 [i_2] [i_2 - 1] [i_0]) : -1510595819)));
                                arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0] [i_2] = (min(var_13, 0));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = var_7;
                    var_18 = ((1322780835 ? 58074 : 4541510636696929137));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_0] = ((((var_8 && ((min(9223372036854775807, 4013865557))))) ? (((((32767 ? 1 : var_1))) ? ((var_6 ? 32761 : 1)) : (arr_10 [i_0 - 1] [i_2] [i_0 - 1]))) : (((!(arr_8 [i_0] [i_0 + 1] [12] [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
