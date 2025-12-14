/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-((var_15 ? 7568891502329417313 : 7568891502329417303)))), ((max(380880838, (var_8 || var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [7] [i_0] = ((min(((36020000925941760 << (7568891502329417313 - 7568891502329417296))), ((((arr_4 [i_0] [i_0] [6]) | (arr_3 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] = max((arr_1 [i_0]), ((~(arr_0 [i_0] [10]))));
                var_18 = (max((arr_4 [i_0] [i_1] [i_0]), 1));
                var_19 = ((max((arr_2 [13]), (arr_2 [i_0]))));
            }
        }
    }
    #pragma endscop
}
