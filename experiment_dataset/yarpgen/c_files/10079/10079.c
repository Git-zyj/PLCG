/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = -717254991;
        arr_2 [i_0] [i_0] = (((14630344431074488863 != 65514) ? ((-717254991 ? (arr_1 [i_0] [i_0]) : 19693)) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((-4294967295 <= (min(((2147483647 ? 14630344431074488861 : 4294967269)), ((max(var_1, var_14)))))));
        var_20 = (((arr_1 [i_0] [i_0]) + (65535 <= 25)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = ((+(((((max((arr_0 [i_1]), 65535)))) ^ (min(27108, (arr_5 [i_1])))))));
        arr_6 [i_1] = ((((var_4 ? 1789390551 : (arr_4 [i_1]))) << ((((var_1 ? var_12 : (arr_0 [i_1]))) + 1716737950584854261))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_22 = (((var_2 <= 40747) ? (arr_8 [i_2 + 3]) : (((32767 && 2147483647) ? 4294967295 : (~1)))));
        var_23 = 32756;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = (((2505576741 != 717254990) >> ((((~(arr_9 [i_3]))) - 1350601338))));
        arr_13 [i_3] [i_3] = (min((arr_4 [i_3]), (arr_8 [15])));
    }
    var_24 = (((((~1356721141) ? var_9 : var_18)) != ((var_4 ? (var_6 != var_16) : -var_16))));
    var_25 = 1;
    #pragma endscop
}
