/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((min(1536365154, -29837)));
        var_21 = (max(((~(-2117271065 + var_2))), ((~((1920 ? -1938 : var_19))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] |= ((4294967289 * (min((min(18446744073709420544, 612089207)), (arr_0 [0])))));
            var_22 = (max(var_22, ((max(1, ((((min(-1897, 56))) ? (arr_5 [i_0] [i_1] [i_1]) : (~1920))))))));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_2] [i_3] |= (min(((min(var_7, 32763))), (~22148)));
            var_23 = (min(((min(8388608, (arr_8 [i_2])))), ((-(arr_9 [i_2])))));
        }
        var_24 = 1;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_17 [1] = (max(((-(arr_2 [i_4]))), 8388608));
        var_25 = (max(var_25, (-2147483647 - 1)));
        arr_18 [i_4] = (~0);
        var_26 = ((max((~0), 10)));
        arr_19 [i_4] [13] = (((arr_1 [i_4]) ? (min((arr_10 [i_4] [i_4]), -1920)) : (((~(var_0 >> var_0))))));
    }
    var_27 = ((4294967272 ? (min(var_4, (~var_19))) : var_12));
    var_28 = var_8;
    var_29 |= var_7;
    #pragma endscop
}
