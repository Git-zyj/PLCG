/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(((max(-14, 31))), var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = -1423584227670824045;
                    var_14 |= 179;
                }
                var_15 = (min(var_15, ((((((arr_5 [i_0 - 2] [i_1 + 1]) ? (-9223372036854775807 - 1) : (arr_5 [i_0 - 3] [i_0 + 1]))) / ((((arr_5 [i_0 + 1] [i_1 - 1]) ? (arr_4 [i_0]) : (arr_5 [i_1 + 1] [i_0 - 3])))))))));
                var_16 = (arr_6 [i_1 + 1] [i_0 - 3] [i_1]);
            }
        }
    }
    var_17 -= (min(var_1, var_7));
    var_18 = -123;
    #pragma endscop
}
