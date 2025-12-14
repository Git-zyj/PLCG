/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((685416839 << (((max(var_13, 45855)) - 9566716421127621319))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((685416839 ^ (arr_1 [i_0 - 1] [i_0])))) ? ((52 ? -685416840 : 8036456242447667271)) : ((((arr_0 [i_0]) - (arr_1 [i_0 + 2] [i_0]))))));
                var_15 = ((!((min(1929353603192117951, var_3)))));
                var_16 = var_6;

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = (((~((3 >> (190519162 - 190519152))))));
                    arr_10 [i_0] = ((1 ? 2147483639 : 58720256));
                    var_17 = (max(var_17, (((var_8 ? ((var_12 ? 685416839 : (-32767 - 1))) : 190519162)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_18 = (-1327595686744021662 ? (((arr_3 [1]) ? -58720256 : var_0)) : 48826);
                    var_19 = 39722;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_20 = ((var_2 ? (arr_14 [1] [i_0 + 1] [1] [i_1]) : var_0));
                                arr_17 [i_0] [13] [7] [7] [0] [i_0] = (((-111 ? 1327595686744021675 : 49157)));
                                var_21 += (arr_15 [i_5] [i_0] [i_0] [i_0 + 1] [i_0] [12] [i_0 + 1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_0 + 1] [i_0 + 1] [1] &= (((arr_2 [i_0 + 2]) > -27733));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [15] [11] [15] [17] [i_0] = (var_5 != 9223372036854775807);
                                arr_26 [i_0 - 1] [6] [i_0] [i_0] = (((18446744073709551602 ? 17769 : -58720257)) | 25807);
                                var_22 = (~-24209);
                            }
                        }
                    }
                    var_23 |= (((arr_18 [20]) == (((arr_22 [i_0] [1] [i_0 + 1]) / 1332579249))));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_24 = ((8557902879701736783 ? -16586 : 2962388031));
                    var_25 = (!((max(var_11, 19742))));
                    arr_30 [i_0] [i_0] [10] [i_0] |= ((((((((-58720253 ? var_1 : 39722))) ? ((1327595686744021669 ? 25 : var_6)) : (min(var_2, var_7))))) ? (651895812 > var_5) : -var_3));
                }
            }
        }
    }
    var_26 = (max(var_26, var_6));
    #pragma endscop
}
