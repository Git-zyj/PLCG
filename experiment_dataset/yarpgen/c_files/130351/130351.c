/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [11] [i_1 + 2] = -20;
            var_17 = (((((min(var_15, 181)))) - ((-((-1229063301479058862 * (arr_2 [i_1])))))));
            arr_7 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_0]);
            var_18 = (max(var_18, ((((min(3657856095, (-9223372036854775807 - 1))) & (((~(arr_5 [i_1 + 1] [i_1] [i_1 - 1])))))))));
        }

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_19 = (min(var_19, ((((((max(15, var_9) < -var_2))))))));
            var_20 = var_2;
            var_21 += ((((max(25, ((var_12 ? var_6 : 11571))))) / var_4));
        }
        arr_11 [i_0] = 181;
        var_22 ^= arr_10 [i_0];
        var_23 += (min((arr_0 [i_0]), (arr_8 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_24 = ((~(arr_2 [i_3])));
        arr_14 [i_3] = min((!1), var_10);
        arr_15 [i_3] = (((((116 ? -11559 : 48499))) ? var_8 : (((~((var_7 ? var_12 : 4)))))));
    }
    var_25 = var_6;
    #pragma endscop
}
