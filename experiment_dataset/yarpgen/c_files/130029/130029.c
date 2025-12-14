/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 &= ((-((((arr_1 [i_0] [i_0]) >= var_4)))));
        arr_2 [i_0] [i_0 - 4] = ((var_4 ? (max((min(1607207362610135254, (arr_0 [i_0]))), (arr_1 [i_0] [14]))) : (((((var_0 ? var_17 : (arr_1 [i_0] [i_0]))) ^ (arr_1 [i_0 + 1] [i_0 - 2]))))));
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 4] [i_1] |= ((-42 ? (((var_8 > (arr_6 [i_1])))) : (arr_6 [i_1 - 1])));
        var_19 = (max(var_19, (arr_4 [i_1 - 3] [i_1])));
        arr_8 [i_1] = (min((((748956646 > (max((arr_6 [13]), (arr_5 [i_1] [i_1])))))), (arr_4 [i_1 - 3] [i_1 - 1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_20 = (((((+((var_0 ? (arr_0 [i_3]) : (arr_9 [i_3])))))) && (((~(max((arr_6 [i_2]), (arr_15 [i_2] [i_2] [i_2]))))))));
                    var_21 = ((+(((arr_5 [i_2] [i_2]) ? 33292288 : 302075691))));
                    var_22 = ((max((arr_0 [i_2]), (arr_0 [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
