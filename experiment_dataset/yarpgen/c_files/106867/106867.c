/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = var_6;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_17 [i_0] = (arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0]);
                            var_21 = (max(var_21, var_18));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3] [i_3] = (+-13);
                        }
                        arr_19 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = ((((!(arr_5 [i_3] [i_0])))));
                        var_22 = 3877745592;
                    }
                }
            }
        }
        var_23 = -5244896693879035643;
        var_24 &= ((+(((arr_13 [i_0] [i_0] [8] [i_0]) + (arr_3 [i_0] [i_0])))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_25 = ((((((~(arr_3 [i_5 - 1] [i_5 - 1]))))) / (max(((-(arr_14 [i_5]))), 24))));
        var_26 &= (min(((+((min((arr_1 [i_5 + 2]), (arr_5 [i_5] [4])))))), var_5));
        arr_22 [0] [i_5] = ((min(3730817548, (arr_8 [i_5 + 3] [i_5 + 3] [i_5]))));
        var_27 = (arr_20 [i_5]);
        var_28 &= var_0;
    }
    var_29 = ((~((~(~3)))));
    #pragma endscop
}
