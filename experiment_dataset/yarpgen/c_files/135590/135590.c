/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_3 == (var_6 >= var_8)))) == (min((~var_3), ((-71 ? var_15 : 96))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (max(var_17, ((~(((arr_1 [i_0] [2]) << (((arr_1 [i_0] [i_0]) - 37893))))))));
        var_18 += ((((((2068562752 ? 15476 : 113)))) ? ((((!(arr_0 [i_0]))) ? (((min(131, 96)))) : var_13)) : ((((arr_2 [i_0]) ? (-2147483647 - 1) : (((arr_1 [i_0] [i_0]) ? var_7 : (arr_2 [i_0]))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2 + 2] [i_1] [i_1] = (min(0, 11177712724608734721));
                    arr_14 [i_1] [i_3] = (((max((arr_9 [i_1] [i_2 + 2] [i_3]), (1 || 34555)))) ? (max((arr_10 [i_1 - 1]), 96)) : ((((arr_10 [i_1 + 1]) ? (arr_5 [i_2 + 4]) : (arr_5 [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
