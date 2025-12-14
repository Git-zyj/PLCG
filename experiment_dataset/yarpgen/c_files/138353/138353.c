/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    var_17 = (((max(var_11, 2633)) < ((max(3512951030, 4095)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [19] = (max(2613, (max(var_3, var_0))));
        arr_5 [i_0] [i_0] = -6431;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max((((((31000 ? var_8 : var_14)) < -2613))), 782016266));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] = ((!(((-12964 ? (-6431 / var_1) : 209)))));
                        var_19 = ((((var_0 - ((min(1, -2633))))) != ((329356596 ? 6421 : 14518))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_20 = var_7;
                        var_21 = (var_9 - var_6);
                    }
                    var_22 = (16649183347867617172 ? (min(1564584138, 4294967291)) : 12964);
                    arr_17 [i_0] [i_0] [i_1] [i_0] = (min((((34161 ? (var_6 + 1349) : 2613))), (max(((max(3512951016, 7))), ((37236 ? var_8 : 0))))));
                }
            }
        }
        arr_18 [19] [i_0] = 15;
        var_23 = 4;
    }
    #pragma endscop
}
