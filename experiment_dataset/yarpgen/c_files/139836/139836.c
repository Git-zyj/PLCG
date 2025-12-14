/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((var_6 ? 1 : 15));
    var_13 = (((((min((-17 > var_3), var_2)))) ^ ((-20212 ? (min(2305842459457880064, 0)) : (var_9 / var_5)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_4, (max(var_5, (arr_1 [i_0 - 3] [i_0])))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, ((((arr_2 [i_0] [i_0]) >> (37 - 36))))));
            var_16 = 1329352705491026466;
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = (arr_1 [i_0 - 3] [i_2 + 1]);
            var_17 = var_7;
            arr_9 [i_0] [i_2] [i_2] = (!15828084532377006175);
            var_18 *= (!9223372036854775801);
            arr_10 [i_2] [i_2] = 18446744073709551586;
        }
        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_19 = (!-var_2);
            var_20 = (((arr_4 [i_0] [i_3 - 2] [i_3]) ? var_3 : ((~(arr_4 [i_0] [i_3 + 2] [i_3])))));
        }
        var_21 = ((((((min((arr_12 [3] [i_0 - 1] [i_0]), var_0))) ? (min((arr_5 [i_0] [i_0]), 5864244267977805696)) : ((((arr_6 [i_0 + 1] [i_0]) ? var_0 : var_2))))) < 130));
        var_22 = (min(var_22, 16715));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = 0;
        arr_18 [i_4] = (arr_13 [i_4] [i_4 - 2]);
    }
    for (int i_5 = 4; i_5 < 10;i_5 += 1)
    {
        arr_21 [i_5] = max((((arr_4 [i_5 - 1] [i_5] [i_5]) ? (arr_19 [i_5 - 3]) : (arr_4 [i_5 - 3] [i_5] [i_5]))), (arr_19 [i_5 + 1]));
        var_23 = (max(var_23, (((~(arr_13 [2] [i_5 - 4]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = (min(var_24, (((arr_11 [0]) ? (!1) : (((~11750847974257072989) ? (((arr_13 [10] [i_6]) ? var_6 : 12691883929900332711)) : var_7))))));
            var_25 = (max(var_25, ((((~11750847974257072966) && 89)))));
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_26 = (min(251559751743171676, -1));
                arr_29 [i_7] [i_8] [i_8] = min(((var_8 % (arr_24 [i_7]))), ((min(4294967295, (arr_24 [i_7])))));
                arr_30 [i_7] [6] [i_7] = var_9;
            }
        }
    }
    #pragma endscop
}
