/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = ((+((12 | (max((arr_0 [i_0]), var_9))))));
        arr_2 [i_0] = 10;
        var_18 = ((96 >> (((min(18446744073709551606, 298)) - 297))));
        var_19 |= (min((min(var_0, (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_20 += ((1 >> (((arr_3 [i_1 - 1] [i_1 - 1]) - 28284))));
        var_21 = ((-2404281826774225609 ? 7401 : -26));
    }
    var_22 = var_10;
    #pragma endscop
}
