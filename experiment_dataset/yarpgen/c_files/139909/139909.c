/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 |= ((-((99 ? -91 : 5372))));
                        arr_8 [7] [i_2] [i_3] [i_2] = ((-((-(arr_3 [i_0] [i_0])))));
                        var_18 = (min(var_18, -9));
                    }
                    arr_9 [4] [i_2] [5] [4] = ((~(!45)));
                    var_19 = ((((var_12 || (arr_3 [i_1] [i_0])))));
                    var_20 = (max(var_20, (((((((var_15 ? -1128447868 : 57112)))) ? 1 : (arr_4 [i_0] [i_1] [i_0]))))));
                    arr_10 [i_0] [i_2] = (((57112 ? var_6 : var_12)));
                }
            }
        }
    }
    var_21 = (((var_10 % 17) & ((~(var_11 ^ -1133702103)))));
    var_22 = (min(var_22, (((((~var_16) >> (247 - 241)))))));
    #pragma endscop
}
