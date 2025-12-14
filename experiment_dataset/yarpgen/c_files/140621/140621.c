/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((!(~var_12)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = 1916079913;
                arr_4 [10] = (arr_2 [i_0 + 3] [i_0 + 3] [4]);
                var_15 = var_0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_2] = (((arr_6 [1] [i_0] [i_0 + 2] [i_0 + 2]) / 7273256412462790938));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_2] = ((49 ? (arr_0 [i_3 + 1] [i_0 + 1]) : (arr_0 [i_3 - 3] [i_0 + 2])));
                        var_16 = ((8323072 >= (arr_10 [1] [i_0 + 3] [i_3] [i_2] [i_3] [i_3 - 1])));
                    }
                    var_17 = (arr_10 [i_0] [i_0 + 1] [2] [i_2] [i_0 + 1] [i_0]);
                    var_18 = arr_1 [i_0 + 2];
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_19 += (~181);
                    arr_14 [6] [i_1] [6] [i_1] = 8323087;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_20 = 8323087;
                    var_21 -= (~8323076);
                    var_22 = ((-(max(4286644198, 165))));
                }
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
