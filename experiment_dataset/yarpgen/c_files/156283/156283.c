/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((-2 ? 279223176896970752 : 29214)));
                var_18 = (max(var_18, ((((!((((arr_0 [i_0] [i_1]) ? var_3 : (arr_1 [i_0] [i_1]))))))))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_19 = (min(var_19, -var_1));
                    arr_7 [i_0] [i_0] [1] = -29215;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (min((min(32766, ((var_6 ? (arr_3 [i_0]) : var_7)))), var_2));
                    arr_11 [17] [i_0] [i_3] = ((((((((arr_5 [9] [9] [i_3] [4]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_1])))) ? var_5 : (arr_0 [i_0] [i_1]))) << (((((var_5 ? var_3 : 13851773072272065629))) - 82))));
                    var_21 = min(var_4, (arr_0 [i_0] [i_1]));
                    var_22 -= (max((((-29222 ? (arr_0 [i_3] [i_3]) : -6937088041895808317))), ((var_2 * (max(-4216816552202011619, 14421218879981334235))))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_11));
    #pragma endscop
}
