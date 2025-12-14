/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_11 = (((((min(var_4, var_2)))) ^ (max(1849046110, ((1 ? (arr_7 [i_0] [i_1 + 3] [i_2]) : var_0))))));
                    var_12 &= var_7;
                    var_13 = 29467;
                }
                arr_10 [i_0] [i_1] = (!((((((var_6 ? var_9 : var_5))) ? var_10 : (var_5 % -1)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        {

                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_14 = (max((max((arr_9 [i_0] [5] [i_4] [i_1]), var_8)), var_8));
                                var_15 *= var_3;
                                arr_19 [i_0] = 23409;
                                var_16 = ((var_1 >= ((((var_7 ? (arr_16 [i_0] [2]) : var_10)) / var_5))));
                            }
                            arr_20 [i_0] [3] [i_3] &= ((max(11624, (max((arr_2 [i_0] [i_0]), (arr_18 [i_4] [i_3] [i_3] [i_1 - 1] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (-1 < var_10);
    var_18 = (max(var_18, var_6));
    #pragma endscop
}
