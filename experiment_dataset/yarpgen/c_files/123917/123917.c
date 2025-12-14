/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [9] [2] = ((~(max(60218, (max(-65, (arr_8 [i_1 + 1] [i_2] [i_3])))))));
                            var_19 ^= ((-((((arr_0 [8] [i_1 - 1]) > (arr_0 [i_0 + 3] [i_1 + 1]))))));
                        }
                    }
                }
                var_20 = -60234;
                arr_12 [i_1] [13] [i_1] = ((~(!-20656)));
            }
        }
    }
    var_21 = (min(((min(20980, 5318))), var_17));
    var_22 = (((-(125 > 0))));
    var_23 = (max(var_23, var_3));
    var_24 = (5339 || var_11);
    #pragma endscop
}
