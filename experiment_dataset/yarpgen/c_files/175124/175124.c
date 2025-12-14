/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((-2147483647 - 1) ? (arr_1 [13]) : var_0))) ^ 2216240207651547321))) ? var_9 : (max(((var_4 ? 1 : (arr_1 [i_0]))), ((-2147483636 ^ (arr_1 [12]))))));
        arr_3 [i_0] = ((-2147483647 - 1) ^ (((arr_1 [i_0]) ? -12 : ((0 ? (-2147483647 - 1) : 4221971496)))));
        var_12 = (((max((arr_1 [i_0]), ((~(arr_0 [i_0]))))) << (var_2 - 59110)));
    }
    var_13 = var_8;
    var_14 = var_2;
    #pragma endscop
}
