/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((((min(var_9, 527628809886716634))) ? ((var_0 ? var_9 : 9223372036854775788)) : var_10))) ? (((~(min(1, var_3))))) : ((var_10 ? (max(var_5, var_4)) : (((max(var_1, var_6)))))))))));
    var_12 = -var_1;
    var_13 = (((((var_8 | (!var_9)))) ? ((var_4 % (var_2 / var_2))) : ((((!(((var_7 ? var_2 : var_9)))))))));
    var_14 = (max(var_14, ((((((((max(var_4, var_2))) ? var_10 : var_6))) / (((var_6 % var_7) ? ((max(var_8, var_3))) : var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = -var_7;
        var_16 = (max(var_16, (arr_0 [i_0])));
        var_17 |= ((var_4 ? (arr_0 [i_0]) : var_10));
        var_18 |= (((((arr_0 [i_0]) >> var_10))) ? (var_1 >= 37490) : 18446744073709551615);
    }
    #pragma endscop
}
