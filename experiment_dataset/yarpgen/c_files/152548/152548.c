/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_10 ? 4518022775525779172 : 1))));
    var_14 += (min((((var_1 ? 1 : var_8))), (!var_7)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_2 [i_0]);
        var_16 += ((~((var_1 ? 2297429201 : 1))));
        var_17 = (min(var_17, (~-var_11)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (max((((arr_2 [i_1]) | ((max(1, (arr_0 [i_1])))))), ((((65524 ? (arr_2 [i_1]) : var_12)) + ((max(var_4, -1677044720)))))));
        var_19 = ((!(((((241 ? 62 : -1)) >> (var_9 - 1975018029727601829))))));
        var_20 &= (max((min(1492508440, (arr_1 [i_1]))), (min(var_10, (arr_0 [i_1])))));
    }
    var_21 = (min(var_21, 1677044716));

    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_22 = 1134550418;
            arr_11 [i_2] [i_3] [i_2] = -29050;
            arr_12 [i_2] [i_3] = ((0 ? -1677044720 : -67));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_2] [i_3] [i_2] = (arr_9 [i_2]);
                arr_16 [14] [i_3] [14] [i_3] &= (arr_5 [14]);
                arr_17 [i_2] [i_2] [i_2] = ((~((~(arr_5 [i_2])))));
                var_23 = (min(((((arr_10 [i_2 + 1] [i_2 + 1]) <= 4294967284))), ((~((15 ? (arr_4 [i_2]) : 1))))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_21 [7] [i_2] [i_3] = (min((min(var_12, (arr_13 [i_2] [i_2] [i_2] [i_5]))), (1 ^ 0)));
                var_24 = (min(var_24, (((((~(arr_5 [i_2]))) * -19)))));
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                var_25 = -1694737871;
                var_26 += (((((-525964290560554888 ? 19 : 7867541429966278464))) ? 525964290560554887 : -67));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_27 = 525964290560554870;
                var_28 -= var_1;
                arr_26 [i_2] [i_2] [0] [i_2 - 3] &= ((((((arr_7 [i_2 - 4] [i_3]) ? (arr_1 [i_2]) : var_12))) && ((((arr_4 [i_7]) ? var_12 : (arr_19 [4]))))));
            }
        }
        arr_27 [i_2] = min((arr_6 [i_2 - 2] [i_2 - 4]), var_8);
        var_29 = (((max((18446744073709551615 - 1967140663), 19)) - ((min(4170453384, ((((arr_8 [i_2] [i_2 - 1] [14]) + var_0))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 = 33953;
        arr_30 [i_8] [i_8] = (arr_24 [6] [i_8]);
    }
    #pragma endscop
}
