/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((-9223372036854775807 - 1) ^ var_9);
                var_12 = max(((((min(var_6, 1))) ? 2 : var_10)), var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += (!((!(-2147483647 - 1))));
                            arr_9 [i_0] [3] [i_0] [i_2] [i_0] [i_0] = (-9223372036854775807 - 1);
                            arr_10 [i_2] [i_1] [i_1] [1] [3] [i_1] = ((18446744073709551605 ? -14046 : (min(1, 36028797018947584))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_14 = -11919;
                                var_15 = (max(var_15, (((-(((1 & 36028797018947584) ? ((max(var_9, -96))) : -23)))))));
                                var_16 = (25866 & var_8);
                                arr_20 [i_4] [i_1] = ((((25884 ^ (arr_12 [i_5] [i_5] [i_4]))) + (((-9223372036854775790 + 1) ? 39648 : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 4294967282;
    #pragma endscop
}
