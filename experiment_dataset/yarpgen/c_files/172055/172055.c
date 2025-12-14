/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((!((((var_11 + 2147483647) << (var_14 - 2016483022))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = ((~((~(((-32767 - 1) ^ (arr_1 [i_0])))))));
        var_22 = (!448433388);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_23 -= (((~448433388) + 11));
                        var_24 ^= (arr_2 [i_4]);
                        var_25 = (arr_6 [i_4] [i_2] [i_1]);
                    }
                }
            }
        }
        var_26 = (max(var_26, 2));
    }
    #pragma endscop
}
