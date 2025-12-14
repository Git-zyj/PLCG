/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (min(var_6, var_7));
    var_13 &= -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (~0);
                var_14 = (max((!var_10), (((-(arr_3 [i_1]))))));
                var_15 = (min((((arr_1 [i_1] [i_0]) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_1]))), (((var_5 == (max(60, 2147483647)))))));
                var_16 = 2958253113037960196;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] = (((((-2029754286436046833 ? (arr_0 [i_4]) : -2958253113037960197))) ? ((-52 ? var_7 : 77)) : (!1)));
                                var_17 = -565622464;
                                var_18 = arr_2 [i_1] [i_1] [i_1];
                                var_19 = (max(var_2, ((max(1, (arr_3 [i_2 + 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_8 > ((var_6 ? ((min(var_3, var_8))) : -1913708450)));
    #pragma endscop
}
