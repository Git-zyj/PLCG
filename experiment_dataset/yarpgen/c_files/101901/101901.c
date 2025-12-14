/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 -= (max(((((max(-21, 2147483627))) ^ (max((arr_4 [i_1]), var_12)))), ((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : var_11)))));
                var_19 ^= (((max(1, (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) && (arr_3 [i_0])));
                var_20 = (min(var_20, ((min(-39, (max((arr_3 [i_1]), (arr_0 [i_0] [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] = (var_15 ? (((arr_6 [i_2]) ^ ((max((arr_9 [i_3] [i_3]), 1))))) : (((arr_9 [i_3] [i_3]) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_3]))));
                var_21 = (min(var_21, ((max(1, ((((max(60, (arr_6 [i_3])))) ? (arr_5 [i_2] [i_3]) : (((arr_6 [i_2]) ? var_12 : var_9)))))))));
            }
        }
    }
    #pragma endscop
}
