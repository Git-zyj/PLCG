/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!(var_0 * var_10)))), ((16350 ? -1 : -26749))));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (-((-(max(-4965424028605335656, 0)))));
                arr_7 [i_0] = (max((arr_3 [i_0]), (arr_5 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] = (min((min((((~(arr_2 [i_1])))), ((-(arr_4 [i_0]))))), (arr_0 [i_0])));
                            var_16 = (((((~(arr_11 [i_0] [i_1] [i_3] [i_0])) * (!-4965424028605335656)))));
                            var_17 = (((~131071) ? (!-82) : (arr_12 [i_2] [11] [i_2])));
                            var_18 = (((((arr_8 [i_1] [i_1] [i_1 - 1] [i_1]) ? (arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) : (arr_8 [i_1] [i_1] [i_1 - 1] [i_1]))) + (((arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1] [i_1] [i_1 - 1] [i_1]) : (arr_10 [9] [i_1 - 1] [i_1 - 1] [15] [i_1])))));
                        }
                    }
                }
                var_19 = min((!12952), (min(27326, 4965424028605335637)));
            }
        }
    }
    #pragma endscop
}
