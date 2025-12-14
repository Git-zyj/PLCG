/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? ((((min(4772473748748195999, (!var_6))) << (((arr_4 [i_0] [i_1]) + 9974))))) : ((((min(4772473748748195999, (!var_6))) << (((((arr_4 [i_0] [i_1]) + 9974)) - 34696)))));
                arr_7 [i_0] [i_1 - 1] [i_1] = (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = ((!((min((arr_4 [i_3] [i_3]), var_11)))));
                    arr_14 [i_2] [i_2] [i_3] [i_2] = 1717629898839480628;
                }
            }
        }
    }
    #pragma endscop
}
