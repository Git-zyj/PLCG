/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 % (((-31462 <= (max(4130102772080232820, var_14)))))));
    var_16 = var_1;
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max((arr_4 [i_0] [i_0] [i_0]), (((arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 4]) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 4]) : var_1))));
                arr_6 [i_0] [i_1] = (arr_1 [i_0]);
                arr_7 [i_1] [i_0] [i_0] &= (max(((935376382 ? var_10 : (((max((arr_1 [i_1]), (arr_0 [i_1] [i_1]))))))), ((max(var_9, (min(var_0, 102)))))));
            }
        }
    }
    #pragma endscop
}
