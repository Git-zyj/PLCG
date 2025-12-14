/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((((((6436094362208043604 ? var_10 : -63)) + 2147483647)) >> (((((arr_1 [i_0] [i_0 - 1]) ? var_7 : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -8802254155467942923)))) - 117))));
        arr_3 [i_0] [i_0] = ((2147483647 ? -63 : (((62 | 58) ? ((-665146566 ? 254 : 20677)) : 254))));
        var_19 = (((((arr_0 [i_0 + 3] [i_0 + 3]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (arr_0 [i_0 + 3] [i_0 + 3]))) != (-951787827 / -254)));
        arr_4 [i_0] = ((((var_16 != 32325) != 2902764344426225749)) ? ((((var_18 + 2147483647) << ((((((10378681984186706155 ? -58 : var_10)) + 84)) - 26))))) : (((((arr_0 [i_0] [i_0]) ? var_14 : var_17)) ^ (((237 ? var_11 : (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((var_12 ? var_4 : var_15)) == (0 | var_10))))));
        var_21 *= ((((((arr_6 [i_1] [i_1]) | 62)) > (((-1268219668 / (arr_0 [i_1] [i_1])))))) || ((((arr_6 [i_1 - 1] [i_1 - 1]) ? (arr_6 [i_1 - 2] [i_1 - 1]) : (((-63 ? 65535 : 4294967295)))))));
    }
    var_22 = (min(var_22, (((var_11 >= (((((-567322512 ? -11930 : 24275))) ? (-4815384796017521251 / 1751) : (((var_5 ? var_2 : var_17))))))))));
    #pragma endscop
}
