/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((var_9 & ((((187 ? 4199 : 0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (((((min(5, (arr_0 [i_1])))) >= ((max((arr_4 [i_1] [i_0] [i_0]), (arr_0 [i_0])))))));
                var_14 = (((arr_0 [i_0 + 2]) ? ((((arr_0 [i_0 - 1]) < var_2))) : var_11));
                var_15 = (min(var_15, ((((~1) ^ (min(var_4, 6409501822637876291)))))));
                var_16 = (min((min(((min(var_9, 6070))), (((arr_5 [i_0 + 2] [i_0 - 1] [i_0]) ? var_5 : var_11)))), ((((arr_0 [11]) * 243471426)))));
            }
        }
    }
    #pragma endscop
}
