/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_2, ((max(((var_10 >> (var_3 - 47))), var_7))));
    var_12 = (min(((min((max(var_4, var_1)), ((min(var_9, var_8)))))), (((min(-8457145786213683094, 8457145786213683094)) ^ (max(3432908710626751581, var_6))))));
    var_13 = 1112719411;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] = ((var_9 ? var_4 : (arr_1 [i_0] [i_0])));
            var_14 = (arr_2 [i_0]);
            arr_5 [i_0] [i_1] = ((((((var_10 / 10) << (((max(1638433690783959359, 8457145786213683093)) - 8457145786213683088))))) ? ((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : var_6))) : 8457145786213683092));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_15 = ((var_2 / (((arr_3 [i_0 - 1] [i_0] [i_0]) ? (min(var_4, (arr_0 [i_0]))) : (((max(var_9, var_8))))))));
            arr_8 [i_2] [i_0] [i_0] = var_1;
            arr_9 [i_0 - 1] [i_2] [i_2] = ((~(max(((min((arr_2 [i_0]), var_1))), (min((arr_0 [i_0]), (arr_0 [i_2])))))));
            var_16 = (((8457145786213683099 || 1) == (arr_2 [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_17 = (var_1 > var_4);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_18 = var_3;
                        var_19 = var_1;
                    }
                }
            }
        }
        arr_17 [i_0] |= ((((max((arr_1 [i_0 + 2] [i_0]), 5341912978046236448))) ? (((min(var_3, (arr_0 [2]))) << (var_4 / var_0))) : ((min(-var_7, ((min(var_9, 15230))))))));
        arr_18 [i_0] [i_0] = ((~(min((max((arr_12 [i_0]), 5818683215486675428)), (var_3 + var_6)))));
        arr_19 [i_0] [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 = (arr_2 [i_6]);
        arr_23 [i_6] &= (arr_12 [i_6]);
    }
    #pragma endscop
}
