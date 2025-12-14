/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((var_0 ? ((((90 ? var_7 : 0)) & (((var_8 ? var_3 : var_0))))) : ((var_7 ? (var_8 / var_6) : (((4294967295 ? var_7 : 90)))))));
    var_14 = (((((((min(var_11, var_11))) ? (var_5 < var_2) : ((min(var_3, var_3)))))) ? var_6 : (((((var_12 ? var_8 : 91))) ? (~var_0) : ((-1211985389 ? -67 : var_9))))));
    var_15 &= (((((var_4 ? (32 && 21776) : (~4294967295)))) ? (max(var_2, (14933 % var_9))) : (~var_1)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_16 = ((var_1 ? (arr_0 [i_0 - 2]) : 162));
        var_17 |= (arr_2 [i_0 - 2]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] |= (((arr_5 [i_1 - 2]) < ((var_10 ? 13 : var_9))));
        var_18 = (max(var_18, 1525328663113542774));
        var_19 |= ((!((var_1 && (arr_4 [i_1])))));
    }
    var_20 = var_6;
    #pragma endscop
}
