/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((min(((1 ? var_2 : 30451)), 1)) | 6053629927670531904));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (21186 ^ 12176);
                    var_17 |= (((!1) ? ((max((arr_4 [i_2 - 1] [i_1]), (arr_4 [i_2 + 1] [i_1])))) : ((max(114, (arr_4 [i_2 + 1] [i_0]))))));
                }
            }
        }
        var_18 &= (min(-6638, 209));
        arr_9 [i_0] [12] = ((((((((var_2 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 0))) < 1231115048))) <= 1));
        arr_10 [12] &= (~-10176);
    }
    var_19 = var_11;
    var_20 = var_1;
    #pragma endscop
}
