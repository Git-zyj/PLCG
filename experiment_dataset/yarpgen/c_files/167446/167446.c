/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] = ((9223372036854775807 ? 2147483647 : 1535429640));
                            var_16 = ((-(((!(arr_1 [i_2 - 4] [i_2 + 2]))))));
                        }
                    }
                }
                var_17 = (min(var_17, (((-7084217216118920656 ? (273706504 >= 0) : var_2)))));
                arr_9 [i_0] [i_0] [1] = (((1 ? 1 : 19642)) < ((var_13 ? var_6 : (arr_1 [i_1] [i_0]))));
            }
        }
    }
    var_18 = ((-((((var_14 << (var_14 - 30965)))))));
    var_19 = var_13;
    #pragma endscop
}
