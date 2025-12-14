/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((~var_0) ^ (!-1)))), (max((var_5 ^ var_7), (-1663421491 + 745950555)))));
    var_20 = ((var_9 | (var_3 | var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] |= (((-745950557 ? (max(-3968288960383155307, 412744194)) : (max(0, var_3)))));
                arr_8 [i_1] [i_1] = ((745950558 != (((min(var_1, 0)) - (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 |= ((745950558 - ((((arr_13 [i_0] [i_1] [i_2] [i_3]) <= 3)))));
                            var_22 += ((((((max((arr_12 [i_0] [i_1] [i_2] [i_3]), var_1))))) <= (arr_10 [i_3])));
                            var_23 = ((!var_7) ? (65524 != -32) : ((745950558 ? (((arr_5 [i_0] [i_1]) ^ var_0)) : var_12)));
                            var_24 *= ((!((!(arr_6 [i_0] [i_1] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    var_25 |= ((-((~(~75)))));
    #pragma endscop
}
