/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (i_1 % 2 == zero) ? (((((((5091341776745465770 ? (arr_1 [i_0]) : 988297040)))) && (((((min(17973, 5091341776745465761))) ? ((((((arr_3 [i_1]) + 2147483647)) << (((((arr_3 [i_1]) + 527227728)) - 7))))) : var_1)))))) : (((((((5091341776745465770 ? (arr_1 [i_0]) : 988297040)))) && (((((min(17973, 5091341776745465761))) ? ((((((arr_3 [i_1]) + 2147483647)) << (((((((arr_3 [i_1]) + 527227728)) - 7)) - 486561266))))) : var_1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = var_8;
                            var_12 = (min(var_12, (-2147483627 != 8883150979653349131)));
                            arr_10 [i_1] [i_1] [i_2] = (!var_3);
                        }
                    }
                }
                var_13 = max((((min(5091341776745465770, (-32767 - 1))))), 5091341776745465769);
                arr_11 [i_1] = (~-5091341776745465763);
            }
        }
    }
    var_14 += var_3;
    var_15 = var_7;
    #pragma endscop
}
