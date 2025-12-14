/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = (((((!3201745781035680996) ? (((min(var_2, (arr_15 [i_0] [9] [i_2]))))) : (arr_8 [i_0] [i_0 + 2] [i_0 + 2]))) << ((((-(min((arr_15 [i_0] [4] [i_0]), -9007936047494772354)))) - 9007936047494772337))));
                            var_16 = (min((arr_9 [i_0] [9] [i_0]), (arr_3 [8])));
                            var_17 = ((((((arr_8 [i_1] [i_2 - 1] [i_1]) ? 1573383865812275842 : (arr_8 [i_3] [i_2 - 1] [i_2 - 1])))) ? ((((arr_12 [i_1] [i_2 + 1] [i_2 + 2] [i_2] [i_3]) ? (max(var_9, 1035178839791603314)) : (arr_10 [i_0 - 3] [i_1] [i_2 - 1])))) : (((((-(arr_1 [i_1] [i_2 + 1])))) ? (arr_14 [2] [i_1]) : ((max(var_12, var_3)))))));
                        }
                    }
                }
                var_18 = min(((~(arr_12 [i_0 + 1] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 3]))), (min((((var_2 ? var_12 : 1))), (max((arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_0 + 1]), (arr_12 [i_1] [i_1] [i_1] [i_0] [11]))))));
                arr_16 [i_0 - 2] [i_0 - 1] [2] = (max((((!9007936047494772349) ? (min((arr_0 [i_1]), (arr_8 [i_0] [i_1] [i_1]))) : (((max((arr_7 [i_0]), -82)))))), (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1])));
                arr_17 [i_0] [i_1] &= (arr_12 [i_1] [i_1] [i_0] [i_0] [i_0 - 1]);
            }
        }
    }
    var_19 |= (var_10 ? (((~((var_9 ? var_9 : var_9))))) : (min((min(8883841015186458637, 1)), -var_13)));
    var_20 &= (~var_14);
    #pragma endscop
}
