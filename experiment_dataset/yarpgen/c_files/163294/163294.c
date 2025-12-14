/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -4022037454792169620;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_12 += ((-(max((arr_1 [1]), 0))));
        var_13 = 4099929980;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = (max((max((arr_12 [3] [i_1] [i_2] [i_3] [i_3]), 41)), (max((arr_12 [i_0 + 3] [i_0] [i_1] [3] [3]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3])))));
                        arr_14 [0] [i_0] [1] [i_2] [0] = (min((65515 && var_0), (max(var_0, (arr_1 [i_0])))));

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            arr_17 [3] [i_0] [i_0] [0] [i_4 - 3] = (arr_8 [i_4 + 1]);
                            var_15 = (min(var_15, var_8));
                            var_16 -= ((!(((~(16822811995310761117 && 0))))));
                        }
                        var_17 = (((arr_3 [i_0 + 1]) == var_5));
                    }
                    var_18 = ((-(max((arr_3 [0]), ((min(var_1, 41)))))));
                    var_19 = (min(var_1, var_9));
                }
            }
        }
    }
    var_20 = (max(var_20, ((((max((-39 >= var_10), -var_1)) >> (var_6 - 679723557))))));
    var_21 = var_9;
    #pragma endscop
}
