/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 += (arr_2 [i_0] [i_1] [i_1]);
                var_17 *= ((((((274177750 >= 727) ? 1 : (max(var_1, -736705333))))) ? var_13 : (((-(arr_1 [i_0]))))));
                var_18 += (arr_2 [i_0] [i_1] [i_1]);
                var_19 -= ((min(-736705333, -736705333)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_20 *= (min(((252 ? (arr_8 [i_2]) : var_11)), (arr_9 [i_2])));
                var_21 = ((-736705332 ? (((arr_7 [i_2]) / (arr_7 [i_3]))) : (((((18446744073709551615 | (arr_5 [i_2] [i_3]))) > ((((arr_7 [i_3]) ? -64 : 0))))))));
            }
        }
    }
    #pragma endscop
}
