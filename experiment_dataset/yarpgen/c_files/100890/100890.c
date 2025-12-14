/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 *= var_2;
            var_13 *= 1646828517;
        }
        var_14 = (1646828525 || 534262516);
        arr_5 [i_0] [i_0] = 4294967295;
        var_15 ^= min(((2719609429 % ((85923357 >> (2648138779 - 2648138769))))), 4294967270);
    }
    var_16 *= ((~(4294967295 != var_9)));
    var_17 = (min(var_17, -var_11));
    #pragma endscop
}
