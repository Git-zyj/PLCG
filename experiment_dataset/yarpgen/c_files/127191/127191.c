/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [9] [i_3] [3] [i_3] = ((((((arr_3 [i_3 + 1] [i_2]) & 1721447256))) / (((arr_9 [i_0] [i_1]) ? -var_5 : 13181005277026251979))));
                            var_12 = (min(((~(arr_6 [i_1] [i_3 + 3] [i_3] [i_3 + 1]))), 14566142031091420407));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_17 [i_0] [i_3] [i_0] [i_0] [i_0] = (arr_10 [i_3 - 2] [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_4]);
                                var_13 = (((arr_12 [i_0] [i_2] [11] [i_3 + 4] [i_3] [i_3 - 2]) ? 14566142031091420407 : (((-(-32767 - 1))))));
                                var_14 = 328301389;
                                arr_18 [i_0] [i_3] [i_2] [i_3] [i_4] = var_1;
                                arr_19 [i_0] [i_0] [4] [4] [i_3] [i_4] |= 4294967295;
                            }
                        }
                    }
                }
                var_15 = ((-((-(arr_10 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_16 = (max(var_16, var_2));
    var_17 = (((423013883 >> (3966665907 - 3966665905))));
    var_18 = ((var_9 ? (((var_6 ? var_11 : (~656569815)))) : (((-9213198643535834047 | 328301397) ? ((min(var_6, 3638397480))) : var_8))));
    #pragma endscop
}
