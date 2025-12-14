/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-5731620732287002771);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] |= (max((max(-2145533312, (arr_0 [i_0]))), (((!(arr_0 [i_0]))))));
                arr_5 [i_0] = ((1 ? -2719068441469251591 : 33986));
                arr_6 [i_0] = (-((var_1 ? (arr_3 [i_1]) : (((((arr_2 [i_0]) != var_10)))))));
                arr_7 [i_0] [i_1] [i_1] = -2147483647;
                var_17 = ((~(max(5731620732287002768, (-2147483627 ^ 5731620732287002791)))));
            }
        }
    }
    var_18 += var_11;
    var_19 |= -var_1;
    var_20 = (-((-5731620732287002769 ? var_10 : 8942131649158133245)));
    #pragma endscop
}
