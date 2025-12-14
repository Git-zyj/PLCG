/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 1858171992648125685;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (min((~47), (((min(117, (arr_5 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = ((var_9 ? 7400792295936384333 : var_10));
                                var_13 = -4938200541548450709;
                                var_14 = (arr_9 [i_2 - 2] [13] [7] [10] [i_0 + 1] [i_0]);
                            }
                        }
                    }
                }
                var_15 = (((((((min((arr_2 [1] [i_1] [i_1]), (arr_3 [i_0] [i_0])))) ? ((149 ? 12758000298292428495 : var_5)) : (arr_10 [i_0 + 3])))) ? (max(((0 ? (arr_3 [3] [15]) : var_7)), var_2)) : (arr_4 [i_0])));
            }
        }
    }
    var_16 = (min(var_16, 403751991));
    #pragma endscop
}
