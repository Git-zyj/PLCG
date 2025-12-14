/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] = (((arr_1 [i_0] [i_0]) % (max(15677687450854707013, (((-22 ? -21 : -21)))))));
                                var_10 = (max(((((arr_3 [i_2] [i_2 - 3] [i_2 + 1]) >= (arr_3 [i_2] [i_2 + 2] [i_2 - 1])))), (max(1, 704396092855533331))));
                                var_11 = (i_0 % 2 == zero) ? (((~(max((((arr_0 [i_0] [i_0]) ? (arr_2 [i_3] [i_1]) : (arr_10 [i_0] [i_0] [i_2 - 3] [i_4]))), (((arr_9 [i_0] [i_3] [i_0]) >> (((arr_10 [i_0] [i_0] [i_2] [i_3]) - 46))))))))) : (((~(max((((arr_0 [i_0] [i_0]) ? (arr_2 [i_3] [i_1]) : (arr_10 [i_0] [i_0] [i_2 - 3] [i_4]))), (((arr_9 [i_0] [i_3] [i_0]) >> (((((arr_10 [i_0] [i_0] [i_2] [i_3]) - 46)) + 36)))))))));
                                var_12 = -4761082428457166936;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] = -15677687450854707007;
                }
            }
        }
    }
    var_13 = (1 + 70931694131085312);
    var_14 = (max(var_14, ((max(1, -4761082428457166945)))));
    var_15 = (((var_8 ? var_2 : var_9)));
    #pragma endscop
}
