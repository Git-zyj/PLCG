/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((((4163160751 ? (-2147483647 - 1) : var_3)) | (((((arr_3 [10]) + 2147483647)) << (((arr_7 [i_0] [5] [5]) - 113))))));
                    arr_10 [i_2] [i_0] [i_2 - 1] = ((!(arr_5 [i_1 + 2] [i_1 - 3])));
                    var_10 ^= ((((!(var_9 | -2147483625))) ? (((var_3 && (((27328 ? (arr_1 [i_0]) : var_0)))))) : ((~(((arr_7 [i_0] [i_0] [i_0]) << (((((arr_0 [i_2]) + 25350)) - 22))))))));
                    arr_11 [i_0] [i_1] [i_2 + 1] |= ((((0 ? 131806568 : 131806545))) ? (((arr_4 [i_0]) ? (var_7 - var_7) : (!4163160751))) : -1);
                }
            }
        }
    }
    var_11 = var_8;
    var_12 = var_2;
    #pragma endscop
}
