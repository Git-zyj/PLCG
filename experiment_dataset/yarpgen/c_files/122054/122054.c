/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((3116377459243848328 ? ((127 ? 16007818386721190526 : var_3)) : -3331582599786287360)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = -105;
                            var_15 = (((min(((((arr_5 [i_0]) ? (arr_3 [i_0] [0] [i_2]) : (arr_4 [9] [i_1])))), 3331582599786287352)) + ((((arr_10 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2]) ? (!1) : ((-3331582599786287360 ? 1 : -27)))))));
                            var_16 -= (((max(((6725794837948234776 ? var_2 : var_9)), (~29))) << ((((var_4 ? (-8590629736908247193 | var_11) : (((var_1 ? 1 : 1))))) + 8590629736908197933))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_17 = var_12;
                            var_18 = (min(var_18, 188));
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        arr_18 [i_6] = (max((((67 <= 1) ? (arr_17 [i_6 - 3]) : (1 * var_3))), ((((min(1, (arr_6 [6] [6] [i_6])))) ? (min(var_6, 10833971492920526271)) : (((min(83, 6211))))))));
        arr_19 [i_6 - 1] [i_6] = (min(var_12, (max((var_3 | var_12), var_11))));
    }
    var_19 ^= ((16556853586903705632 ? ((max(1, ((-32 ? var_6 : 34037))))) : var_3));
    #pragma endscop
}
