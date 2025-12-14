/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 65535;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 ^= ((~((min(var_10, (var_12 <= 65518))))));
            var_21 &= (arr_4 [4] [i_1]);
        }

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_22 = (arr_3 [i_0 + 2]);
            var_23 += (20 % ((max((-2147483647 - 1), 48534))));
        }
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3] [i_3 - 1] = ((((min((arr_10 [i_3]), var_0))) >> (-2147483638 + 2147483645)));
        arr_14 [i_3] = ((31 && (((~1) && ((min(10114, 1)))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 = var_19;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 *= 1;
                        var_26 ^= (min((((arr_23 [i_4] [6] [i_4] [6]) <= (var_11 >= 1330597798722116389))), (arr_11 [i_7])));
                    }
                    var_27 = (max(var_27, ((((((!((min((arr_5 [i_4]), (arr_4 [i_4] [i_4]))))))) * (!var_1))))));
                }
            }
        }
        var_28 = (((min((~1), (!1))) + (((!((max(var_6, var_17))))))));
        var_29 = (((min((arr_21 [i_4] [i_4] [i_4]), var_13))));
        var_30 = (arr_23 [i_4] [i_4] [i_4] [i_4]);
    }
    var_31 = ((!(((-(!var_9))))));
    var_32 = (min(((~((min(var_18, 0))))), (~0)));
    #pragma endscop
}
