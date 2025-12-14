/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((0 % (6250645594356481859 - 248)))) || (0 * -11417));
    var_19 = var_0;
    var_20 = (min(var_20, (max((var_13 * var_1), 24))));
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = var_15;
                    var_22 = 157;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [5] [i_3] [i_0] = (~8116219977194944965);
                                var_23 = var_8;
                                var_24 *= -9270299292927582249;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 *= (!18446744073709551613);
                                var_26 = (2098720534994250270 < 1);
                                var_27 *= (arr_19 [10] [i_1] [i_1] [i_1] [i_5] [10] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
