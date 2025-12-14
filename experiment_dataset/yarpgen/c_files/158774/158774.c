/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_2 ? var_7 : (!var_0));
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (~var_9);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = ((-(~6)));
                                var_14 = (((((~(arr_7 [i_0] [i_2] [i_0])))) ? (arr_10 [i_0 - 1] [i_0 - 1]) : (arr_7 [i_1 + 1] [i_0 - 1] [i_0])));
                                var_15 = var_4;
                                arr_12 [i_0] [i_1] [i_2] [6] [i_4] = (~var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = -var_7;
    var_17 = var_8;
    #pragma endscop
}
