/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = (max(((-var_8 - (((1003679403 + (arr_2 [i_0] [i_0])))))), ((((arr_1 [i_0] [7]) >> ((((arr_0 [i_0]) != var_0))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (min((((((var_7 < (arr_4 [i_0] [i_0])))) < (arr_5 [i_0] [i_0] [i_0 - 3] [i_0]))), 1));
                    var_16 = (arr_0 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (!8436758930610457429);
                                var_18 = ((((-(arr_2 [i_0] [i_0]))) >= ((((((arr_10 [9] [i_1] [i_1] [i_1] [i_1] [i_1]) & (arr_4 [i_0] [i_0])))) ? (arr_11 [i_0] [i_1] [i_2] [i_3]) : ((~(arr_12 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = var_10;
        arr_14 [i_0] = (arr_5 [3] [i_0] [i_0] [i_0]);
        var_20 = (max(var_20, (((((((arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 3]) >> (((arr_7 [i_0]) - 504977193))))) ? 88 : (min((((arr_4 [i_0] [8]) ? -8436758930610457430 : var_6)), (((var_12 ? var_12 : var_2))))))))));
    }
    #pragma endscop
}
