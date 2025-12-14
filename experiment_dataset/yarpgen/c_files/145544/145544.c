/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((18446744073709551615 ^ 71) ? var_9 : -1652355234555210812)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (((var_15 | 23) ? var_10 : (-7926163512817565924 ^ -1652355234555210824)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, var_11));
                                var_19 = ((((~(min(var_2, -9223372036854775796)))) >= ((((var_2 != (-1652355234555210813 == 1)))))));
                                var_20 = (max(var_20, ((((((-(var_15 != -8160176495804054999)))) ? ((min(170, -23466))) : 1)))));
                                arr_12 [i_0] [i_1 + 3] [i_2] [i_4] [i_4] [i_4] [i_0 - 2] = ((523 + var_12) == (1199543925 || 1));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((((min(var_2, 9223372036854775795)))) ? var_9 : (((((var_14 * 0) >= (~67))))))))));
                    var_22 = 1652355234555210801;
                }
            }
        }
    }
    var_23 = var_7;
    var_24 = 3485223218;
    #pragma endscop
}
