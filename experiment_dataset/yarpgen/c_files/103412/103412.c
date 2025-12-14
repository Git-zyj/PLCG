/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(((((((min(var_8, var_10)))) | (min(var_9, var_1))))), (min((var_6 * var_0), 104))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_9;
                    arr_8 [i_0] = (((arr_4 [i_0] [i_0] [11]) ? (~28438) : (((~1189568258) ? ((max(28438, 126))) : (((!(arr_0 [i_1]))))))));
                    var_13 = (min((131071 <= -46), (var_1 + -131045)));
                    var_14 = (max(var_14, var_6));
                }
            }
        }
    }
    #pragma endscop
}
