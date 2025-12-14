/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0 + 3] [i_1] [i_1 - 2] = ((6729777140221041220 ? 244300163442472327 : 268435440));
                var_14 &= ((~(min((arr_1 [i_1] [i_1 - 1]), (arr_1 [i_1] [i_1 - 3])))));
                arr_5 [i_1] = 1;
                arr_6 [i_1] [i_0 - 1] [i_1] = ((~((max(var_4, var_9)))));
            }
        }
    }
    var_15 = 1;
    #pragma endscop
}
