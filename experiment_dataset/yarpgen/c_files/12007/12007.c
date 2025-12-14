/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (max(((((8395801359858039312 ? var_3 : 1169517295721756774)))), (~var_5)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [10] = (~var_5);
                    var_10 = (min(var_10, -var_5));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_11 ^= (min((~var_1), -17277226777987794844));
                    var_12 |= 17277226777987794860;
                }
            }
        }
    }
    var_13 ^= var_3;
    var_14 = (min(var_14, ((((min((((253 << (var_0 - 20170982095100397)))), ((1169517295721756775 ? var_6 : var_6)))) ^ var_7)))));
    #pragma endscop
}
