/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 *= (((~(arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = var_2;
        var_13 = var_0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((max(var_1, (arr_5 [i_1])))) ? ((-(arr_7 [i_1]))) : ((var_0 ^ (arr_7 [i_1]))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 -= (arr_5 [i_1]);

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_15 |= 4279174236;
                            arr_20 [i_2] [i_2] = (!var_8);
                            var_16 = ((23274 ? 1 : 1));
                        }
                    }
                }
            }
            arr_21 [i_1] [i_2] = -27;
            var_17 = (min(var_17, 1));
            var_18 = (min(var_18, (arr_2 [1])));
        }
        var_19 = (((arr_14 [i_1] [i_1] [i_1] [i_1]) == 1));
        var_20 = ((((arr_13 [i_1] [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_10 [6]))));
    }
    var_21 = var_5;
    #pragma endscop
}
