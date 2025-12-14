/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_13 = (~59618);
                        arr_10 [i_0] [i_1] [i_2 - 3] [i_0] = (((((0 ? 3072 : 3072))) ? ((((max(var_9, (arr_9 [i_2 - 3] [i_1] [i_3] [i_0] [i_2 - 3] [i_0])))) ? (arr_0 [i_0]) : var_2)) : ((2432265182619841935 ? ((var_7 ? var_7 : 255)) : ((var_8 ? var_3 : (arr_4 [i_0] [i_0] [i_0])))))));
                        var_14 = (min(var_14, (arr_3 [i_0] [i_0 - 3] [i_0])));
                        arr_11 [i_0] = (max(((((arr_5 [i_2 - 2] [i_1] [i_2 - 2]) ? 62464 : (arr_5 [i_2 - 3] [i_1] [i_0 + 1])))), (((var_10 == 18757) ? (max(var_5, var_8)) : (((min(251, var_2))))))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_15 = (-32767 - 1);
                        arr_14 [i_4] [i_0] [i_0] [i_0] [i_0 + 1] = var_10;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] = var_7;
                        arr_19 [i_0] [i_1] [i_2] [i_5] = (((((((22878 ? var_10 : (arr_17 [i_0] [i_1] [i_2]))) | (var_12 ^ var_3)))) ? (arr_3 [i_0] [i_0] [i_5]) : ((((var_5 ? var_0 : (arr_6 [i_0]))) & ((max((arr_17 [i_0] [i_0] [i_0]), (arr_2 [i_1] [i_0]))))))));
                    }
                    arr_20 [i_0] [i_1] = ((((min((min(var_11, (arr_13 [i_0]))), ((max((arr_17 [i_0] [i_1] [i_2]), var_4)))))) ? ((min((arr_6 [i_0]), (arr_6 [i_0])))) : (((!(arr_8 [i_2 - 2] [i_0 - 3]))))));
                }
            }
        }
    }
    var_16 = (((((-((var_2 ? 28191 : var_3))))) ? (-7 + -var_7) : var_2));
    var_17 = (!var_2);
    var_18 ^= var_6;
    var_19 = (-((-((var_6 ? var_0 : var_11)))));
    #pragma endscop
}
