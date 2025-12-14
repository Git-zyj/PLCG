/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1000759017936648682 ? -27259 : 27190));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [10] &= (max((458095808 || 1), (((arr_3 [i_0] [8]) ? (arr_3 [i_0] [10]) : 11))));
                    var_13 = (arr_1 [i_0]);
                }
            }
        }
    }
    var_14 = var_0;
    var_15 = (39822 ? var_4 : ((max(168, 3836871471))));
    #pragma endscop
}
