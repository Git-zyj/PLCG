/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = ((((min(var_11, (arr_2 [13] [i_0])))) ? (((~(arr_1 [i_0])))) : ((((min((arr_1 [i_0]), 5284197899980333405))) ? ((523776 ? -7087748936828143959 : (arr_2 [12] [i_0]))) : ((((arr_3 [10]) & -1348152668)))))));
        var_19 += (((max(9223372036854775807, var_0)) >= (((137 ? 1849045756 : 4294443513)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = ((!(((-(arr_4 [i_1]))))));
        var_21 = ((~(((arr_0 [i_1]) ? (arr_6 [i_1]) : 248))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (!(--109785078));
        var_22 |= ((((4294443519 ? 12848974257997793058 : 10283877235063470039))));
        var_23 = (((32767 % 1536) ? 146 : (~4294443520)));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3] = 9223372036854775792;
        var_24 = (max(var_24, (((523775 ? (!4294443513) : 1765708145)))));
        var_25 = ((245 != (min(31744, (arr_3 [i_3])))));
        var_26 = var_2;
    }
    var_27 = (((min((~var_8), ((245 >> (((-9223372036854775798 - -9223372036854775797) + 28)))))) & -10345));
    var_28 = (2591 ^ var_7);
    #pragma endscop
}
