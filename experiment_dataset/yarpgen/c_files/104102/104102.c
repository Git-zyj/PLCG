/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (1833761203290966675 || 3889742335);
        arr_2 [1] &= (arr_1 [i_0 + 1]);
        var_14 = (arr_0 [i_0]);
        var_15 = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = min(((-(max((arr_0 [i_1]), var_10)))), (((-(arr_3 [i_1 + 1])))));
        arr_7 [i_1] [i_1] = (max((((339776198 && (((arr_1 [i_1 + 1]) == (arr_3 [i_1])))))), var_4));
        var_16 = (arr_4 [i_1 - 1]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [i_2] = (arr_4 [i_3]);
            arr_13 [i_2] [i_3] [i_3] = (min((max(7334386296202690365, ((-(arr_11 [i_2] [i_3] [15]))))), 0));
        }
        var_17 = -var_11;
        arr_14 [i_2] = 7152;
        var_18 -= (((1961908151 / 1) >= -65516));
        var_19 = 4396803126718528916;
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_20 = 15011;
        arr_17 [i_4] [i_4] = 12933;
        arr_18 [i_4] = var_2;
    }
    var_21 |= var_2;
    var_22 = (var_10 ^ (((-var_3 ? var_8 : -0))));
    #pragma endscop
}
