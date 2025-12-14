/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_18, var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 |= (max(var_6, (min(var_3, var_16))));
        var_21 = (min(var_21, ((max(((min(var_17, var_18))), var_14)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_22 = (max(14253217179289274728, 1));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_23 = (max((max(1, -1)), var_6));
                    var_24 &= var_10;
                    var_25 = (max(var_25, (max(((min(var_10, var_7))), (max(var_2, var_5))))));
                }
                for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_26 = (min(var_4, (min(var_11, var_17))));
                    var_27 = var_12;
                    var_28 = (min((max(var_12, var_13)), ((max(var_7, var_0)))));
                    var_29 = var_10;
                    var_30 = (min(((max(var_7, var_10))), var_16));
                }
                for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_31 = var_15;
                    var_32 = var_16;
                    var_33 |= var_11;
                }
            }
            var_34 = (max(((min(var_10, var_15))), var_4));
            var_35 = var_12;
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_36 = max(((max(var_10, var_9))), var_14);
            var_37 |= var_13;
            var_38 = var_0;
            var_39 = (max(((min(var_3, var_10))), (min(var_1, var_15))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_40 = var_12;
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        var_41 = (min(var_14, ((min(var_4, (max(var_6, var_0)))))));
                        var_42 = (max((max(var_14, var_3)), ((max(var_15, var_7)))));
                        var_43 = var_2;
                    }
                }
            }
            var_44 = (max(var_44, ((max((max(-1, -7)), var_16)))));
        }
        var_45 = min((min(240977926, 1)), var_18);
    }
    var_46 = (min(var_46, (min(var_8, (min(var_0, var_11))))));
    var_47 &= (max(var_16, var_18));
    #pragma endscop
}
