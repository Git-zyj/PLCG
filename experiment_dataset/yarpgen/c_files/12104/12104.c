/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = 69;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 *= 0;
        var_17 = 3983;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [4] [i_1] |= (1 ^ 5366);
            var_18 = ((0 << (131 - 129)));
            var_19 ^= (0 < 5176519368709034597);
            arr_7 [i_0] = 29128;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_20 = (253 >= 57195);
                var_21 = (12704 % 106);
                arr_10 [i_0] [i_1] [i_0] [i_1] = (1707426378597027120 ^ 3967);
                var_22 *= (143 <= -5367);
                var_23 = (1 & 12);
            }
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_24 = (8341 == -31);
                            arr_22 [i_4] [i_0] = 210;
                        }
                    }
                }
            }
            var_25 |= (9092033727928883807 != 5366);
        }
        var_26 = (5739636019379191668 | 30006);
        var_27 ^= -2332403268299026600;
    }
    #pragma endscop
}
