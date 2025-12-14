/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 *= ((((((-779641288002210376 ? var_0 : var_7)))) ? 27547 : ((~(arr_4 [i_0])))));
                arr_5 [i_0] [i_0] [i_1] = ((((min(-52, 9772230320861710012))) ? (((min(11984, 37990)))) : 27545));
                var_14 = var_0;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = ((25362 ? var_1 : (arr_1 [i_0] [i_0])));
                    var_16 = 779641288002210383;
                    arr_9 [i_1] [i_1] [i_1] = ((var_4 ? (arr_1 [i_1] [i_2]) : 27544));
                }
            }
        }
    }
    var_17 = 5771860932037658057;
    var_18 = (((((max(var_8, var_9))) ? var_10 : (!var_9))) - (((((min(var_3, var_3))) ? var_7 : var_12))));
    var_19 = (((((-7419073131179591447 ? -75 : 3534))) && ((((27578 ? var_0 : -73))))));
    #pragma endscop
}
