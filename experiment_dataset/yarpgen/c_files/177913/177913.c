/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, (min(((((arr_0 [i_0 + 1]) ? 33502 : ((~(arr_1 [i_0 + 3])))))), (((~var_7) / (arr_1 [i_0 + 2])))))));
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? var_18 : var_1))) ? (~var_2) : 1));
        var_21 = (min(var_21, 5830));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_22 = (((arr_4 [i_1] [i_1]) <= (arr_4 [i_3] [i_3])));
                        arr_16 [i_1] [i_2] [i_3] [i_2] = ((((!(arr_12 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 + 3]))) ? (!var_14) : ((((min(var_10, var_19))) ? (min(32034, -4389014791633737931)) : (((var_3 ? (arr_13 [i_4] [i_2] [i_3 + 2] [i_2] [i_3 - 2]) : 4294967295)))))));
                        var_23 = (min(var_23, ((((((arr_9 [i_1] [i_2] [i_3 - 3]) ? (arr_9 [i_1] [i_3] [i_3 + 2]) : (arr_9 [i_1] [i_1] [i_3 - 2]))) % ((9223372036854775807 ? var_19 : (arr_9 [i_1] [i_2] [i_3 + 2]))))))));
                    }
                }
            }
        }
        var_24 = (max(var_24, (((((min(var_17, (((253 ? (arr_6 [i_1]) : 1)))))) ? var_0 : 524287)))));
    }
    var_25 = ((var_19 ? (((3572553652 % var_8) ? ((var_12 ? var_19 : var_7)) : ((-38 ? 5145569388031667260 : 118)))) : 1));
    var_26 = (max(var_26, var_7));
    #pragma endscop
}
