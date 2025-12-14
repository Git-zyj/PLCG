/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((4294967295 / 13505819032673717377) ? -var_2 : (((var_5 / var_1) / ((var_11 ? var_1 : var_1))))));
                arr_8 [i_0] [i_1] = ((-((var_3 ? -88 : (arr_1 [3] [i_1])))));
                arr_9 [i_1] = ((((min((((var_11 ? 83 : 163))), (((arr_5 [i_0] [i_1]) * var_4))))) ? (arr_3 [i_0]) : ((var_10 / (1 + -122)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_12 += (arr_0 [i_0]);
                    var_13 = (min(var_13, (arr_11 [i_0])));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_14 = ((1 ^ ((min(3599595826, 71)))));
                    var_15 = (((((arr_1 [i_0] [i_3]) && (arr_1 [i_0] [i_3]))) ? (var_1 || var_1) : (((!-3267929612299924516) ? (163 || -127) : (!-6829730112810875294)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 += ((((!(var_7 == 185))) ? (((1923855198 != 8795824586752) ? ((8625782196082974755 ? 18446735277884964851 : var_1)) : (((-863081808 ? 32 : 98))))) : (max((((arr_15 [16] [4] [i_5] [i_5] [i_5] [i_5]) ? (arr_10 [i_4] [12] [i_1] [i_0]) : 8795824586748)), (~8160)))));
                                var_17 = (((!211) * ((max((arr_15 [i_0] [i_1] [i_3] [i_0] [i_0] [i_1]), (arr_15 [i_0] [8] [i_3] [i_3] [i_3] [i_3]))))));
                                arr_21 [i_0] [i_0] [i_0] [i_3] [12] [i_0] [i_0] = ((((max(var_11, var_8))) ? 863081807 : ((((arr_0 [i_5]) ? (arr_0 [i_0]) : var_2)))));
                            }
                        }
                    }
                    var_18 -= var_6;
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_19 = (max(1, 1));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_31 [i_6] [i_7] [0] [1] [i_8] [i_7] [i_1] = (((((arr_1 [i_0] [i_0]) ? (arr_27 [i_0] [i_6] [i_6] [i_6] [i_8] [10]) : -var_7)) | (((~((var_8 ? (arr_16 [14] [14]) : (arr_14 [i_0] [i_6] [2] [i_0]))))))));
                                var_20 = (-2560733469204040246 * 1);
                                var_21 = (((!(((-8036447727187169779 ? 8795824586765 : 6306808047256772262))))));
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = ((var_11 ? var_3 : var_2));
                                var_22 = (((((8036447727187169758 ? var_5 : 4294967295))) ? var_2 : 2));
                            }
                        }
                    }
                    var_23 = (max(((var_2 & (-86 - 18446735277884964851))), (arr_10 [i_0] [i_0] [i_6] [i_6])));
                }
            }
        }
    }
    var_24 *= var_4;
    #pragma endscop
}
