/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!5272643209890667316) > var_3))) ^ var_0));
    var_13 = var_2;
    var_14 = (max(var_14, var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_15 ^= (~var_9);
        var_16 ^= ((!(arr_0 [14])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = (~var_10);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (max(var_18, (((((((max((arr_6 [i_1] [i_2] [i_1]), 5272643209890667316)) ^ (~39)))) > (min((arr_11 [i_3 - 1] [1] [i_3 + 1] [i_3 + 1]), var_3)))))));
                        var_19 = var_0;
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (-24072 ^ 13323286916039522263);
                        var_21 -= (((arr_13 [i_5]) ? var_4 : var_9));
                    }
                    var_22 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
