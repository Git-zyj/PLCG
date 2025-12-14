/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 ^= ((((((-3799684058609128495 % (arr_2 [i_0] [i_1]))))) ? ((((max((arr_1 [i_0 + 1] [i_1]), (arr_2 [i_0] [i_0])))))) : (min((arr_1 [i_0] [i_1]), 20051))));
            var_12 = (arr_3 [i_0 + 1]);
            var_13 -= (((arr_3 [i_1]) ? ((-16 ? -458 : 4294967295)) : -445));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [i_0] = (arr_0 [i_0]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_4] [i_3] [i_3] [i_2] [i_0] = (((1821743848590130383 ^ 36028797018963967) * 438));
                            arr_17 [i_5] [i_4 + 1] [i_0] [i_0] [i_2] [i_0] = var_8;
                            var_14 = ((((((arr_14 [i_0] [i_2] [i_3] [i_3] [i_4 + 1] [i_5]) >= 660077148))) == (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4 - 1])));
                            var_15 -= 457;
                        }
                    }
                }
            }
        }
        var_16 = (min(var_16, (((((min(45244, (arr_6 [4] [i_0 + 1])))) % ((((arr_6 [8] [i_0 + 1]) || (arr_6 [14] [i_0 + 1])))))))));
    }
    var_17 ^= ((0 || (((((-21575 ? -262597194 : 3799684058609128495)) % (1 < var_9))))));
    #pragma endscop
}
