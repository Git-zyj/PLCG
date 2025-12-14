/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = 25;
                var_14 = (max((max((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_0 + 1] [i_0]))), (((+(((arr_1 [i_1] [i_0]) ? 0 : 22)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_15 = ((!(arr_0 [i_0])));
                            arr_8 [i_3] [i_1] [1] [i_1] [i_0] = (~(arr_2 [i_2]));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((~(arr_2 [i_4 - 2])))))));
                            var_17 = (((max((arr_1 [i_0] [i_0]), 4296743175624444945)) > (arr_4 [i_0 - 1] [i_0 - 2])));
                            var_18 *= arr_1 [i_0 - 1] [i_0 - 1];
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(min(208, 1411645655))));
    var_20 = (min(-var_7, -233));
    var_21 = var_0;
    #pragma endscop
}
