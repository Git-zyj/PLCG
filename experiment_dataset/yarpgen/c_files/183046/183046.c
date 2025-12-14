/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((-17730 ? (~var_1) : 1065303048))));
    var_11 += var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, (!-var_1)));
        var_13 = -684737645;
        var_14 += (!-684737621);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (max(2147483647, 1890449942));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_15 -= (min((arr_15 [i_5] [i_5] [i_2 - 1] [6]), (min(86, 65532))));
                                arr_18 [i_3] = arr_1 [5];
                                var_16 = (min(1065303034, (min(15725, 8709033894266867192))));
                                var_17 = (min(var_17, ((((((((((~(arr_4 [1] [i_2])))) && var_8)))) <= (min((~var_5), (1 - var_0))))))));
                            }
                        }
                    }
                    var_18 = var_3;
                }
            }
        }
    }
    var_19 = (max(var_19, (((-(min((max(var_2, var_7)), var_0)))))));
    #pragma endscop
}
