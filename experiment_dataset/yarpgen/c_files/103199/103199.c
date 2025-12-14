/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 2010144914;
                var_17 = ((-2010144914 ? -107 : -5604));
            }
        }
    }
    var_18 = var_6;

    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {

                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_19 = (arr_7 [10]);
                            var_20 = (max(var_20, (arr_5 [i_6] [i_6])));
                        }

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_20 [i_7] = -2010144915;
                            var_21 += (!0);
                        }
                        arr_21 [i_2] [1] [1] [i_3] [18] [i_2] = (~(~1));
                    }
                }
            }
        }
        arr_22 [i_2] = ((~(max(((~(arr_5 [i_2] [i_2]))), -2010144914))));
        var_22 = (min(var_22, (((!(((-21765 ? 448520624 : 3813))))))));
    }
    #pragma endscop
}
