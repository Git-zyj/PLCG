/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max(var_8, var_4)), 1957703942));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 -= 36734;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = 21726;
                            arr_12 [i_0] [i_1] [i_1] [i_1] = min(((((min(80, (arr_8 [i_0] [i_1] [i_0])))) ? var_4 : (max((arr_1 [i_0]), (arr_3 [i_0] [6] [i_3]))))), ((((arr_9 [i_3 - 1] [11] [i_3] [i_3]) && 39999))));
                            var_17 = (arr_6 [i_1] [i_2] [i_3 + 3]);
                        }
                    }
                }
                var_18 |= ((!(!var_11)));
            }
        }
    }
    #pragma endscop
}
