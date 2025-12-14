/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 7617;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = ((-7617 <= (((arr_12 [i_3 - 2] [i_3 - 2] [1] [i_4] [i_4]) ? (arr_12 [i_3 + 2] [i_4] [i_4] [i_4] [i_4]) : -7618))));
                                var_12 = (~5614413);
                                var_13 += var_9;
                            }
                        }
                    }
                    var_14 = ((!(((-1197002495 ? ((-7629 % (arr_6 [i_0] [i_0]))) : ((var_9 ? -5614414 : 1197002495)))))));
                    var_15 = (arr_10 [i_0] [i_0] [i_1] [i_2]);
                    var_16 = (min(-1197002513, -7618));
                }
            }
        }
    }
    #pragma endscop
}
