/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;
        var_11 *= (((((~((min(var_3, (arr_1 [i_0]))))))) ? var_2 : ((((min(3343709040438993343, (arr_1 [i_0])))) ? (arr_0 [i_0 + 1]) : (max((arr_0 [i_0]), var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 *= ((87 ? 169 : -48));
                    arr_10 [i_2] [11] [i_2] [i_1] = ((!(((((((~(arr_6 [i_0 + 1] [1]))) + 2147483647)) >> (-14939 + 14954))))));
                    arr_11 [i_1] [i_1] [i_0] = (((arr_4 [i_0 - 1] [10] [i_2 - 1]) < (max(((var_2 ? var_9 : 161)), (arr_6 [i_0 - 1] [i_2 + 4])))));
                }
            }
        }
        var_13 *= var_1;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                var_14 = var_5;

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_15 *= (arr_15 [i_4 + 1] [i_4] [i_5]);
                        var_16 *= var_3;
                        var_17 = (min(var_17, (~var_3)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_18 *= (!7);
                            var_19 = (arr_19 [i_3] [i_3]);
                        }
                        var_20 = (var_10 / var_10);
                    }
                    var_21 *= 69;
                }
                var_22 = (max(var_22, ((((((!(arr_13 [i_3] [i_4 + 1])))) * (var_8 >= -818209147621057304))))));
                var_23 *= (arr_13 [i_3] [i_4]);
                var_24 = (min(var_24, ((((arr_25 [i_3] [i_4 + 1] [i_3] [i_4]) ? (((arr_17 [i_3]) ? (((var_5 ? var_10 : 161))) : (arr_13 [i_4 + 1] [i_4 + 1]))) : (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
