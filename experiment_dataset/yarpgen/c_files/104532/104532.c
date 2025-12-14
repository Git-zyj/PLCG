/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))) ? -var_2 : (((arr_1 [i_0 + 1]) / var_10))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_1] = (arr_1 [i_2 + 1]);
                            var_12 = ((2 != (min(((1 ? var_5 : 127)), 689414779))));
                            arr_15 [14] [i_0] [14] = ((1394599565 ? 1 : 2));
                            var_13 = (arr_1 [i_0 + 2]);
                            var_14 = ((((max(50, 8110468047315183396))) ? ((min(8, (max((arr_4 [i_0]), var_1))))) : ((~(arr_0 [i_0])))));
                        }
                    }
                }
                var_15 = (-1394599565 && 1);
            }
        }
    }
    var_16 = (min(var_16, (((((1 != (min(98, var_2)))))))));

    /* vectorizable */
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        var_17 = (max(var_17, (((-(arr_16 [i_4 - 3] [i_4 + 1]))))));
        var_18 = ((2 ? 254 : 250));
        arr_20 [i_4] [i_4] = (((arr_18 [i_4] [i_4]) != (arr_18 [i_4] [i_4 + 1])));
    }
    #pragma endscop
}
