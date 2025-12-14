/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = 242210483;
        var_16 ^= -1265739743;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_17 = ((-((((min(18338615206994377969, -1265739723))) ? (((arr_5 [i_1]) + var_14)) : -8388608))));
        var_18 = ((~((~(arr_4 [i_1 - 2])))));
        var_19 = (min(var_19, ((((((var_13 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 1])))) <= -9117808573481577884)))));
        var_20 = 1;
    }
    var_21 = (((((var_8 ? ((65516 ? 2360 : var_5)) : -902840594))) ? -9223372036854775806 : (!9140)));
    var_22 = (((((-4440717708909153172 ? var_1 : var_1))) & ((var_2 ? (~16566720700251642151) : (9107582294466663006 / var_5)))));
    #pragma endscop
}
