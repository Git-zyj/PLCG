/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((((((64213 ? var_11 : var_1))) ? 3627301764220723804 : var_0))) ? -1838331645 : var_1)))));
    var_14 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((-(((arr_7 [i_0] [i_0 - 1] [i_0 - 1]) ? (((var_0 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1])))) : (min(var_12, (arr_2 [i_0])))))));
                    var_16 -= (min(((((0 ? 10502794487177911998 : var_8)))), ((((min((arr_5 [i_0]), var_11))) ? (arr_5 [i_0 + 1]) : var_5))));
                    var_17 &= ((((((arr_1 [2] [i_2 + 1]) ? ((max(var_5, var_6))) : ((min(var_5, 14945)))))) ? (~-1838331645) : -11655));
                    arr_9 [8] [i_0 - 1] [i_1] [i_2] |= (((((((var_2 ? var_10 : 1618752345))) ? 1 : (!9379963131344489307))) < (((((103665045 ? 7825 : -9423))) ? var_2 : ((3542 ? 35 : var_1))))));
                }
            }
        }
    }
    var_18 += 11;
    #pragma endscop
}
