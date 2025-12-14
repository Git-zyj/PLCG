/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (1748521507 > 3645886347);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [1] = var_8;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_14 = (min(var_14, (((((~(arr_5 [i_2])))) ? 7604 : (var_10 / 649080949)))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [i_0] [i_4] = var_0;
                            var_15 *= -19530;
                            var_16 *= ((!(((649080922 ? ((3645886395 ? 1668973854 : 3674)) : (arr_11 [i_1] [i_2] [i_3 - 1] [i_4 - 1]))))));
                            arr_16 [i_0] [i_0] [i_2] [7] [i_0] [i_3] [i_4] = ((((~(arr_11 [i_1] [i_2] [i_3] [i_4 + 1]))) - ((~(arr_14 [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_3])))));
                            arr_17 [i_1] [i_2] [i_1] [i_0] = (-((((arr_2 [i_0]) ? (arr_6 [0] [0] [1]) : 101))));
                        }
                    }
                }
                arr_18 [i_1] [i_0] [i_0] [i_2] = ((141 ? -2125641797684830191 : 14919196964722897109));
                arr_19 [i_0] = ((var_10 <= (((max((arr_13 [i_2] [i_0] [i_1] [i_1] [i_1] [i_0] [15]), var_11)) >> ((((3527547108986654507 ? 114 : var_3)) - 84))))));
            }
            var_17 = (((arr_1 [i_1]) > -3661));
        }
    }
    #pragma endscop
}
