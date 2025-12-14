/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [11] = ((max(((4968713233539722270 ? 4840927700263234385 : 4840927700263234395)), 62)) & ((~(((arr_5 [i_2]) ? var_6 : 17)))));
                    arr_9 [i_0] [i_1] = (max(((+(max((arr_1 [i_2 - 1]), 9223372036854775789)))), (((((arr_2 [i_0] [12]) && (arr_7 [i_0] [i_0] [i_1] [i_2]))) ? var_8 : (arr_2 [i_0] [i_0])))));
                    var_10 = (((var_7 > ((((arr_5 [i_2]) && (arr_2 [i_0] [i_1])))))) ? (arr_2 [i_0] [i_0]) : (((2556465745670006533 ? 121 : 52))));
                }
            }
        }
        arr_10 [5] = ((((-88 ^ (arr_5 [i_0]))) < (min((((arr_0 [i_0]) ? var_5 : (arr_4 [i_0] [i_0]))), -53))));
        arr_11 [i_0] [i_0] = (arr_5 [i_0]);
    }
    var_11 = (min(var_11, (((var_4 - ((((var_8 ? var_8 : var_6)) | (((-4497989643949778567 ? -6255231489100049965 : 7223253169917034440))))))))));
    var_12 |= max(((17412388523352571323 ? var_9 : (var_8 / var_8))), (((var_2 ? ((var_3 ? var_8 : var_3)) : var_8))));
    var_13 = (min(var_13, var_7));
    #pragma endscop
}
