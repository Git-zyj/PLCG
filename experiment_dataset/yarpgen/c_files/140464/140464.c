/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = 52;
                arr_7 [i_0] [i_1] |= (((((((!(arr_4 [3]))))) / -8660929411443427214)));
                var_17 = ((!((min((arr_5 [i_0]), (arr_5 [i_0]))))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_12 [i_1] [i_1] |= (((((var_0 && (3 && 576015480)))) << (((22 && ((((arr_4 [i_0]) ? 223 : var_9))))))));
                    arr_13 [i_2] [i_1] [i_1] = (i_2 % 2 == 0) ? (((((((var_10 ? 802036964 : -517597483)) / (((var_12 << (arr_11 [3] [i_2] [5] [14])))))) << (((((arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 4]) ? ((((arr_10 [i_0] [17] [2] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_1] [8])))) : 9223372036854775807)) - 137))))) : (((((((var_10 ? 802036964 : -517597483)) / (((var_12 << (arr_11 [3] [i_2] [5] [14])))))) << (((((((arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 4]) ? ((((arr_10 [i_0] [17] [2] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_1] [8])))) : 9223372036854775807)) - 137)) - 9223372036854775662)))));
                }
                arr_14 [i_0] [15] = (arr_9 [i_0] [4] [i_0] [i_1]);
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
