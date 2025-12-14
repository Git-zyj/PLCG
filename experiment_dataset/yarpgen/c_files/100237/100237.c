/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((~((-(arr_2 [i_1])))));

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_21 = ((!(arr_8 [i_0])));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] [0] = 94;
                            }
                            arr_15 [i_0 + 3] [i_0 + 3] [i_1] [i_3] [i_0] [i_1] = -27092;
                        }
                    }
                }
                var_22 |= 65535;
            }
        }
    }
    var_23 = (((min(((18446744073709551600 ? 190 : 9151314442816847872)), (-22839 & 1558414101))) | (((~(~1))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                var_24 = ((((~((var_17 ? 9295429630892703746 : var_18)))) - var_1));
                arr_21 [i_5] = (((((~(min(9223372036854775807, 1))))) ? (((var_19 / 7340032) << (((65 * 246) - 15978)))) : (((~((~(arr_18 [i_5]))))))));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_25 = (min(var_25, ((max((!var_13), ((var_6 ? ((15 ? (arr_11 [i_6]) : (arr_0 [i_6 - 2]))) : ((((arr_0 [i_5 + 1]) ? 30 : 1))))))))));
                    var_26 += (((((1 <= ((var_7 ? (arr_24 [i_6] [i_6] [i_6]) : 126)))))) & ((9151314442816847875 ? (min(13107, 9151314442816847857)) : 8388607)));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_27 = (12051910252657071667 < -8388624);
                        var_28 |= min((((~((min((arr_3 [i_5] [i_5] [i_5]), (arr_9 [5] [i_6 - 2] [1] [i_6 - 2]))))))), (((41508 == 352885784) ? (min(var_0, -8388607)) : 1)));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_29 = ((-((((arr_26 [i_5] [15] [i_6 + 1]) || var_14)))));
                        var_30 = (66 << 0);
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_31 = ((-(((1 < (~12))))));
                        arr_31 [i_5] [17] [i_7] [i_10] = (((((-3616334262614723324 & ((((1 >= (arr_17 [i_7])))))))) && ((((255 % 11526) & (((var_2 || (arr_27 [3] [i_6 - 1] [i_7] [i_5])))))))));
                        var_32 = (((((((min(-1819821799, (arr_2 [i_10]))) <= (arr_24 [i_5] [17] [17]))))) != (min(((-1642750047 ? 2147483647 : 271871218981907481)), (arr_24 [i_5] [5] [i_6 - 1])))));
                    }
                }
                var_33 &= (min(1, ((((49152 ? -1675357087 : -1416483919)) != ((1 >> (-46 + 54)))))));
            }
        }
    }
    var_34 = ((26316 ? 1642750067 : 1));
    #pragma endscop
}
