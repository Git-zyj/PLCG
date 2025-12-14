/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(4294967295, 18446744073709551611);
    var_13 = (min(var_13, (((((!var_0) + var_3))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [8] [i_0] = ((min((511 && 0), (arr_0 [i_0]))));
        var_14 = ((((!(511 <= 12888534326253894787))) ? (~var_7) : -512));
        var_15 = ((((arr_1 [i_0] [i_0]) != 1)));
    }
    #pragma endscop
}
