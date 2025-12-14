/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [11] [i_1] [8] [i_3 - 1] [i_3] [i_1] = ((-(var_8 + 9223372036854775807)));
                            var_12 = ((-(max(var_9, 9223372036854775807))));
                            arr_13 [i_1] [i_2] [i_1 + 3] [i_0] [i_1] = -var_2;
                        }
                    }
                }
                arr_14 [i_0] [i_1] = var_9;
                arr_15 [i_1] [i_1] = 18446744073709551597;
                arr_16 [i_1] [i_1] = (!((min(((((arr_9 [i_1] [i_1]) >> (var_1 + 6468532179627407008)))), (arr_4 [i_1] [12] [i_1])))));
                arr_17 [i_1] [i_1] [i_1] = (arr_10 [i_0] [i_0] [0]);
            }
        }
    }
    var_13 = (min(var_7, ((+(((-9223372036854775807 - 1) ? var_8 : var_11))))));
    var_14 ^= ((((min(((max(var_9, 0))), var_1))) ? (~var_10) : 0));
    var_15 = (((((((max(var_5, var_0))) ? var_8 : (max(var_6, 576102692))))) ? 9223372036854775808 : ((((((var_0 ? 8 : var_6))) ? var_5 : (~9223372036854775807))))));
    #pragma endscop
}
