/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (arr_1 [11] [i_0]);
        arr_2 [i_0] = 13178818131495520221;
        arr_3 [i_0] = (((-7934298590610549237 ? ((((arr_0 [i_0]) < var_10))) : (1987073848 < 1))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = (224 ? 7409798824298625664 : -167178583);
        arr_6 [i_1 - 1] = -16055;
        arr_7 [i_1 - 1] [1] = ((224 ? 20489883 : 5267925942214031409));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_12 [i_2] = ((-(((1 & var_1) ? 147 : (arr_1 [i_1] [5])))));
            var_19 = (max(var_19, ((((arr_8 [14] [12]) ? ((var_7 ? var_15 : (((1 ? (arr_8 [i_1 - 1] [10]) : 1))))) : (~-11))))));
            var_20 ^= (arr_10 [16]);
            var_21 += ((225 ? (min((max((arr_4 [i_1 - 1]), var_3)), ((min(2, 3265526517))))) : var_13));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_22 = ((5267925942214031409 ? 17710 : 10890621845864030169));
                            var_23 = (-318733394 > 1);
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            var_24 = 11;
            arr_21 [i_1] [i_6] = (((arr_19 [i_6]) ^ ((var_6 + (arr_0 [i_1 - 1])))));
            var_25 = (min((!1), var_0));
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_24 [i_7] = (max(-17710, -var_1));
        arr_25 [i_7] = (max((arr_10 [i_7]), var_6));
    }
    var_26 = var_2;
    var_27 = var_0;
    #pragma endscop
}
