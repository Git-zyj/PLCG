/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_13 / var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_20 ^= (arr_8 [i_0] [i_1] [i_2 - 2] [i_3]);
                        var_21 = (max(var_21, ((((arr_7 [0] [i_2] [i_2 + 2] [i_1] [i_2 + 2] [i_2 - 4]) > (arr_7 [i_2] [4] [i_2 + 1] [i_1] [i_2 - 3] [i_2 + 2]))))));
                        var_22 = (!13891241762389843415);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_23 = (arr_2 [i_0] [i_3]);
                            var_24 ^= arr_0 [4] [i_3];
                            var_25 = (min(var_25, (arr_5 [i_0] [i_1] [i_0])));
                            arr_12 [i_2] = ((~(!52648)));
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] [i_0] = 536866816;
                    var_26 = (max(var_26, (((+(((arr_5 [i_0] [i_1] [i_2 - 2]) / (arr_5 [i_0] [i_1] [i_2 - 2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
