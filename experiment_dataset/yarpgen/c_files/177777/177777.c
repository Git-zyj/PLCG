/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = 12354188167955098819;
                var_17 = ((-var_9 * (-1998983984 > 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = ((((-1 - 3) < (arr_2 [i_1]))) ? -646857728 : (min((((var_2 ? 0 : var_1))), -16262353866933395432)));
                            var_19 = (((3663030402 << 3) | (((min(253, 26270))))));
                            var_20 = (max(var_20, (((-76 ? ((min((arr_3 [i_3 - 1]), 1))) : -var_4)))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (min(((((((246 ? -23665 : 0)) + 2147483647)) << (((6092555905754452785 >= (arr_6 [i_0] [i_0] [i_0])))))), (~-55)));
                arr_14 [8] [8] = (min(239, 13890679943458976342));
            }
        }
    }
    var_21 = ((((min(14, var_12))) % (~251)));
    var_22 = (!var_5);
    #pragma endscop
}
