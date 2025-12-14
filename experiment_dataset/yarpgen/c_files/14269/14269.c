/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_13 >> (var_2 - 1358284481)))))) / (((~var_12) ? (var_1 * var_10) : (!var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0 - 1] = ((((max(((var_12 ? var_7 : 705290965)), 2684662129))) ? (((((((arr_2 [i_0 + 1]) == 2316186406916917852)))) ^ (((arr_5 [i_0] [i_1] [i_1 - 3]) ? 198 : 937635248304869755)))) : (((~((~(arr_0 [i_1 - 3]))))))));
                arr_8 [i_0] = (min((max((arr_5 [i_0 - 1] [i_1 - 2] [i_1]), (arr_5 [i_0 - 1] [i_1 + 1] [9]))), (-2048 ^ 937635248304869770)));
                var_17 = (((max(var_11, (max(var_10, 705290967)))) | (((4311 ? ((-(arr_2 [14]))) : (max(-2141563960, 135854007)))))));
                arr_9 [8] [i_0] = ((((((arr_3 [i_0] [i_1 - 3] [i_0]) <= (arr_1 [i_0] [i_0])))) <= ((max(var_12, (arr_1 [i_0 + 1] [i_0]))))));
                arr_10 [i_0] [i_1] = var_10;
            }
        }
    }
    var_18 *= var_12;
    var_19 ^= 67;
    #pragma endscop
}
