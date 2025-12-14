/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 92;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [2] [i_2] = 52997;
                    arr_9 [i_0] [i_1] [i_2] = -256267821;
                    var_19 = var_6;
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_14 [i_0] [i_3] = ((((6007532729138138759 ? (arr_3 [i_0] [i_3]) : 4)) <= ((((63550 > 19177) + (arr_13 [i_0] [14] [i_1] [i_3]))))));
                    arr_15 [i_3] = min((arr_2 [7] [i_1]), (arr_10 [i_0]));
                }
                arr_16 [i_0] [i_1] [i_1] |= (((((min(var_4, -1891612317)))) ? (((~55771) ? ((var_7 ? 1537479152 : -1380716557)) : 8996)) : ((241 << (9223372036854775807 - 9223372036854775800)))));
            }
        }
    }
    #pragma endscop
}
