/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 458752;
    var_12 = (12288 || 12288);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((0 << ((((-12288 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1]))) - 16493609464349721956))));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_1] [11] [i_2 - 3] [i_1] = -12289;
                    var_13 = ((var_7 ? (arr_8 [i_0 - 1] [i_2 - 2] [i_2 + 1] [i_1]) : (arr_8 [12] [i_2 - 4] [i_2] [i_1])));
                }
                var_14 = (min((((arr_1 [i_0 - 1]) ? (min((arr_3 [i_0 + 2]), (arr_7 [i_0] [11] [2]))) : (arr_0 [0]))), 12298));
            }
        }
    }
    #pragma endscop
}
