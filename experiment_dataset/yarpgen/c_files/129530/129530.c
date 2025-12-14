/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max(18446744073709551615, (arr_2 [i_0] [i_1] [i_1])));
                arr_4 [i_0] [i_1] = (max((min(var_10, (arr_1 [i_0] [i_0]))), var_10));
                arr_5 [i_0] = ((((min((arr_2 [i_0] [i_1] [i_1]), (arr_0 [i_0])))) ? (min(var_6, ((14 ? var_8 : var_0)))) : (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = ((max((~var_7), (!18446744073709551612))));
                            arr_11 [i_0] = (((arr_7 [i_0] [i_0] [i_0]) ? ((7037676996800847566 ? 18446744073709551615 : 100)) : (min(var_1, var_2))));
                            arr_12 [8] [i_0] [i_2] [i_2] [i_3] [i_3 - 2] = (min(2449627995, ((min(3755643536, 64608)))));
                        }
                    }
                }
                var_14 = (((((!(((var_1 ? -90 : var_3)))))) >> (((22763 | var_11) - 64733))));
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
