/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ^ (((1 - 3430873474) * (var_2 * var_1)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 &= ((((((((var_5 == (arr_1 [18])))) + (((26 >= (arr_1 [i_0]))))))) <= (((38762 + 390542191) + (((91 - (arr_1 [i_0]))))))));
        var_13 = (max(var_13, (((((((-15252 ^ -127) >> (((((arr_1 [i_0]) ^ 4219215777)) - 4219215747))))) ^ (15251 * 679862641))))));
        var_14 = ((((((255 + -28704) + var_10))) * (((arr_0 [i_0 - 1] [i_0 - 2]) / (arr_0 [i_0 + 1] [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = ((9709 >= (arr_1 [13])));
        arr_4 [i_1] = ((599774144 < (arr_1 [i_1])));
        var_16 -= (((arr_0 [i_1] [i_1]) ^ -1750628024));
        var_17 = (((arr_3 [8]) & var_1));
    }
    var_18 = var_1;
    #pragma endscop
}
