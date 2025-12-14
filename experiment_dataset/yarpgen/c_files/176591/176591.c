/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((((max((arr_1 [i_0]), 1))) ? ((1 ? 1640407558 : var_8)) : (((max((arr_0 [i_0] [i_2]), var_6))))))) | (((((var_0 ? var_0 : (arr_1 [i_0])))) ? (((var_0 ? (arr_7 [i_0] [i_1] [i_2]) : var_7))) : ((var_3 ^ (arr_2 [i_0] [i_1] [i_0]))))))))));
                    var_14 = (max(var_14, (((-(((((var_0 ? 3663954026 : var_7))) ? ((((!(arr_1 [i_0]))))) : (631013268 ^ 4077122403))))))));
                    arr_9 [9] [i_0] [9] = (((((((max(var_10, 631013269))) ? (max(478840447267937271, 1147381424)) : (!631013269)))) ? -var_7 : ((-((631013269 ? var_7 : var_10))))));
                }
            }
        }
    }
    var_15 = (((-18446744073709551615 ? (max(1048575, 4294967280) : (max(8716255217993512299, var_11))))));
    var_16 = (max(((max((max(var_10, var_7)), -var_6))), (((((var_0 ? var_2 : var_9))) ? (((var_4 ? var_0 : 631013272))) : ((var_8 ? var_2 : 1223983637559555281))))));
    var_17 = ((((~(max(var_7, 0))))) ? ((((max(-5805491687479198759, var_12))) ? (((var_7 ? var_4 : var_0))) : ((var_12 ? 631013277 : var_9)))) : ((max((!var_10), (var_3 - var_7)))));
    #pragma endscop
}
