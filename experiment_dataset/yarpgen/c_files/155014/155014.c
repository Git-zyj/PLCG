/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = var_8;
        var_20 = (((147 ? (26 >= var_5) : ((((arr_1 [8]) == var_17))))));
        var_21 = 1;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [6] [i_1] &= (((arr_5 [2]) < (arr_1 [i_1 - 1])));
        arr_7 [i_1] = 203;
        var_22 = (max(((max((arr_0 [i_1 - 1] [i_1 - 1]), var_16))), ((((((arr_4 [i_1 + 1]) << (arr_4 [i_1])))) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        var_23 = (arr_2 [i_1]);
                        var_24 = (((((arr_8 [i_1 - 1]) ? var_14 : 108)) == ((((arr_8 [i_1 - 1]) >= (arr_8 [i_1 - 1]))))));
                        var_25 = var_4;
                        var_26 &= (((((arr_12 [i_4 - 1] [i_2] [i_3] [i_1 + 1]) && (arr_12 [i_4 + 1] [i_1] [i_1] [i_1 - 1]))) && (((arr_12 [i_4 + 1] [i_4] [i_3] [i_1 + 1]) <= (arr_0 [i_4 - 1] [i_4 - 1])))));
                    }
                }
            }
        }
    }
    var_27 = var_10;
    var_28 &= -var_5;
    var_29 = (!var_18);
    #pragma endscop
}
