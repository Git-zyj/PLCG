/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((max((((!(arr_3 [i_0] [i_2 + 1])))), (arr_7 [i_0] [i_1] [i_1] [i_1])))) ? (((((max(1945123233, var_13))) ? 2349844063 : (arr_7 [i_1] [i_2] [i_1] [i_1])))) : (min(1284462964, (arr_8 [i_2 + 1] [i_2 - 1] [i_1] [i_0]))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 1] = (min(var_1, (!1)));
                    arr_10 [i_1] [i_1] [8] &= (min(1, ((min(1945123233, (arr_4 [i_1]))))));
                }
            }
        }
    }
    var_21 = (max(var_21, (((((max(65535, 1945123233))) ? (((min((2349844063 && var_1), (min(var_5, var_17)))))) : (var_9 + var_2))))));
    var_22 = ((-(max((-1565489040 - 12891267516981169046), (37 * 1871802908)))));
    #pragma endscop
}
