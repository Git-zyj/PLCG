/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((((!((max(0, (arr_2 [i_1]))))))) & ((23017 * (0 * -1674282051)))));
                arr_8 [i_0] [i_0] = (2044643068 && 6880);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = ((!45299) - 20237);
                                arr_19 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = (!846067822);
                                arr_20 [i_4] [1] [i_2] [i_4] [i_1] [i_0] [9] = (~(~2213321915846123124));
                                arr_21 [i_0] [i_0] [i_0] &= (((!(arr_6 [15]))) ? ((-(((-847911378 + 2147483647) << (((arr_2 [i_0]) - 25913)))))) : ((-(((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (2044941536 - 2044941536))))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = 20234;
            }
        }
    }
    var_17 = (+(min((0 + 0), -7831990317486421599)));
    #pragma endscop
}
