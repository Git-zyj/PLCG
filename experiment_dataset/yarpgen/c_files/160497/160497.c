/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (min((((112 - 109) + var_14)), ((min(var_1, var_8)))));
    var_19 = ((((var_1 ? var_8 : (var_14 || var_6)))) ? (max(((6709719303285707765 ? var_13 : 0)), (var_4 <= 92))) : ((((var_1 - var_9) ? ((-97 ? var_17 : 20751)) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((arr_3 [i_1]) ? var_0 : (20751 | 784727418)));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_0] [4] [i_0] [i_0] = (((((117 - (arr_1 [i_0 + 3])))) - ((20751 ? (((min((arr_1 [i_0]), (arr_3 [6]))))) : ((31826 ? (arr_6 [i_0] [i_1] [i_1]) : (arr_6 [i_0] [i_0 - 1] [i_0])))))));
                    arr_10 [i_0] [i_1] [i_0] = ((var_5 ? (min(var_11, ((4 ? 9769099068127387637 : 2397)))) : (min((arr_8 [i_0] [i_1] [i_2]), (arr_6 [i_0 - 4] [i_0 + 3] [i_2])))));
                }
                var_20 ^= ((((arr_2 [i_0 - 3]) <= (min(var_9, (arr_3 [i_1]))))));
                arr_11 [i_1] [i_0] [i_0] = ((((max((arr_4 [i_0 - 3]), (arr_8 [i_0] [i_1] [i_0 - 3])))) ? var_9 : (!var_14)));
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
