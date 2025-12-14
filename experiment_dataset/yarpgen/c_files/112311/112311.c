/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (max(((1689169676 ? (min((arr_0 [i_1]), -9)) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_1]) : (arr_0 [i_0]))))), (min((arr_2 [i_0]), (((-9 >= (arr_0 [i_0 - 1]))))))));
                var_12 ^= (((((-(arr_1 [16] [i_0 - 3])))) ? (((10 ^ (242 & 1689169675)))) : ((((((arr_2 [i_0]) ? (arr_2 [i_0 + 1]) : 0))) ? 239 : ((~(arr_4 [i_0] [8] [i_0])))))));
            }
        }
    }
    var_13 -= (min((((1 <= var_10) ? -16 : (max(2000623888498091515, -1689169676)))), var_8));
    #pragma endscop
}
