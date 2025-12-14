/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(231455232984565115, (((((var_18 ? var_7 : 36028797017915392)) ^ 38)))));
    var_20 = -36028797017915397;
    var_21 = var_9;
    var_22 ^= ((((((4015858508579266634 ? -97 : 1750482690)) >> var_6))) ? (max((((16777215 ? 1 : var_11))), (~var_5))) : var_18);

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_23 ^= 2814577069;
        var_24 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 204;

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_25 *= (((41 - 1480390226) ? (arr_0 [i_1 + 1]) : (max((arr_0 [i_1 + 1]), 1480390216))));
            arr_8 [i_1] = ((1480390226 ? -34 : 268435456));
            arr_9 [i_1] [i_1] = (((max(((((arr_3 [i_1] [i_2]) % 1175464245))), ((-28107 ? (arr_2 [i_1]) : 18014398509481968)))) - (((((max(16202230851141405149, var_11))) ? (max(1, 8190)) : (~1808610074))))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = ((+(((!((min((arr_11 [i_1]), (arr_11 [i_1])))))))));
            var_26 = (min(var_26, var_1));
            arr_13 [i_1] = ((((max(((2139095040 ? 18428729675200069668 : 2113929216)), (((-28107 + (arr_0 [i_3]))))))) ? (((arr_6 [i_1] [i_3] [i_3]) + ((((arr_1 [i_1]) - 49033))))) : (arr_6 [i_1] [i_1] [i_1])));
        }
    }
    #pragma endscop
}
