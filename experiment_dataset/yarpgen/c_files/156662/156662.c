/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [0] [i_0] = 259513339216020097;
                    arr_7 [i_0] [i_1] [i_2] = 1729382256910270464;
                    var_17 = (!32767);
                    arr_8 [i_2] [i_1] [i_1] [8] = ((var_14 - (((var_0 + 2147483647) << (var_10 - 3294997434)))));
                    var_18 *= 18187230734493531518;
                }
            }
        }
    }
    var_19 = -var_11;
    #pragma endscop
}
