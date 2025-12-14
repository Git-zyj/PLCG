/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? var_2 : (max((36831 + var_16), -var_4))));
    var_18 = (max(var_18, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 |= var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_20 = (arr_12 [i_0] [i_0]);
                                var_21 = 65535;
                                var_22 -= ((((((112 + var_8) >> (-var_16 + 24859)))) && ((min((arr_0 [i_1] [i_4 + 1]), (((var_6 == (arr_12 [i_2] [i_3])))))))));
                                var_23 -= (((!1) ? (((arr_5 [i_3] [i_4 - 1]) ? ((var_10 ? (arr_4 [i_0]) : (arr_3 [i_3]))) : (arr_7 [i_3] [i_3] [4] [i_3]))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                            }
                            for (int i_5 = 3; i_5 < 17;i_5 += 1)
                            {
                                var_24 = (!var_13);
                                var_25 = (min(var_25, (arr_10 [i_5 - 2] [i_5 - 2])));
                            }
                            var_26 = (min((((-var_2 != (((arr_15 [i_0]) / (arr_12 [i_3] [i_0])))))), (arr_9 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_27 = ((((((!(arr_17 [8] [8] [i_7]))) ? ((32 + (arr_17 [i_0] [i_6] [i_6]))) : (arr_2 [i_7 + 2]))) % var_5));
                            var_28 ^= (1 + 1);
                            var_29 &= (~var_1);
                            var_30 = (max(var_2, ((-(arr_12 [i_7 + 2] [i_0])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    var_31 = var_9;
                    var_32 = (arr_6 [i_8] [i_0] [i_0]);
                    var_33 = (max(var_33, (arr_10 [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_34 = (arr_12 [i_0] [i_0]);
                    var_35 = var_0;
                    var_36 = (max(var_36, (((-14988 && (-32767 - 1))))));
                    var_37 = (i_0 % 2 == zero) ? (((((var_6 << (((arr_5 [i_0] [i_0]) - 92)))) * (((-(arr_1 [i_0] [i_1]))))))) : (((((var_6 << (((((arr_5 [i_0] [i_0]) - 92)) - 28)))) * (((-(arr_1 [i_0] [i_1])))))));
                }
            }
        }
    }
    var_38 = (max(var_38, var_3));
    #pragma endscop
}
