/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = 0;
                arr_9 [i_1] = (arr_2 [i_1 - 1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_11 = (min(var_11, (((11 / (arr_10 [i_4]))))));
                    var_12 *= (min((((((-5238787431331686069 + 9223372036854775807) << (((arr_15 [i_2]) - 8079216799523772853)))) / (arr_10 [i_3]))), (max((arr_13 [i_3] [i_2]), (arr_13 [i_2] [i_3])))));
                }
            }
        }
        arr_16 [4] |= (arr_13 [i_2] [i_2]);
        arr_17 [i_2] [i_2] = ((~(!255)));
    }
    #pragma endscop
}
