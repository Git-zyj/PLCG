/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((var_17 != (((((((max(var_3, 12577)))) == ((1 ? 32077 : 9054365622212833436))))))));
    var_21 = (0 ^ -8237617218845304614);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_22 = -31071;
        var_23 = (max(var_23, ((((var_6 ? var_2 : 0))))));
        var_24 = (((var_4 < var_11) ? var_11 : (arr_1 [i_0] [i_0 - 1])));
        arr_4 [i_0 - 1] = ((-27247 > (((var_14 > (arr_2 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_25 &= min((((!1) & (max(var_12, (arr_0 [i_1]))))), (min(var_10, (!var_0))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_1] = var_0;
            arr_11 [i_1] = ((((min((arr_5 [i_1]), (arr_5 [i_1])))) ? (max(var_8, var_12)) : (min(var_6, (arr_5 [i_1])))));
            arr_12 [i_1] [i_2] [i_2] = ((((((562812514467840 / (~29313))) + 9223372036854775807)) >> (((min((min(var_7, -16400)), (-319684830 | var_13))) + 8321895244553956556))));
        }
    }
    #pragma endscop
}
