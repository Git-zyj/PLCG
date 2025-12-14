/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1086 | 1098) % ((min(var_1, 64449))))) % ((((min(var_8, var_2))) - var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 *= (((arr_2 [i_0]) ^ (min((((-(arr_9 [10] [i_2] [i_2] [i_2])))), (((arr_3 [i_0]) ? (arr_10 [i_0] [i_0] [i_2] [i_0]) : (arr_8 [i_0] [i_1] [i_2 - 1] [i_3])))))));
                            var_16 = ((1098 ? (((3855019487 >> (((max((arr_5 [i_0]), var_3)) - 2300732851))))) : ((var_6 ? (~3600577695902451368) : ((((arr_1 [i_0]) ? var_2 : 3855019487)))))));
                            var_17 &= (((((arr_8 [1] [i_1] [i_1] [9]) / (arr_3 [i_0]))) <= (((arr_8 [i_1] [i_1] [5] [5]) ? var_12 : (arr_8 [i_0] [i_1] [i_0] [6])))));
                        }
                    }
                }
                var_18 = (((((((934181594 ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_1]))) - (((arr_7 [22] [22] [i_0] [i_1]) ? (arr_10 [i_0] [i_1] [13] [18]) : var_1))))) ? (((((32767 ? (arr_4 [i_0]) : (arr_5 [i_1])))) ? (57798 / -32759) : (((arr_8 [i_0] [i_0] [11] [20]) + var_4)))) : ((((3647893559 / -7825) << ((((arr_5 [18]) == (arr_4 [12])))))))));
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
