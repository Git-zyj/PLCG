/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((~-8969609902519617647) ? var_2 : 52));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((-32767 - 1) - 194)))));
                    var_13 -= ((((((arr_1 [i_1]) ? ((max(var_4, (arr_6 [0] [i_1])))) : -27947))) ? (((((56358 ? (arr_5 [i_2]) : 0)) & ((((arr_7 [i_1] [i_2] [i_2]) > (arr_3 [i_0] [i_2]))))))) : (min(2536415344929535070, (min((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_14 = max(var_0, 190);
    #pragma endscop
}
