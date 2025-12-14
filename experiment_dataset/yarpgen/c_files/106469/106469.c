/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= min(4294967295, ((((min(-848369294, var_14)) < var_12))));
    var_20 = (~848369294);
    var_21 = (max(var_21, (((((min(var_17, -848369318)))) < (-32767 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((((((min(-3436446948588298413, -32758))) ? 65535 : ((max(var_9, 10))))) < ((-(-9784 / -114)))));
                var_23 = (!3410609732);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_24 = (max(var_24, 329288354));
                    var_25 = (max(var_25, ((((1 ? ((1 >> (32749 - 32748)) : (-32767 - 1))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_26 = (max(var_26, 0));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] = (9642639472532980743 % 8804104601176570857);
                        arr_13 [i_1] [i_1] [i_3] = 1073740800;
                        var_27 = (min(var_27, (17897459942647412557 < var_4)));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_5] = (var_16 ? (0 < 32767) : var_0);
                        arr_17 [i_0] [i_1] [i_3] [i_1] = (1 != -1328370499217710022);
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] = 2097152;
                        var_28 = (max(var_28, (((1 >> (var_17 + 1408253652))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_29 = 0;
                        var_30 = (-8840673976909917712 % 1);
                        arr_21 [i_0] [i_0] [i_1] [i_0] = -var_0;
                        arr_22 [i_1] [i_1] = (~-24830);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_3] [i_1] [0] = (-8335 % 33);
                        arr_26 [i_3] [i_3] [i_1] [i_3] [i_3] [i_7] &= -27275;
                    }
                }
            }
        }
    }
    #pragma endscop
}
