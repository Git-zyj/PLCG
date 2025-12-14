/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_11 *= ((~(((!(12837 && 21318))))));
        var_12 = ((((-(52710 / 12863))) > -1104039039));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_13 = ((max(1009577154320366096, -127)) < 576460752169205760);
        arr_5 [i_1] = ((-(((~1) ^ (min(-4, 25163))))));
    }
    var_14 ^= ((-9 >= ((min(-4294967291, (1 * 1))))));
    #pragma endscop
}
