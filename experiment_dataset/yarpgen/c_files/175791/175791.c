/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 -= (((arr_1 [i_0]) || ((((((arr_1 [1]) << (((arr_0 [i_0]) - 3355725719207746770)))) / 17262)))));
        var_11 = (min(var_11, ((max((((-((var_2 ? var_9 : 2465230124))))), ((~(max(4456, 9223372036854775789)))))))));
    }
    var_12 = var_1;
    #pragma endscop
}
