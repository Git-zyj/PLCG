/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? ((((((var_8 ? 118 : var_17)) > ((var_2 ? var_10 : 12090)))))) : (((~549755813856) ? ((20813 ? var_1 : var_12)) : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((!(min((((arr_1 [i_0]) == (arr_1 [i_1]))), ((!(arr_0 [i_0] [i_1]))))))))));
                    var_21 = (min(var_21, (((-(-111 + 18446743523953737760))))));
                    var_22 ^= 1;
                    var_23 = ((((((-(arr_0 [i_0] [4]))) != ((var_2 ? (arr_0 [i_0] [i_1]) : 42))))) << (((min(((-(arr_9 [i_0] [i_0] [i_2]))), -18446743523953737760)) - 549755813831)));
                }
            }
        }
    }
    #pragma endscop
}
