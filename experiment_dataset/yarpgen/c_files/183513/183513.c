/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((0 >> (65535 - 65531)))) ? var_6 : var_9))) ? -39 : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = 0;
                            var_12 = ((+((((max((arr_9 [i_0 - 1] [i_2] [i_0 - 1]), var_4))) ? (max((arr_8 [i_1] [i_2] [i_1] [i_1] [i_0] [i_1]), (arr_2 [i_0] [i_1] [0]))) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            var_13 = ((var_7 ? (((min((arr_4 [i_1 - 1] [i_1 - 1] [i_3]), var_6)))) : var_9));
                        }
                    }
                }
                var_14 = ((((arr_8 [i_1] [i_0] [i_0] [i_0] [i_1] [i_1]) ? (((!(arr_6 [i_0 + 3] [i_0] [i_1 - 2] [7])))) : ((((arr_0 [i_0 - 2]) < var_9))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_15 = ((~(arr_5 [i_0 + 2] [i_1 + 1] [i_4] [i_1])));
                    var_16 = var_7;
                    var_17 = ((((var_3 ? var_2 : var_0)) ^ (arr_5 [i_0 - 1] [i_0 + 3] [i_4] [i_0 + 1])));
                }
            }
        }
    }
    var_18 = (var_5 ? 121 : var_1);
    #pragma endscop
}
