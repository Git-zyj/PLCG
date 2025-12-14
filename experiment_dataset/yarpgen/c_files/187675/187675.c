/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((((((((arr_0 [i_0] [i_0]) << (((var_6 + 1456509879848713944) - 8)))) <= (arr_0 [i_0] [i_0])))) <= (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((+((((1152921504606846976 || -24868) >= (arr_0 [i_0] [i_0]))))));
    }
    var_12 = ((-((min(var_4, -1393915100263510811)))));
    #pragma endscop
}
