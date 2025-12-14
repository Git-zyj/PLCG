/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_1;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = ((((arr_4 [i_0]) || (arr_4 [i_0]))));
                    arr_10 [i_0] [i_1] [i_2] &= (min(((min(42705, 90))), (((arr_8 [i_2] [i_1] [i_0]) << (var_7 - 1917010078)))));
                }
                var_13 = (max(var_13, (((-((~(22830 ^ -6437))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_17 [10] [i_3] [i_3] [i_3] [i_3] [i_3] &= (min(6436, (((arr_8 [i_0] [i_0] [i_0]) ^ (((108 ? var_1 : 42705)))))));
                            var_14 = (min(22848, (arr_12 [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((186 || (((255 >> ((((245 ? 96 : 4890021203800940357)) - 67)))))));
    #pragma endscop
}
