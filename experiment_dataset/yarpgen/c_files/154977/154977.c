/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (~-0);
                var_21 ^= (arr_0 [i_1]);
                var_22 += (arr_0 [i_1 - 2]);
                arr_5 [i_0] = ((~(((arr_0 [i_0 - 1]) ? (arr_2 [i_0]) : (((212 ? (arr_3 [1]) : var_17)))))));
            }
        }
    }
    var_23 = var_15;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [10] = (max(((((arr_8 [i_3]) + (arr_8 [i_2])))), 2923286580));
                var_24 ^= (max(((max(var_11, (min(4294967295, var_18))))), ((148 ? 0 : ((1 ? 108199233542344196 : -9916))))));
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}
