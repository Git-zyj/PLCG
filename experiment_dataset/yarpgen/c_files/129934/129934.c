/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = ((min((arr_1 [i_3 - 1]), (arr_0 [i_3 - 2]))));
                            var_18 = (var_7 ? (arr_10 [i_0] [i_0] [i_2] [i_0] [i_3 - 2]) : (((arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_0]) ? (arr_6 [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_0]) : (arr_8 [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3 - 2]))));
                        }
                    }
                }
                var_19 &= ((1440398546 ? var_5 : (((arr_1 [i_0]) ? var_2 : (arr_1 [i_0])))));
                arr_11 [i_0] = var_8;
            }
        }
    }
    var_20 = (max(var_20, var_3));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = ((+((((((arr_12 [i_5 - 1] [i_6]) ? var_11 : (arr_4 [i_4] [i_5 + 1] [i_4])))) ? (arr_5 [i_4]) : ((((arr_16 [i_6] [i_5 - 2] [i_4]) ? 8 : var_12)))))));
                            var_22 = -1;
                            var_23 = (arr_4 [i_4] [i_4] [i_4]);
                        }
                    }
                }
                var_24 = ((((7189662586893226212 ? 35173 : (arr_8 [i_5 - 3] [i_5 - 2] [i_5] [12]))) >= (((arr_8 [i_5 + 1] [i_5] [i_4] [i_4]) ? (arr_8 [i_5 - 2] [i_5 - 2] [i_5] [i_5 + 1]) : (arr_8 [i_5 - 2] [i_5 - 2] [i_4] [1])))));
            }
        }
    }
    var_25 = ((!((((var_11 ? var_12 : 1197738025745988623))))));
    #pragma endscop
}
