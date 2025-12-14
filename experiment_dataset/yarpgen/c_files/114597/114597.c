/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(262144, ((max((min(32810, 208)), var_10)))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = ((10412962266078051360 ? var_3 : var_8));
                            arr_13 [i_0] [i_1] [5] [i_1] = (((((min(var_6, 11)))) <= (arr_2 [i_3] [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_16 = (((arr_10 [i_0 + 1]) ? (((arr_10 [i_4 - 1]) ? (arr_10 [i_4 - 1]) : (arr_10 [i_5 - 1]))) : (arr_10 [i_4 - 1])));
                            var_17 = (min(var_17, ((((32706 | -23903) ? (~32812) : (((min((arr_15 [i_1] [i_4]), (arr_17 [i_1] [i_4 - 1] [8]))) % (~32812))))))));
                            var_18 = ((!((((((-(arr_11 [i_0 - 1] [i_1] [i_4] [i_5])))) ? -10 : 32809)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((((((5570 & ((var_10 ? var_12 : var_6))))) ? (max(-var_6, ((var_12 ? 1492 : -2147483636)))) : 26693)))));
    #pragma endscop
}
