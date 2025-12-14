/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [20] [i_3] = (((arr_2 [i_0] [i_0 - 2]) ? ((var_12 ? (arr_2 [i_0] [i_0 + 1]) : (arr_2 [i_0] [i_0 + 1]))) : (arr_2 [i_0] [i_0 - 1])));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_20 = (arr_4 [1] [i_1] [i_2] [i_0]);
                            arr_12 [i_3] [i_3] [i_3] [i_3] [i_0] = 1;
                            var_21 += ((((((240 >> (3196404606 - 3196404602))))) ? ((-(arr_2 [i_4] [i_0 - 1]))) : (((min(var_4, var_11))))));
                            arr_13 [i_0] [i_0] [13] [i_0] [i_0] [8] = ((((((arr_11 [i_0] [i_2 + 4] [i_3]) ? var_15 : (arr_11 [i_0] [i_2 + 1] [i_2 + 1])))) ? (((12355995535870483751 ? 31 : 1))) : (((!(arr_1 [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (((arr_5 [i_0] [i_0 - 2] [i_0]) ? ((max((55675 != 1), var_3))) : ((-(min((arr_4 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0])))))));
        arr_15 [i_0] = ((!(((((arr_11 [i_0] [1] [i_0]) || var_14)) && 35))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_22 = (((((var_9 ? (max(1098562667, var_12)) : (((max(-44, (arr_2 [14] [14])))))))) ? (((var_12 ? var_13 : var_8))) : (max((arr_0 [20]), (arr_0 [4])))));
        arr_18 [2] [9] = ((((!(!var_10))) ? (var_9 + 2264900335874811923) : (arr_4 [i_5] [i_5] [i_5] [16])));
        var_23 ^= (((-(arr_10 [20] [i_5] [i_5] [i_5] [20] [4]))));
    }
    var_24 = var_16;
    var_25 = ((((min((var_12 << 1), -var_17))) || var_15));
    #pragma endscop
}
