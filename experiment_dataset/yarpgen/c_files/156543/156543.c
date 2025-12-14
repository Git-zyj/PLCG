/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, var_19));
        var_22 = arr_1 [0] [i_0];
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_23 = 9;
        var_24 = (min(-10, ((((229 >= 65) ? (arr_1 [7] [2]) : (~0))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_25 = (min(var_25, (((~-6491197981010249838) ? 16345982590706828598 : (arr_9 [6] [1] [5])))));
                        var_26 = ((6491197981010249855 ? var_9 : (((((((arr_0 [i_1] [i_1]) ? -6491197981010249862 : var_6))) || ((((-2147483647 - 1) ? (arr_10 [4] [i_2 - 2] [5] [10]) : var_2))))))));
                        var_27 = (-82 ? ((-(max(-46, 6491197981010249861)))) : ((((32759 << (((-1 + 24) - 11)))))));
                    }
                }
            }
        }
        var_28 = ((((((((((-46 + 2147483647) << (846346245 - 846346245)))) ? -6491197981010249861 : (max(-6491197981010249862, (arr_10 [7] [i_1] [i_1] [i_1]))))) + 9223372036854775807)) << (((-6491197981010249865 + 6491197981010249903) - 37))));
        var_29 = ((-(arr_11 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_30 = (((arr_8 [i_5] [i_6] [i_5]) + ((-6491197981010249875 + (arr_11 [1] [i_6] [i_7] [9])))));
                    var_31 -= (((((arr_18 [i_7]) + 18027)) - -1143764838));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_32 = ((1687218258 << (var_17 - 2082458826674150248)));
                        var_33 = (~104);
                        var_34 = var_10;
                    }
                }
            }
        }
        var_35 = (((((var_2 | (arr_25 [8] [i_5] [i_5] [10])))) && -6491197981010249838));
        var_36 = (((arr_4 [i_5]) != (~var_1)));
    }
    #pragma endscop
}
