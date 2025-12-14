/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (~(((!60) ? (~var_3) : var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (~1)));
                arr_6 [i_0] [i_0] = ((!(((~((~(arr_4 [i_0] [i_1 - 1] [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = ((~(((!(arr_0 [i_2] [i_4 - 1]))))));
                    var_23 &= ((((-348614127 + (arr_10 [i_2] [i_4 + 1] [0]))) * (((-348614127 != (~-348614127))))));
                }
            }
        }
    }
    #pragma endscop
}
