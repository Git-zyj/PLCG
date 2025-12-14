/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] |= 189358278;
                var_13 = (167 ? (((arr_3 [i_0 - 1] [i_0]) ? -224 : (arr_3 [i_0] [i_1 - 1]))) : ((((((arr_0 [i_1]) / var_10))) ? (max(1561120377, 226)) : 251)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [9] [i_1 + 2] [22] [i_2] = ((((1561120404 & (1957207939 & var_12))) > (((arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_0 + 1]) & (arr_0 [i_0 + 1])))));
                            var_14 = ((109 ? 298974329 : 163));
                            var_15 = (min((((arr_12 [i_0] [i_0 + 1] [i_3] [i_2 - 2]) ? (arr_0 [i_0]) : (arr_12 [i_0] [i_0 + 1] [i_2] [i_2 + 1]))), ((181 ? 160 : 180))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((var_11 + (0 > 0))) / var_10));
    var_17 += var_0;
    var_18 = (45 < 16);
    #pragma endscop
}
