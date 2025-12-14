/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_2 + var_11);
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 *= ((var_5 ? (~var_1) : (arr_6 [0] [i_1] [i_2] [i_2])));
                    var_15 &= min((!2320779318), (((arr_2 [i_0 + 2] [i_1] [i_2 - 1]) - -1857384225580099449)));
                    var_16 = (min(var_16, (((min(((max((arr_7 [i_0] [i_1] [i_0 + 1]), (arr_7 [i_1] [i_1] [i_2])))), -1857384225580099449))))));
                    var_17 = (arr_4 [5] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
