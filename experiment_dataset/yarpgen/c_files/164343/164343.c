/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = ((+(max((arr_1 [i_1 - 3] [i_1 + 3]), (arr_1 [i_1 + 3] [i_1 + 3])))));
                var_14 = (((9223372036854775798 == 1502905001305316261) * 46038));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                var_15 = (min(var_15, ((max((min((arr_0 [i_2] [i_2]), (~252))), ((18446735277616529408 + (((var_10 ? var_11 : (arr_7 [i_2])))))))))));
                var_16 *= ((((9223372036854775807 >> (((min(var_7, 1502905001305316245)) + 4525347662786115885))))) ? (((((arr_10 [i_2]) ? var_1 : (arr_2 [i_2]))) * (((-1502905001305316289 ? var_2 : 1502905001305316261))))) : (((max((arr_5 [i_2]), var_8)) ^ ((((arr_9 [i_3 + 2]) | var_3))))));
            }
        }
    }
    #pragma endscop
}
