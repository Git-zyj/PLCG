/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_10 = (max(var_10, (((-(((arr_2 [i_0] [i_2]) ? (((arr_6 [i_2]) ? (arr_2 [i_3] [i_3]) : 85)) : (arr_11 [i_2] [i_3] [i_3] [i_3 - 1]))))))));
                        arr_14 [i_0] [4] [i_3] [i_0] = (((((!(1 && 12459)))) % 12458));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_11 *= (((((((((arr_15 [i_4 + 1]) ? 1 : -2214160602263818357))) ? ((min(7680, -13))) : ((min(var_6, -1914)))))) ? var_7 : 53054));
                        arr_19 [i_0] [i_0] = 64543;
                        arr_20 [i_0] [i_0] [i_2] [0] = ((((!(((~(arr_18 [i_0] [i_0] [i_0] [i_0] [2])))))) ? ((((arr_12 [i_0] [i_0] [i_1] [i_2] [i_4]) > 19363))) : (max((arr_0 [i_1]), ((-(arr_15 [8])))))));
                        var_12 = ((((((arr_15 [i_4 - 1]) ? (arr_15 [i_4 + 1]) : (arr_15 [i_4 + 1])))) ? (((!(arr_15 [i_4 - 1])))) : (((-2466559694360413419 == (arr_15 [i_4 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_13 = (((-32767 - 1) ? 53077 : (arr_12 [i_2] [i_5 + 1] [i_5 + 1] [3] [i_5 + 1])));
                        arr_23 [i_0] [i_0] [i_2] [i_5 + 1] = (arr_11 [i_0] [i_5] [i_0] [i_5]);
                        var_14 = ((!(36192 > var_1)));
                        var_15 = (((arr_13 [1] [i_1] [i_5 - 1]) ? (arr_7 [i_2] [i_2] [i_2]) : 6558348548129965619));
                    }
                    var_16 *= var_3;
                    arr_24 [i_0] [i_0] [i_2] = (arr_1 [i_0]);
                    arr_25 [i_0] = (((((!((min((arr_7 [i_0] [i_1] [i_2]), (arr_0 [15]))))))) <= ((((((arr_5 [i_0] [i_2]) == var_2))) & (((arr_11 [i_0] [i_0] [0] [i_2]) % 1))))));
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
