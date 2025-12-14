/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (((((~(arr_2 [i_0 + 3] [i_0 + 2])))) ? ((~((200 ? 29668 : 112)))) : var_5));
        var_17 = (arr_1 [i_0 + 3]);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_4] [i_4] = (((-(arr_2 [5] [i_0]))));
                            var_18 = -10046;
                            var_19 = ((-(min(2303499260, (-2147483638 + 110)))));
                        }
                    }
                }
            }
            var_20 = (var_5 - var_1);
            arr_13 [i_0] &= ((((arr_0 [i_1] [i_1 - 1]) * (arr_0 [i_0] [i_0]))));
        }
    }
    var_21 = (((~var_7) < (((((var_12 ? var_8 : var_4))) ? (min(-117, 11114916443731466048)) : var_2))));
    var_22 = (max(var_22, (((!(-2147483647 - 1))))));
    #pragma endscop
}
