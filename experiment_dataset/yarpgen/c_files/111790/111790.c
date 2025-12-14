/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max((((var_0 ? var_4 : var_0))), (var_4 + var_12))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 ^= (((arr_2 [i_2 - 1] [i_2 + 1]) ? ((((var_0 ? (arr_7 [i_0] [i_1 - 2] [19]) : var_9)) << (((arr_0 [i_2] [i_2]) - 37343)))) : (((((((arr_1 [i_0]) ? (arr_5 [i_0] [i_2 + 2]) : var_3)) <= (4294967295 && 1)))))));
                    arr_8 [i_1] = (((min((arr_2 [i_0 - 1] [i_1 + 1]), (arr_1 [i_0 - 1]))) + (min((((arr_3 [i_1] [15] [i_2]) ? (arr_1 [i_0]) : (arr_2 [i_1 + 1] [i_2 + 1]))), ((var_4 ? var_5 : (arr_0 [i_1] [i_1])))))));
                    arr_9 [i_0] [i_1 - 2] [i_0] [i_1] = (arr_2 [i_0] [i_2]);
                    var_15 = (min(var_15, ((min(((((max(var_7, (arr_4 [i_1] [i_1])))) ? ((var_9 >> (((arr_4 [i_0 - 4] [i_2]) - 47881)))) : ((max((arr_6 [13] [i_1 - 1] [i_1 - 1] [13]), (arr_5 [i_0 - 1] [i_0 - 1])))))), ((var_8 ? var_11 : ((var_6 % (arr_4 [i_0] [i_0 - 4]))))))))));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = (~var_11);
    #pragma endscop
}
