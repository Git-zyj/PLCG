/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((1992557696 ? ((var_6 ^ (var_8 >= var_5))) : (((((var_2 ? var_13 : var_7))) ? (~var_0) : (18140249356424154994 <= 3166322514)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 *= (arr_3 [15]);
                    var_20 &= (min((min((min((arr_6 [i_0] [i_0] [16]), 1)), (~1992557711))), ((((2047 - 1992557696) * (arr_1 [i_0]))))));
                    var_21 &= max((arr_4 [i_1] [i_1] [i_1 + 2]), (min(((min(43382, 1))), (min((arr_5 [i_1]), (arr_6 [i_0] [i_0] [i_0]))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (((((((22142 < 20803) ? (arr_0 [i_3] [i_0 + 1]) : (((306494717285396621 ? 4294967284 : 43414)))))) ? (((-(min(var_1, (arr_2 [i_0] [i_1] [i_2])))))) : (((((~(arr_6 [i_0] [8] [i_2])))) ? ((531109990 ? var_10 : (arr_6 [i_0] [i_0 + 1] [i_2]))) : (arr_0 [i_1] [i_1]))))))));
                        var_23 &= ((3650346010104423397 ? (min(var_15, ((min((arr_1 [i_0]), 1128644780))))) : (((var_14 | (arr_2 [i_1] [i_3] [i_1 + 3]))))));
                        var_24 = (max(var_24, (((((((arr_1 [i_1 + 3]) ? (arr_0 [i_3] [i_0 + 2]) : (arr_9 [i_3] [i_0 + 2])))) ? (((((var_7 / (arr_6 [i_1] [12] [i_1])))) ? (((arr_0 [i_1] [i_1]) ? (arr_2 [i_1] [i_2] [i_2]) : (arr_2 [1] [i_3] [i_2]))) : (((max(32757, -59)))))) : ((((arr_7 [i_2] [i_1 + 2] [i_1 + 3] [i_1 + 3]) | (arr_7 [i_3] [i_2] [i_1 + 3] [i_3])))))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_25 *= (arr_2 [16] [i_2] [i_2]);
                        var_26 = (max(var_26, (arr_11 [i_0] [i_0 + 1] [i_1 + 1])));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_27 &= min((min((min((arr_15 [i_0] [i_1] [i_1] [i_1] [6] [i_5 - 1]), (arr_0 [i_1] [i_5]))), var_12)), ((min(19668, -9036))));
                        var_28 |= (((((((var_16 | (arr_0 [i_2] [i_2])))) ? (4095 >= 22121) : ((var_7 ? (arr_17 [i_2] [i_2] [i_2] [10] [i_2]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))))) ? (min(13, 0)) : (((max((arr_13 [i_2] [6] [16] [i_2] [i_2] [i_5 + 1]), (arr_13 [i_2] [i_0 + 1] [i_1 + 2] [i_2] [14] [i_5 - 1]))))));
                        var_29 += (max(((((min(1128644784, (arr_11 [i_0] [i_2] [i_5]))) >= (((((arr_4 [6] [1] [i_2]) < (arr_7 [i_2] [i_1 - 4] [i_1 - 4] [i_2])))))))), (min(-2475, 3166322501))));
                        var_30 &= ((max(((((arr_17 [i_0] [i_1] [i_2] [i_2] [i_5]) < (arr_6 [i_0 + 1] [i_1] [i_5])))), (arr_16 [i_2] [i_5 - 1]))));
                        var_31 &= ((((min(1, -996210153783480282))) ? 1 : 6286768515113842826));
                    }
                }
            }
        }
    }
    #pragma endscop
}
