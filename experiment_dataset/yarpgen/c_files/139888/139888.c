/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [0] [i_2] = ((~((((arr_3 [i_1 - 1] [i_1]) || (arr_3 [i_1 - 1] [i_1 + 3]))))));
                    arr_9 [i_1] [i_1] [i_1] |= var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                var_12 = (arr_1 [i_3]);
                var_13 ^= (arr_3 [i_4] [i_3 + 2]);
                var_14 = ((((!(arr_11 [i_3 + 1]))) ? (((!(((20600 ? 1350125082 : 1350125082)))))) : (arr_12 [i_4 + 3])));
            }
        }
    }
    #pragma endscop
}
