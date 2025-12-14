/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(max((~59252), var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((~(max((arr_3 [i_1] [i_0] [10]), var_2))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (max((arr_9 [i_3 - 3] [i_2 - 3] [i_1] [i_1]), ((-((119526134362216176 ? var_13 : -119526134362216176))))))));
                            var_18 = (max(var_18, -11));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = ((((arr_3 [i_1] [i_4 + 2] [i_6 - 3]) ? 7 : var_1)));
                                var_20 = (max(var_20, (max(((min(var_12, 4836346132580234811))), 4836346132580234811))));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, (((~(arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
