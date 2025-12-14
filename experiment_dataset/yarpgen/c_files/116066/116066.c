/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = (min((var_18 / var_4), (((1098308605 * 1) + var_18))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((((((var_0 ? var_1 : -7300572122497682428)) + (((min(1, var_13)))))) / -17807)))));
                    var_22 = (((((1 ? (arr_5 [i_0] [i_1]) : (arr_2 [i_1])))) ? (((max(19366, (arr_6 [i_2 + 1]))) + -65534)) : 1));
                }
            }
        }
    }
    #pragma endscop
}
