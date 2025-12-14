/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 += ((((min(var_4, (2060052981 & 528601521)))) ? (max((3230534120804130520 * 15216209952905421073), var_7)) : (arr_1 [i_0])));
        var_12 = (max((min(((max((arr_2 [i_0]), (arr_2 [19])))), ((3230534120804130536 + (arr_1 [i_0]))))), (((arr_2 [i_0]) * (((arr_2 [0]) ? 15216209952905421095 : 1232891608))))));
    }
    #pragma endscop
}
