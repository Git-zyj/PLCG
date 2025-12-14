/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 1;
                var_14 -= (((arr_0 [i_1 + 1] [i_1 + 1]) ? (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))) : (((~(((((-32767 - 1) + 2147483647)) << 0)))))));
                arr_7 [i_1] &= ((((1 ? (arr_2 [i_1 + 1] [i_1 - 1]) : ((~(arr_2 [i_0] [i_0]))))) == ((((arr_2 [i_1 - 1] [i_1 - 1]) <= (arr_0 [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_15 &= ((((((((1 ? -1553613491938150664 : 1))) ? (1 || 3059176215978703464) : -1))) ? ((((((~var_10) + 2147483647)) >> (((var_4 * var_11) - 1359234740))))) : (min(var_8, (-1399648356 ^ 1288782231)))));
    #pragma endscop
}
