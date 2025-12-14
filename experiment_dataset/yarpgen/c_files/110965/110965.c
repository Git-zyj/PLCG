/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_4 - var_3) ? 120 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((min((((arr_2 [i_0]) + var_1)), var_8))) ? var_6 : var_0)))));
                var_13 = (arr_1 [i_1]);

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [1] = ((-66 ? (max(3627504973619550959, (-9223372036854775807 - 1))) : ((0 ? 1605510879874228471 : 231))));
                    var_14 = (((2816705718713144446 <= 15286006563079642482) ? ((14819239100090000657 >> (12658 - 12596))) : (arr_7 [14] [i_1] [i_0] [i_0])));
                    var_15 = (min(var_15, ((((((3627504973619550953 ^ (arr_4 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) ? -var_6 : (max((arr_4 [i_2 + 1] [i_2 - 2] [17]), (arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1]))))))));
                    var_16 = (max(127, (((!(arr_0 [i_0]))))));
                }
            }
        }
    }
    var_17 = (((((var_0 < (var_4 > var_6)))) * var_6));
    var_18 = (max(13, 14819239100090000656));
    #pragma endscop
}
