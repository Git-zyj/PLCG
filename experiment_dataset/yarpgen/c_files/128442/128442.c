/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((0 << 0) ? var_8 : (257653488412572548 < var_3)))));
    var_20 = (max(var_20, (~var_6)));
    var_21 &= ((!((!((max(var_0, var_12)))))));
    var_22 = (min(var_22, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = (max(var_23, 74904755313711850));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_24 += ((((var_12 ? var_8 : var_17))) ? -var_6 : (max(var_13, var_18)));
                            arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] = (((((!(var_10 + 14051408991074706348)))) << (max(var_11, (min((-9223372036854775807 - 1), 8))))));
                            var_25 ^= ((!(((var_6 ? var_9 : 0)))));
                        }
                    }
                }
                arr_10 [i_1] [i_0] |= (var_4 | var_18);
            }
        }
    }
    #pragma endscop
}
