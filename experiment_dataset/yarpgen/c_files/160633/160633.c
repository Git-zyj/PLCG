/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [5] [5] [i_1] = (((max((((-4 ? -2 : (arr_2 [i_1])))), (arr_3 [18] [i_1]))) <= (min((var_12 / -2079017630), (~var_6)))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = (min((((arr_6 [i_0] [9] [i_2] [i_3]) ? -2079017630 : -1)), (min((arr_12 [i_0] [i_1 + 2] [19] [i_3] [1] [i_1]), 62914560))));
                            var_14 &= (arr_10 [12] [12] [i_0] [12]);
                            var_15 = (min(var_15, ((min(((max(var_9, (-32767 - 1)))), ((~(arr_2 [8]))))))));
                            var_16 *= (min(((var_5 ? (arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 2] [5]) : 1377637788)), (~-534738825)));
                            var_17 = 61503;
                        }
                        var_18 = (min(var_18, (((-((~(((arr_11 [i_0] [1] [i_2] [i_1]) ? var_3 : (arr_8 [i_1] [i_1]))))))))));
                    }
                }
            }
        }
    }
    var_19 = ((((min(((var_10 ? 2917329508 : 4274709917)), var_4))) ? -var_2 : (-2147483647 - 1)));
    #pragma endscop
}
