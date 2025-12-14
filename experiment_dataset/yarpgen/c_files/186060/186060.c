/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = arr_2 [i_0];
        arr_4 [i_0] [3] = ((-(arr_3 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = max(var_16, (arr_3 [i_0] [11]));
                        var_20 ^= ((((min(-91, (arr_10 [i_2] [i_0] [i_2])))) ? (((((arr_2 [i_0]) < (((min(1, 1)))))))) : (min((2038561844 | 14280086897682454226), var_3))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                var_21 = ((226 ? 43665 : 4294967295));
                var_22 ^= (((((var_10 == 2038561844) || (26559 | -6))) ? -2038561845 : (min(var_3, (arr_20 [i_4 + 1])))));
                arr_21 [i_5] = ((!((max(var_9, (arr_18 [i_5] [i_5 + 3]))))));
            }
        }
    }
    #pragma endscop
}
