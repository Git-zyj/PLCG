/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 = (65525 ^ 8183090870039356671);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (65519 < 0);
            arr_5 [5] [i_1] = ((-(((arr_1 [i_0 + 1] [i_0 - 1]) ? 0 : 4115679703))));
        }
    }
    var_22 = (((((-6592028019034436609 ? 135 : ((11 ? 11 : 3219210619))))) ? (1893929208191820452 || 0) : (~18446744073709551595)));

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 = (((arr_7 [i_2]) ? 9223372036854775296 : (arr_7 [i_2])));
        var_24 = 9223372036854775797;
        arr_9 [i_2] = 140;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] [1] = (~(((max(15663, 179287593)))));
        var_25 = (4294967295 - 0);
        var_26 = ((+(((arr_10 [i_3]) ? 8183090870039356665 : (((9223372036854775807 >> (134217727 - 134217684))))))));
        var_27 = 1141488187;
    }
    var_28 = ((((((!((min(var_10, 11445))))))) >= ((0 ? 29714 : (min(179287592, -9223372036854775798))))));
    #pragma endscop
}
