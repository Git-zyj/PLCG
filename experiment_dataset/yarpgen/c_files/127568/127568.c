/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((arr_0 [i_0] [4]) <= var_0)) ? (((max((arr_0 [i_0] [i_1]), (arr_2 [i_1] [i_1] [i_1]))))) : (max((arr_1 [i_1]), var_4))));
                var_10 = (((((((arr_3 [i_1]) <= (arr_3 [i_1]))))) <= (arr_1 [16])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = (((((54 > (arr_2 [i_1] [i_3 - 3] [i_3])))) >> ((min((arr_8 [i_0] [i_0] [i_3 - 3] [i_3 - 1]), var_9)))));
                            var_12 = (-(((var_5 >> (var_8 - 13522433323996328888)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_13 *= (arr_8 [9] [i_1] [9] [i_3]);
                                var_14 = -13839;
                            }
                        }
                    }
                }
                var_15 = (arr_2 [i_1] [i_1] [19]);
            }
        }
    }
    var_16 = var_2;
    var_17 = var_6;
    #pragma endscop
}
