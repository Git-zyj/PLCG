/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max((((!(((8935141660703064064 ? 127 : 0)))))), 18446744073709551615));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 += (max((arr_1 [i_0 - 2] [i_0 - 1]), (((min(19, (arr_0 [i_0]))) % (arr_0 [8])))));
        var_19 += ((arr_3 [i_0 - 2]) >> (((((150 ? (-2147483647 - 1) : 219)) < ((min((arr_1 [9] [i_0]), 126)))))));
        var_20 *= (((arr_0 [i_0]) ? -1780909720755683364 : 0));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_21 *= (((max((arr_6 [i_1 - 1]), (8384512 / -19))) * (-9223372036854775807 - 1)));
        var_22 *= ((-1 ? (arr_5 [i_1 - 1]) : (max((arr_7 [i_1 + 1] [i_1 - 2]), 10398119927210381827))));
        var_23 += (((arr_4 [16]) ? 1099511627775 : 10398119927210381806));
    }
    var_24 *= 140720308486144;
    #pragma endscop
}
