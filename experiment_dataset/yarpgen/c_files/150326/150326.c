/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_5;
    var_11 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [1] = -20743;
                arr_7 [11] [i_1] &= ((-6446742088212055513 ? -6446742088212055538 : 3182641902701658437));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 = (((arr_5 [14] [8] [i_0]) >= (!var_5)));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] &= ((-21 ? -8273230379772214975 : 83));
                        var_13 |= ((!(arr_12 [5] [i_3 + 1] [9] [i_1 + 1] [i_0])));
                        arr_14 [i_0] [i_1 + 1] [17] [6] &= var_8;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_14 = (~1);
                        arr_17 [i_4] = ((-21 + (var_6 != 6446742088212055511)));
                        var_15 = 6446742088212055559;
                    }
                    var_16 = ((~((var_4 ? 1 : var_5))));
                    var_17 ^= (((arr_5 [15] [i_1 + 1] [i_1 + 1]) ? (arr_16 [i_1 + 1] [i_1 + 1]) : (((6446742088212055543 ? 1676043666046246689 : 1)))));
                }
                var_18 = ((-6446742088212055540 ? 6446742088212055490 : -97));
            }
        }
    }
    var_19 *= ((~(max(var_5, (!var_0)))));
    var_20 = ((var_2 ? var_0 : ((((var_3 ? var_6 : var_4))))));
    #pragma endscop
}
