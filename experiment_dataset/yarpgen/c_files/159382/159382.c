/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159382
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
                var_13 = (min(var_13, (((((max((arr_2 [i_0] [i_0]), (((var_2 || (arr_0 [i_1]))))))) ? ((((arr_2 [i_0] [i_1]) ? var_6 : (max((arr_0 [i_1]), 758824566))))) : (arr_2 [i_0] [i_1]))))));
                var_14 = ((((max(((((arr_1 [i_0]) ? (arr_1 [15]) : 0))), (min(255, (arr_2 [6] [4])))))) ? (((max((arr_2 [i_0] [i_1]), 4272364419)) ^ (max((arr_2 [i_0] [i_1]), 32594)))) : ((((arr_0 [4]) ? (arr_3 [i_0]) : 22602876)))));
                var_15 ^= (((((((arr_3 [i_0]) ? var_6 : 4272364420))) ? (arr_2 [1] [1]) : var_1)));
                var_16 = 22602864;
                var_17 = (max(var_17, (arr_3 [i_0])));
            }
        }
    }
    var_18 = (max((min((~var_5), ((var_5 ? 8415961853687794773 : -29344)))), var_10));
    var_19 = (((16200 ? 1 : 4294967285)));
    #pragma endscop
}
