/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((min((var_3 ^ var_10), (1685310337 / 325797014)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= 1685310314;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_2] |= ((-(min(18128382715871481788, -1685310337))));
                        var_13 = (max(var_13, ((min(var_8, 8030732276110084830)))));
                        arr_13 [i_2] |= (((max(-var_1, var_2))) > 770441422);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_0] &= (var_7 == -1685310322);
                            var_14 = (max(var_14, (((+(((((arr_3 [i_2] [i_4]) ? (arr_2 [i_2]) : var_7)) >> (-1149523701 + 1149523722))))))));
                            arr_19 [i_0] [i_0] [i_0] [0] [i_0] = (min((((min(143974450587500544, -1685310350)) + 1149523701)), ((((var_8 ? -1149523701 : (arr_4 [i_0] [i_0])))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_15 = (max(var_15, var_6));
                            arr_24 [i_0] = (max((((!((((arr_7 [i_0] [i_1] [i_0] [i_5]) ? var_9 : var_9)))))), (((var_3 ? var_9 : var_10)))));
                            arr_25 [i_2] [i_2] [i_0] [i_2] [i_1] [12] = var_8;
                        }
                        var_16 = (((((var_7 ? (arr_2 [i_0]) : (~var_3)))) && 40052));
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = (((var_3 ? -1149523701 : 3524525861)));
    }
    #pragma endscop
}
