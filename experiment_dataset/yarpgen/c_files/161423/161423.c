/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((max(var_10, var_9))) ? (((min(15374, 5926699026272767323)))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] |= var_4;
                var_21 += (max(var_12, 1719990333));
                arr_5 [i_0] |= ((((min(-1, ((min(1, var_7)))))) ? (((min(1, var_10)))) : 6020));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 *= (min(((448 ? 1832241578 : 32767)), (arr_7 [i_0] [i_1] [i_2] [i_3])));
                            var_23 = -19804;
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (((((2368 ? 1 : var_1))) ? (((!(arr_6 [i_0] [i_1] [i_0] [i_1])))) : (((-6035 | 16889510502836934705) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((max((arr_7 [i_0] [i_0] [i_0] [i_1]), 1)))))));
            }
        }
    }
    #pragma endscop
}
