/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(var_11, (~420586344));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 133169152;
        arr_4 [i_0] [i_0] = ((!((((!var_12) ? 59645605 : (!3578095960))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] = (((((max(0, 0))) ? var_5 : (4294967285 % var_3))) / (((((var_5 ? var_3 : var_12))) ? var_3 : (arr_5 [i_1] [i_1]))));
            arr_9 [i_0] = (((!(((var_9 + (arr_0 [8])))))) ? var_12 : 0);
            arr_10 [i_1] = ((!((((((var_12 ? var_10 : (arr_1 [i_1])))) ? (var_1 + 507643054) : (arr_6 [i_1 + 2] [i_1 + 1] [3]))))));
            arr_11 [i_0] = (min(507643078, (arr_2 [i_1 + 2] [i_1 + 2])));
            arr_12 [i_1] [i_1] [0] = (((((((11 << (((arr_1 [i_0]) - 1880162845))))) ? -935932370 : (((arr_0 [i_0]) + 3359034926))))) ? 1881930774 : (((arr_1 [i_0]) % var_12)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_15 [i_0] = ((var_11 ^ 202705427) ? -var_2 : (((arr_5 [i_0] [i_0]) >> (var_3 - 979012804))));
            var_14 = (-(((arr_5 [i_0] [i_0]) % 3739623022)));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = min((min((arr_13 [i_3] [i_3]), (((arr_0 [i_3]) / 4294967295)))), (min(((11 ? 4294967271 : 4294967295)), (arr_13 [i_3] [i_3]))));
        arr_19 [i_3] [i_3] = arr_7 [0] [7] [i_3];
        arr_20 [i_3] [0] |= (0 & (((arr_16 [0]) % 939524096)));
    }
    var_15 *= var_8;
    #pragma endscop
}
