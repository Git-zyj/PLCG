/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((arr_3 [1] [i_0] [i_0]) ? (((113081805 > (arr_4 [i_0] [0] [0])))) : var_10)) == (((arr_0 [i_0] [i_0]) ^ var_4))));
                arr_7 [10] [i_1] [10] |= 12;
            }
        }
    }

    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] [i_2 - 2] = ((((((1 & 5100984386538232156) - (arr_8 [i_2 + 1])))) ? ((var_7 ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 + 1]))) : (!var_10)));
        var_12 = 16;
    }
    var_13 ^= ((((((13345759687171319459 ? 5100984386538232156 : 0)) ^ (((var_3 >> (13345759687171319459 - 13345759687171319438)))))) % ((max(var_2, ((var_10 >> (var_4 - 31185))))))));
    var_14 = var_7;
    #pragma endscop
}
