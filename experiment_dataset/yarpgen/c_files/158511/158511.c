/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_7 * (~65535))))));
    var_20 = (min(1073741823, -1));
    var_21 = -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 31))) ? ((75 ? 10078 : var_12)) : ((1 ? 0 : 46))));
        arr_3 [i_0] = ((-1574264849 ? 2199 : 1));
        arr_4 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((3730192683 ? 8 : 0));
        arr_8 [i_1] [i_1] = (18446744073709551615 < -2051123694);
    }
    #pragma endscop
}
