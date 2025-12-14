/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 ^= ((-((-7401774213458726929 ? (arr_5 [i_0] [i_1 - 1] [i_1 - 1]) : (((arr_4 [i_0] [i_1] [i_0]) & -6581564159147659292))))));
                    var_12 ^= ((((((((3560654450 ? 4709790244426977624 : 8191))) ? (max(-4709790244426977624, 96)) : (2895633593 && 4578783521358468051)))) || -2441));
                }
            }
        }
    }
    var_13 *= ((((var_7 >> ((((115 ? var_7 : var_8)) - 200)))) << ((((max(var_9, var_3))) - 1452919415))));
    var_14 = ((((min(152, ((-7401774213458726917 ? 0 : 0))))) ? 14272246515164730185 : ((max(((17113383256979196353 ? 4709790244426977616 : -7742221411461049979)), (min(-8180408170790955674, -4709790244426977624)))))));
    var_15 = var_10;
    #pragma endscop
}
