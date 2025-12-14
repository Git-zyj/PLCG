/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((min(var_10, var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (((((((18446744073709551586 ? -1244190091780936970 : 0))) ? ((1244190091780936948 / (arr_6 [i_0] [1]))) : (~var_11))) > var_7));
                                var_14 = ((min(((((arr_5 [i_3] [i_2] [i_1]) << (var_3 + 1220)))), (((arr_5 [i_0] [i_4 - 1] [20]) ? 10421 : -27)))) >> ((((max(var_6, var_2))) - 416133245)));
                            }
                        }
                    }
                    var_15 = ((max(var_10, 11)));
                }
            }
        }
    }
    #pragma endscop
}
