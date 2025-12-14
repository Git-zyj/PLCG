/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_1, ((241 ? var_3 : var_2)))));
    var_11 *= ((var_4 ? (((var_4 ? (~var_2) : (var_4 % var_0)))) : (min((max(var_7, var_6)), var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = arr_4 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = 4;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((var_1 >> (arr_0 [i_0] [i_3])));
                                var_13 = (arr_10 [i_0] [i_1] [i_0] [i_2] [3] [i_4]);
                                arr_14 [i_0] [i_0] = ((+(((((var_7 ? (arr_10 [i_0] [i_1] [i_2] [8] [i_0] [i_4]) : 65535))) ? var_4 : ((-(arr_9 [i_4] [i_2] [i_1] [i_0])))))));
                                var_14 = ((105 ? 1 : ((-1 ? (arr_11 [i_1] [i_0] [i_1] [i_0]) : 106))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
