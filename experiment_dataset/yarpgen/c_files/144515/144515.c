/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [17] [i_1] [i_0] = (((-(arr_3 [1] [i_0] [i_0]))));
                arr_5 [i_1] = 674981776;
                var_16 = ((!((max((arr_3 [i_1] [5] [i_1 + 2]), (arr_2 [i_1] [0] [i_1 - 2]))))));
                var_17 = 1;
            }
        }
    }
    var_18 &= (~var_3);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_19 += (arr_2 [i_3] [i_3] [i_3]);
                var_20 += ((254 ? 211 : 211));
            }
        }
    }
    var_21 = (!-211);
    #pragma endscop
}
