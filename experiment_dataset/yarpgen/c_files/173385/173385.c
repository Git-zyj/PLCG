/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_12));
    var_18 = ((((var_16 ? 64 : var_11)) << (var_14 - 2304701260007698514)));
    var_19 = (((((min(-12217, 20066))) > var_15)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 *= ((((min(-27899, ((20066 ? -20066 : 2843723769117806472))))) ? 10302 : -61));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 = (((arr_2 [i_1 - 1]) ? (((arr_2 [i_1 + 3]) ? -1 : (arr_2 [i_1 - 1]))) : (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 3])))));
        var_23 = (min(var_23, (arr_5 [i_1])));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_24 *= 2960534747;
        var_25 *= (((arr_9 [i_2]) / 10));
        var_26 = (arr_7 [i_2 - 1]);
        arr_10 [i_2] = ((-(arr_9 [9])));
    }
    #pragma endscop
}
