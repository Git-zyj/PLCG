/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_0;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_10 *= (((arr_6 [10] [i_1]) | 17972));
            arr_7 [i_0] = (!var_6);
            var_11 = (!1);
            var_12 -= (~255);
        }
        arr_8 [i_0] = (((arr_2 [i_0] [i_0]) + (arr_1 [i_0])));
        arr_9 [i_0] = (min(((((max(var_7, (arr_2 [i_0] [i_0])))) - 2104820246)), (var_1 * var_0)));
    }
    var_13 = 1;
    #pragma endscop
}
