/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = 2147483647;
        arr_5 [i_0] [i_0] = ((-(!9223372036854775807)));
        arr_6 [i_0] [i_0] = ((~(~2147483647)));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_10 [i_1] = (-(!2147483647));
        arr_11 [i_1] = 18446744073709551610;
        arr_12 [i_1] = 1;
    }
    var_12 = -32767;
    var_13 = var_9;
    var_14 = (~4294967295);
    #pragma endscop
}
