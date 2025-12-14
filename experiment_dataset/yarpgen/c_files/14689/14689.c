/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] = (((1 % 1) ? ((120 ? var_5 : (arr_1 [i_0 - 2]))) : (((arr_1 [i_0 + 1]) + (arr_1 [i_0 + 1])))));
                    arr_10 [i_0 - 2] [i_1] [8] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? var_9 : (((65522 ? (arr_3 [i_0 - 2]) : ((-1 - (arr_8 [i_1] [6]))))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((-718030918 ? (((arr_3 [i_0 - 1]) ? (arr_5 [i_1] [i_2]) : (arr_1 [i_2]))) : (((min((arr_8 [i_0] [i_0]), (arr_2 [i_2] [i_0 + 1])))))));
                    arr_12 [0] [10] [0] [i_2] = (arr_8 [1] [i_0]);
                    arr_13 [i_0 - 1] = 4193556182981317370;
                }
            }
        }
    }
    var_19 *= 1;
    #pragma endscop
}
