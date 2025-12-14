/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_2 != var_1);
    var_20 = 16;
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = (arr_0 [i_0] [5]);
            var_22 = (((max((arr_1 [1]), 7577744984040335104)) ^ ((~(((arr_1 [i_0]) ? 9603080275357806955 : 11768986527740100049))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = 2147483643;
            var_23 = (((((((max(var_2, (arr_3 [i_0])))) ? ((((arr_4 [i_0] [i_2]) ? (arr_7 [i_0]) : var_0))) : (min((arr_1 [i_2]), (-9223372036854775807 - 1)))))) ? ((var_9 ? (((arr_0 [i_0] [i_0]) ? var_6 : var_11)) : (arr_3 [i_0]))) : ((((((8843663798351744680 ? (arr_1 [i_2]) : 18446744073709551598))) || var_18)))));
            var_24 = ((!(min((!var_12), 2397256893))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_25 *= (!11768986527740100048);
            var_26 ^= var_2;
            var_27 = ((~(((!(((~(arr_1 [i_0])))))))));
        }
        var_28 = min(3979359650, 8843663798351744660);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = arr_12 [7];
        arr_16 [i_4] = (((arr_14 [i_4]) ? ((+((53574 ? (arr_13 [i_4] [14]) : var_17)))) : (arr_14 [i_4])));
    }
    #pragma endscop
}
