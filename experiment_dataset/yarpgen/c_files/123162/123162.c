/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = (~536870912);
            var_12 = var_4;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_13 ^= 1;

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_14 = ((((max(((min(-12, var_1))), 9223372036854775807))) ? 1 : (min(-7056762439282152397, -9462))));
                        var_15 ^= -var_10;
                        arr_14 [i_0] = (!12406002016754509695);
                        var_16 |= (((arr_3 [i_3] [14]) ? (max((~4524788162408381165), var_1)) : (!-26065)));
                    }
                    var_17 ^= (arr_8 [i_3] [i_2] [i_3]);
                    var_18 = (max(var_18, var_8));
                }
            }
        }
        arr_15 [i_0] = ((((((arr_11 [i_0] [i_0 + 1] [3] [11] [i_0]) ? (arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0 - 1] [i_0 - 1] [6] [i_0])))) ? -8733666292096099124 : 1));
        var_19 = (min(var_19, (arr_7 [i_0])));
    }
    var_20 -= min(var_10, ((((4095 * 150) == (min(7120904152079302800, 8710))))));
    var_21 = ((((min(var_5, ((var_6 ? var_0 : var_3))))) ? ((min(var_0, (max(3, 131071))))) : 3261371464141782827));
    #pragma endscop
}
