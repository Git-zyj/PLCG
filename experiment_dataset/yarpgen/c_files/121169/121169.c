/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((!(~var_8))) ? var_14 : (((max(var_4, var_9)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 -= ((+(((var_14 / var_4) ? (((arr_2 [i_0] [i_1] [i_1]) ? var_12 : (arr_1 [i_0] [i_1]))) : (((max(var_3, 69))))))));
                arr_4 [i_0] [i_1] = ((((~((4 ? -127 : 4))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((((arr_1 [i_1] [i_0]) < var_10)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                var_20 = (min(var_20, ((((!var_1) ? (max(var_17, var_1)) : ((((((231 ^ (arr_5 [i_2 + 3] [i_3])))) ? (arr_7 [i_3 + 1] [i_2 - 3] [i_2 + 2]) : (min(0, var_3))))))))));
                arr_9 [i_2] [i_2] [i_3 + 1] = (((arr_0 [i_2]) ? (((((4294967293 ? (arr_2 [3] [i_3 - 1] [i_2]) : var_11))) ? -5 : (min(var_3, var_4)))) : (min(1332369079, (((!(arr_1 [4] [13]))))))));
                var_21 -= var_13;
            }
        }
    }
    #pragma endscop
}
