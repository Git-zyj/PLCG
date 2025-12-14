/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((140 ? var_15 : (18446744073709551615 > 4)))) ? var_7 : ((~(30097 & 12163))))))));
    var_18 = -var_7;
    var_19 = ((var_0 ? (~var_7) : var_3));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (max(var_6, ((max((arr_3 [i_0 - 2]), var_10)))));
        arr_5 [i_0] = (((min((max((arr_1 [i_0]), var_15)), (arr_1 [2]))) == (((-(~873894518))))));
        arr_6 [i_0] [i_0] = 609525858;
        arr_7 [i_0] [i_0] = ((-1898495599565732029 ? (arr_2 [8] [i_0]) : 18446744073709551599));
    }
    #pragma endscop
}
