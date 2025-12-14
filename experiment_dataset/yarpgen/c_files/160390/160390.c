/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 += (arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 -= ((~((~(((arr_5 [i_0] [18]) ? -8 : (arr_0 [0])))))));
                            arr_11 [i_2 + 1] [i_0] [i_2 - 2] [i_3] = var_1;
                            var_18 = (((((~((var_8 ? (arr_1 [i_0] [i_1]) : var_11))))) ? ((-(min(-19, var_12)))) : ((~(min((arr_4 [i_3] [i_3] [i_3] [i_3]), (arr_3 [i_0])))))));
                            var_19 = var_7;
                            var_20 = (max(var_20, ((min(((((max((arr_8 [3] [i_1] [i_2 + 1] [i_3]), (arr_6 [i_0] [i_1] [i_2] [4])))) ? (arr_6 [i_0] [i_0] [i_0] [0]) : (min(-30877, (arr_8 [i_0] [i_1] [i_0] [i_0]))))), 1)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (max(var_21, ((max((-2147483647 - 1), (arr_12 [i_4]))))));
                    var_22 = (arr_6 [i_6] [i_5] [i_4] [i_6]);
                    arr_18 [i_4] [i_5] [8] [i_5] &= -1440854457726178458;
                    var_23 = (max(var_23, ((((arr_0 [i_5]) ? (max(4088, 179)) : 0)))));
                }
                var_24 -= (min((arr_4 [i_4] [i_4] [i_4] [i_4]), (min(127, ((var_7 ? var_7 : -30877))))));
            }
        }
    }
    #pragma endscop
}
