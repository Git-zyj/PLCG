/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? var_14 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    var_17 ^= (((((arr_3 [i_0] [i_0 + 3] [i_0 - 2]) >= (arr_3 [i_0] [i_0 + 2] [i_0]))) ? (((arr_2 [i_2 - 2] [i_0 - 3]) ? var_1 : var_11)) : ((max(14519, 51009)))));
                    var_18 = (min(var_18, (((((18446744073709551589 ? (arr_0 [i_0 - 2]) : var_9)) - (arr_3 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [7] [i_3 - 2] [i_4] [i_3 + 1] = min((arr_3 [i_0] [i_1] [i_1]), var_1);
                                var_19 = (min((min((!var_4), ((var_11 ? var_9 : var_1)))), (arr_7 [i_4] [i_4] [i_4] [i_1])));
                                arr_16 [i_1] [i_1] = (arr_14 [i_3] [i_3] [9] [i_3 - 3] [i_3 - 2]);
                                arr_17 [i_1] [i_1] = (((arr_2 [i_2 + 1] [i_0 + 1]) % (min(12815425469634482113, 9223372036854775804))));
                            }
                        }
                    }
                }
                var_20 = (arr_4 [i_0]);
            }
        }
    }
    #pragma endscop
}
