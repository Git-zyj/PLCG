/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (231 / 65535);
    var_16 = (max(var_16, (((~(max(3895821990960472961, -64)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((!719798529) | (!-134217728)));
                var_17 = (min((max((((1 < (arr_2 [i_0 - 3] [i_0])))), 14550922082749078655)), ((((-1962 ? 13165965320987137336 : 719798502)) << (3575168766 - 3575168707)))));
                arr_5 [i_0] = (((((((max((arr_2 [i_0] [i_0]), 2843369627))) ? (((-(arr_3 [1])))) : 3032499074142105850))) ? (((((((((arr_3 [i_0]) && (arr_2 [i_0] [i_0]))))) <= 5)))) : var_7));
            }
        }
    }
    #pragma endscop
}
