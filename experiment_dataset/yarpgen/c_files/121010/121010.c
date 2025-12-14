/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-1813493751 + 122);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 ^= (min(-var_6, ((((arr_0 [i_0 - 2]) == (arr_0 [i_0 - 2]))))));
                var_20 = ((((max((arr_1 [i_0 + 1]), (arr_2 [i_0 - 4] [i_0 - 1])))) ? ((var_9 ^ (arr_1 [i_0 + 1]))) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_2] = ((~(arr_8 [i_3] [i_2])));
                arr_10 [i_2] [6] = (arr_2 [9] [9]);
                arr_11 [2] [i_3] = (min((((arr_6 [i_2] [i_2]) && var_7)), (!15674)));
            }
        }
    }
    #pragma endscop
}
