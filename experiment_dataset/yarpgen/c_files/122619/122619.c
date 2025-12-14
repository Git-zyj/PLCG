/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((var_5 < (min(((var_6 ? var_13 : 2199023255551)), ((var_13 ? var_6 : var_7)))))))));
    var_16 = (max(var_16, (((var_5 ^ (max((((var_7 ? 0 : var_1))), (min(var_3, var_7)))))))));
    var_17 = (((((var_14 < (max(var_5, var_12))))) != ((38 ? 21 : 172))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_1 [i_0 + 1] [1]);
            var_18 *= -var_9;
            var_19 |= ((((min((arr_3 [i_1 + 1] [6]), var_1))) ? ((var_0 ? 23 : (arr_2 [i_0] [i_1]))) : (~-1)));
            arr_7 [i_0] = var_1;
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_20 = (max(var_20, (arr_8 [i_2 - 1] [i_0] [i_0 + 2])));
            arr_11 [i_0] = var_14;
            arr_12 [i_2] [i_0] [i_0] = ((186 ? var_12 : (((84 ? 46 : (((arr_5 [i_0]) - 171)))))));
        }
        arr_13 [i_0] = ((var_14 >> (arr_5 [i_0 + 2])));
        var_21 = (max(var_21, var_2));
        arr_14 [i_0 + 1] = (((((+(((arr_2 [i_0] [i_0]) * var_0))))) ? (arr_5 [i_0 + 1]) : var_13));
        var_22 = (min(var_14, (((arr_1 [i_0] [i_0 - 1]) * var_13))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_20 [i_3] [i_3] [16] = -4;
            var_23 = var_0;
            var_24 += ((((((min(var_12, (arr_15 [i_3])))) ? var_9 : var_5))) * ((~((var_0 << (var_13 - 37))))));
            var_25 = arr_16 [i_3];
        }
        arr_21 [i_3] = ((55164 ? (((min(var_14, var_5)))) : 6567366376673299712));
    }
    #pragma endscop
}
