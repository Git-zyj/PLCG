/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-2147483647);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (~(~30));
                var_13 -= (((-1141490916 > var_11) != var_7));
                arr_8 [i_0] = (-1 ? ((var_4 ? (-2147483647 - 1) : ((var_6 << (30 - 30))))) : 0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                var_14 = (min(var_14, var_9));
                arr_14 [19] [i_2] = ((((((arr_6 [i_3 + 1] [14] [14]) << (((arr_6 [i_3 - 1] [2] [2]) - 1869077990217079074))))) ? (!var_1) : (arr_6 [i_3 - 1] [i_2] [i_2])));
                var_15 = ((-1082478366 != (((!(((-51 ? var_11 : (arr_12 [i_2])))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_20 [18] [i_4] [i_3] [i_4] [i_2] = (arr_15 [i_2] [i_2] [i_2]);
                            var_16 = ((-((((arr_9 [i_3]) != var_1)))));
                            var_17 = (((((((max(9223372036854775807, -2824498927850772600))) ? ((min(-119, -76618310))) : 5213788902213415947))) ? 7671606199823415351 : ((max(1762577633, (-2147483647 - 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
