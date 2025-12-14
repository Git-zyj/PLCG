/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 127;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 += arr_2 [i_1];
            arr_5 [i_1] [i_1] [i_1] = var_3;
            var_16 = (0 || 9223372036854775807);
            arr_6 [i_1] [13] [i_1] = (arr_2 [i_0]);
        }
        arr_7 [i_0] = (arr_0 [3]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_13 [i_2] [6] [i_3] = ((((!(arr_1 [i_2])))) | (((arr_3 [i_2]) ? -65517 : (var_13 && var_6))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_6, (max((127 && 2), (arr_20 [15] [i_4 - 3] [i_4 + 1] [i_4] [i_4 - 2])))));
                                var_18 = (max(var_18, ((max((max((arr_2 [i_4 + 1]), var_7)), (((9946548153503526919 ? 0 : 64079))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
