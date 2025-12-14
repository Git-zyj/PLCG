/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 -= (min(((~(max(255, -242)))), (((212317442047594443 >= (arr_0 [i_0]))))));
        arr_2 [i_0] &= arr_0 [i_0];
        var_19 -= (((((-(arr_1 [i_0])))) && -267));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = 34843;
                    var_21 = 34844;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = (((max((arr_3 [i_3]), 20)) / -var_0));
        arr_11 [i_3] [i_3] = var_13;
        var_22 |= ((~((((241 ? 254 : -97)) >> (((max(9224986388874193600, var_15)) - 9224986388874193577))))));
        arr_12 [i_3] [i_3] = (min(((69 ? 27 : 16020)), var_5));
        var_23 = -89;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_24 = ((~(((min(var_2, 1)) | 2202264518))));

        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_21 [i_4] [i_5] [1] [i_6] = ((-(((!(arr_20 [i_4] [i_4] [i_5 + 1]))))));
                var_25 = (min(((30241 ? var_15 : (min((arr_7 [i_4] [i_4] [0] [i_4]), 0)))), ((((arr_6 [i_4] [i_4] [i_4] [i_4]) >= ((var_15 ? var_3 : 731274156)))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_26 = (~3018589521);
                            var_27 = (arr_13 [i_8] [i_5]);
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] |= (!87);
                            arr_30 [i_4] [i_5] [i_6] [i_8] [i_8] [i_8] = ((107 ? var_8 : 2202264515));
                        }
                    }
                }
                var_28 = (((arr_27 [i_4] [5] [i_5 - 1] [15] [i_5]) < ((-282545987 ? 63046 : 4294967278))));
            }
            var_29 = ((((11952 ? (arr_28 [i_5 + 1] [i_5] [i_5 - 1]) : 0)) + ((min(97, 1)))));
            var_30 = 26580;
            var_31 = var_3;
            var_32 = (min(var_32, (((207 && ((min((arr_23 [i_5 + 1] [i_4] [i_4] [i_4]), (arr_23 [i_5 - 1] [i_5] [i_4] [i_5 - 1])))))))));
        }
    }
    var_33 |= var_8;
    #pragma endscop
}
