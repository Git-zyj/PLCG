/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((1 ? 1152921504606846975 : 1)) > ((((((var_12 ? var_9 : (arr_2 [i_1])))) ? (arr_4 [i_1]) : (max(var_12, var_5)))))));
                arr_7 [i_0] [i_1] [8] = ((var_4 || ((((~65535) & (arr_2 [i_0]))))));
            }
        }
    }
    var_14 = ((((!(((-5101591384732968112 ? 255 : var_5))))) ? var_8 : (max(var_11, ((var_6 >> (63 - 57)))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    var_15 -= ((((-(arr_11 [i_2] [i_3 - 1]))) + (arr_15 [i_2] [i_2] [i_2] [i_2])));
                    arr_19 [i_2] [i_3] [i_3] [i_4] = (max(-67, ((max((arr_9 [i_2 + 1] [i_3 - 2]), (arr_9 [i_2 + 1] [i_3 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
