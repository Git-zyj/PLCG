/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_11 = (min(var_11, (1 * 28772)));
        arr_3 [i_0] = ((-1536164577 / (~-15990)));
        arr_4 [i_0 + 1] = (((((((var_8 ^ (arr_1 [i_0] [i_0]))) >= (arr_0 [i_0])))) * (28022 >= 59081)));
        var_12 = ((~(((arr_0 [i_0]) << 6459))));
    }
    var_13 = var_6;
    #pragma endscop
}
