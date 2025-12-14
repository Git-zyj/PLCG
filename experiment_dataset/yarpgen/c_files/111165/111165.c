/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += (arr_0 [i_0 - 1]);
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] = (((((-(((arr_1 [i_0] [i_1]) ? 247387742 : (arr_3 [i_1] [i_0] [i_0])))))) ? ((var_3 ? (arr_4 [i_1] [i_0 - 1]) : var_7)) : (((~(((arr_3 [1] [i_0 - 1] [i_0]) + (-127 - 1))))))));
                arr_6 [i_1] [i_1] [i_0] = (min(1014653885452901188, ((max(4047579553, var_11)))));
                arr_7 [i_0] [8] [i_1] = var_1;
            }
        }
    }
    var_13 = (max((max((((26543 ? 28067 : 229))), var_9)), var_1));
    var_14 = ((!((((((5670 ? 232 : -27162))) ? ((var_7 ? var_6 : 219)) : 197)))));
    #pragma endscop
}
