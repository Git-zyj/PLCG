/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((((14610702800446328917 <= 3836041273263222691) || (var_7 || 14610702800446328905)))) != ((((var_4 + var_0) || var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((-(var_7 || 161)));
                    var_13 = (min(var_13, (((var_11 ^ (max((min(3836041273263222711, 14610702800446328899)), (((var_1 == (arr_5 [i_1 - 1])))))))))));
                }
            }
        }
    }
    var_14 = (~-659);
    var_15 ^= (((((-659 - 1048576) - var_8)) / (((-472754617 & ((max(var_2, var_5))))))));
    #pragma endscop
}
