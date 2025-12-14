/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((+((53969 ? ((var_6 ? (-9223372036854775807 - 1) : (arr_3 [i_0] [i_1 - 1] [i_0]))) : -3815088884))));
                var_14 = 1533965133332174150;
                var_15 = (min((((-(arr_4 [i_1] [i_1 - 1] [i_1 + 1])))), ((((var_10 ? var_8 : var_6)) / (((65524 + (arr_4 [i_1] [i_0] [i_1]))))))));
                var_16 = var_8;
            }
        }
    }
    var_17 = ((var_1 ? var_6 : var_7));
    var_18 += -var_2;
    var_19 = -9011407273123621173;
    var_20 = (((~-9890) ? 176 : var_4));
    #pragma endscop
}
