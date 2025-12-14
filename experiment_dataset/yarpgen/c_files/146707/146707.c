/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 18446744073709551609;
                var_17 = (!26);
                arr_6 [i_0] [i_0] [i_1] &= (((((max((arr_1 [11]), (arr_4 [i_0])))) ? var_12 : (arr_0 [2]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (((((((max(var_15, 18446744073709551609))) ? 0 : (arr_15 [i_3] [i_3])))) ? ((((arr_13 [i_3] [i_5]) ? (max(20, (arr_12 [i_2] [i_2] [i_2]))) : 1))) : ((((max(2147483647, var_2))) ? (((arr_17 [18]) & 15021594847164324791)) : -3924636521728021865))));
                                var_19 = (min(var_19, (((+(max(((((arr_7 [i_2]) ? (arr_20 [i_2] [i_3] [17] [i_3] [i_6] [i_4] [i_2]) : 33543))), (max((arr_19 [i_4]), var_11)))))))));
                            }
                        }
                    }
                    var_20 = (max(var_20, (!43)));
                }
                arr_21 [i_2] = ((+(max((~0), (((arr_20 [i_3] [i_3] [i_3] [7] [i_3] [9] [12]) ? (arr_9 [i_2]) : var_3))))));
                var_21 = (max(var_21, 0));
            }
        }
    }
    var_22 += var_8;
    var_23 = var_6;
    #pragma endscop
}
