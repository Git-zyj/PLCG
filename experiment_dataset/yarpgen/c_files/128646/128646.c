/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] [i_1] = (((3966338541 >= 48) ? ((min(3, -5862))) : (((var_0 + 2147483647) << (1 - 1)))));
                var_20 = (max(var_20, ((min(3756038106, (max((3 | 2285784242231447373), (((5868 >> (220 - 210)))))))))));
                var_21 ^= ((var_16 == ((2285784242231447373 ? 10 : (arr_0 [i_1 + 1] [i_1 - 2])))));
            }
        }
    }
    var_22 = ((min(var_5, ((245 ? 5277443787342828202 : -4018209598246235563)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_23 = (min(var_23, var_0));
                    var_24 ^= -26646;
                }
            }
        }
    }
    #pragma endscop
}
