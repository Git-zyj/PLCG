/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!32748);
    var_17 = var_5;
    var_18 = (max(var_7, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [10] [i_1] = (((max(var_14, (arr_0 [i_0]))) * (((((max(var_2, -21229))) >> (((min(var_9, var_6)) - 14295)))))));
                arr_6 [2] [i_0] = ((((min((max(var_11, var_10)), (((var_6 >> (var_15 - 9730905391590783947))))))) ? (((~(arr_0 [i_0])))) : ((((!(arr_1 [i_1])))))));
                var_19 = (((((arr_1 [i_0]) - (arr_2 [i_1] [i_0])))) ? (max((arr_1 [i_1]), var_10)) : ((((((var_15 / (arr_1 [i_1]))) == ((max(var_6, var_13))))))));
                arr_7 [i_0] = (~5582);
                var_20 = (max(((((arr_3 [i_0] [i_0] [i_1]) + (var_2 < 0)))), (((arr_4 [8] [i_1] [i_1]) + (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [1] = var_6;
                arr_13 [i_2] [i_2] [i_2] = var_0;
            }
        }
    }
    #pragma endscop
}
