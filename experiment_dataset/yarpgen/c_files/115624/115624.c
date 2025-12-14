/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (max(var_5, ((min(120, (var_10 >= var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = 76;
                            var_14 = (max(((12230954626944788481 ? 65529 : 1)), 108));
                            arr_8 [i_2] [i_1] = ((((min(var_10, 33373))) ? (arr_2 [i_3]) : ((((var_1 / (arr_3 [i_2] [i_2]))) >> ((var_1 ? 1569626199 : 1))))));
                        }
                    }
                }
                var_15 = (~9223372036854775807);
                arr_9 [i_0] [i_0] = ((-1569626199 ^ (!-1569626199)));
            }
        }
    }
    #pragma endscop
}
