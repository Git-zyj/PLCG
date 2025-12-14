/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (min(((-(min(-46, 0)))), (arr_0 [i_1])));
                var_14 ^= var_0;
                arr_5 [i_1] = (min((arr_3 [i_1]), (min(((((arr_3 [i_1]) ? 65 : 65))), (((arr_0 [i_1]) ? 4294967295 : (arr_2 [i_0] [i_0])))))));
                arr_6 [i_1] [i_0] [i_1] = min(var_9, (-9223372036854775807 - 1));
            }
        }
    }
    var_15 = ((((min(-897569133, var_4))) <= (var_4 | var_7)));
    #pragma endscop
}
