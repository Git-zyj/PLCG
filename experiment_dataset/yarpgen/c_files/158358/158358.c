/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((!(((((max(3497619736, (arr_1 [i_1])))) ? var_1 : (((-(arr_4 [i_2] [i_1 + 1] [6] [i_0])))))))));
                    var_20 = (max(3497619728, 8));
                    var_21 ^= ((~4125181624944409825) ? ((((!(arr_3 [i_0] [i_1] [i_0]))))) : (max((~var_1), (arr_3 [i_0] [i_1 + 2] [i_0]))));
                }
            }
        }
    }
    var_22 = (min(var_22, (~797347560)));
    var_23 = ((((max(var_9, var_13))) ? var_9 : ((((var_9 ? var_14 : var_0))))));
    #pragma endscop
}
