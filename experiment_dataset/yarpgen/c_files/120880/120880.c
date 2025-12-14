/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((-(arr_0 [i_0])))) ? ((8664468353365492856 ? -233 : (min((arr_1 [i_0]), 8664468353365492861)))) : ((min(-8664468353365492874, (arr_3 [i_0]))))));
        var_15 = (min(var_15, 56036));
        var_16 = (arr_3 [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = -36;
        arr_9 [i_1] = (~8250);
        var_17 = (((((((~(arr_0 [i_1 + 1]))) | ((var_13 ? var_3 : 253))))) ? (min(18446744073709551611, 253)) : ((8184 ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1])))));
        var_18 &= (((arr_5 [i_1]) ? ((1 ? 18446744073709551611 : 4316)) : (!var_10)));
    }
    var_19 = (((((var_13 ? var_7 : ((var_7 ? 1 : var_5))))) ? ((((min(var_2, 16462667121662122146))) ? var_0 : ((37035 ? 415108443 : 4294967289)))) : 8));
    var_20 &= ((((~(~6)))) ? (((-8664468353365492856 ? var_3 : (!197662399)))) : -6052698998314549699);
    var_21 &= ((((min((!var_10), (~116)))) ? ((var_5 ? (((var_10 ? var_0 : 996943828))) : ((var_6 ? 5078472572034390708 : 49814)))) : (max((min(var_3, var_1)), (min(var_6, 735530904340219868))))));
    #pragma endscop
}
