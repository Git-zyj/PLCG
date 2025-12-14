/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] |= (((arr_0 [i_2] [i_2]) ? 3035332477 : ((((var_3 > ((14672395916962649183 ? (arr_0 [i_1] [i_1 + 2]) : -107))))))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((((~((-27987 ? (arr_2 [i_2] [i_1] [i_0]) : (arr_0 [i_0] [i_0])))))) ? ((((8027 ? 28 : 11711356852489008091)) | (((arr_2 [i_0] [i_1] [i_2 - 1]) | var_9)))) : 56956);
                    arr_8 [i_1] = (min(((max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0] [i_0 + 1])))), (((!var_5) | ((((arr_4 [i_0] [i_1 + 3] [i_2]) > var_6)))))));
                    var_14 &= ((-0 || (((-((((arr_4 [i_0 + 1] [i_1] [i_2]) || (arr_5 [i_0])))))))));
                }
            }
        }
    }
    var_15 = ((var_7 ? var_12 : (var_13 == var_12)));
    var_16 += 1219280103;
    #pragma endscop
}
