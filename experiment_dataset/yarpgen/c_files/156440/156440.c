/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_0 ? 1428420241 : ((((2866547055 <= (~var_7)))))));
    var_11 *= var_9;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((~(!1428420254)));
        var_12 = 1428420240;
        var_13 = (min(var_13, ((min(2866547055, (((arr_1 [i_0 - 3]) + (~var_2))))))));
    }
    #pragma endscop
}
