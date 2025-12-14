/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_13 += ((((119 | (arr_0 [i_3 - 1]))) >> (((((arr_8 [i_1] [i_1]) <= var_8)) ? (var_0 >= var_4) : -120))));
                        var_14 = (((((-126 ? ((max(119, (arr_7 [i_0] [i_1] [i_1])))) : (arr_10 [i_0] [i_1] [i_3 + 1] [i_3 - 1])))) ? (((~3) & ((127 ^ (arr_1 [i_3]))))) : 107));
                        var_15 = ((((max(var_2, (arr_7 [i_2] [i_3 - 1] [i_3 - 1])))) / var_12));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_16 = arr_9 [i_2];
                        arr_13 [i_0] [i_0] [i_2] [i_2] = 127;
                    }
                    var_17 = arr_1 [11];
                }
            }
        }
    }
    var_18 = (((var_2 || var_1) ? ((min((33 && 94), (var_0 > var_4)))) : ((((min(var_8, var_12))) | 37))));
    var_19 = (min(var_19, (((var_8 != (max((-127 - 1), var_1)))))));
    #pragma endscop
}
