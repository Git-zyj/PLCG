/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (max(1421522532, ((max((arr_11 [i_0 - 1] [i_1 + 2] [i_2 + 2] [i_3]), 26652)))));
                            arr_12 [i_0] [i_0 - 1] = (max(var_5, 10964895047102032882));
                            var_18 = 5798;
                            arr_13 [i_0] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_2] [i_3] = (arr_8 [i_0 + 2]);
                            var_19 = (max(var_19, (arr_4 [i_0 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_0 + 1] [i_0] [i_4] [i_5 + 4] = var_4;
                            arr_20 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] = ((((((arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) <= (arr_0 [i_0])))) < (arr_0 [i_0 + 2])));
                        }
                    }
                }
                var_20 = (max((arr_3 [i_0]), (arr_15 [i_0 + 1] [i_1 + 2] [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}
