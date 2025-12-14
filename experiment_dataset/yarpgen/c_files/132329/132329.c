/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(var_10, var_7))) ? (~var_7) : (min(var_4, (min(var_6, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = max(var_10, ((var_10 ? (arr_4 [i_1 - 2] [i_1 - 3]) : var_9)));
                var_15 = (max(((((min(var_9, -86))) * ((var_0 ? (arr_2 [i_0]) : var_12)))), -6490230771570797942));
                arr_5 [i_0] = (((((arr_0 [i_0]) >> (var_9 + 8283060492719961957)))) ? 96 : (((min(var_11, -8731537254171930459)) >> (arr_4 [i_1] [i_1 + 1]))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_16 = (min(var_16, (max((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 3]))), (max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))))));
                    var_17 = (((((~(arr_4 [i_2 + 1] [i_2 - 2])))) ? (arr_4 [i_2 - 1] [i_2 - 3]) : var_5));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = max(((((arr_2 [i_1 - 3]) && (arr_2 [i_1 - 2])))), ((((min(var_5, (arr_4 [i_1] [i_1])))) ? ((var_5 ? var_1 : (arr_6 [i_0] [i_1 - 2] [i_0] [i_1 + 1]))) : (!var_6))));
                }
                arr_9 [i_0] [i_1] = ((!((max((arr_3 [i_1 - 1] [i_1 - 2]), (arr_3 [i_0] [i_1 - 3]))))));
            }
        }
    }
    var_18 = var_11;
    var_19 = -1;
    #pragma endscop
}
