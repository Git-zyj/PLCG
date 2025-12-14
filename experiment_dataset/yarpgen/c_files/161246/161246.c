/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, (((-(max(var_13, -655846454907456881)))))));
        var_18 = (max(var_18, ((((242 ? 18 : -17))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_19 = ((-(var_8 ^ var_2)));
                            var_20 = (min(var_20, var_7));
                        }
                    }
                }
            }
            var_21 = (13887126238510821363 && 13887126238510821357);
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        var_22 = ((!(((var_13 ? ((13887126238510821357 ? var_2 : 13887126238510821379)) : 120)))));

                        for (int i_8 = 4; i_8 < 14;i_8 += 1)
                        {
                            var_23 += ((((-6367647919234545575 ? 6367647919234545575 : 21319)) & (!13887126238510821356)));
                            arr_25 [i_0] [i_8] [i_0] [i_7 - 2] [i_6] &= (((((var_1 ? var_16 : 4559617835198730258) + var_5))));
                            var_24 = ((min(-27324, -6367647919234545575)));
                        }

                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, var_11));
                            var_26 = (min(var_26, (((((((!27021597764222976) < ((888065777 ? 27318 : var_1))))) << (var_11 - var_11))))));
                            var_27 = 274877906943;
                            arr_28 [i_9] [i_9] [i_5] [i_0] [i_0] = (19 && 18600);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_28 -= var_7;
                            var_29 = (min(var_29, ((((274877906943 ? -1 : -6367647919234545575))))));
                            var_30 = ((((max(var_15, var_9))) ? ((25095 ? 1 : (max(var_6, var_3)))) : ((var_12 ? var_9 : var_6))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_31 = (var_5 / var_13);
        var_32 = ((var_6 ? 3406901497 : var_2));
        var_33 = (var_4 <= -12731);
        var_34 *= -25095;
    }
    var_35 = -var_0;
    #pragma endscop
}
