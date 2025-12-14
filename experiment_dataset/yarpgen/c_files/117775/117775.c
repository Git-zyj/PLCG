/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_16 -= ((~(arr_0 [i_0 + 3] [1])));
        var_17 -= (max((((arr_0 [i_0 + 3] [8]) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 3] [8]))), (!7)));
        var_18 |= 13369137956342063936;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_19 += ((+(max((arr_0 [i_1] [0]), (~0)))));
        var_20 = ((~(arr_2 [i_1])));
        var_21 += ((((max((((arr_0 [i_1 + 2] [6]) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (arr_0 [i_1] [8])))) ? (((((arr_3 [i_1]) ? 2000997002 : 17296481966932529683)) | (arr_0 [i_1] [4]))) : (max((arr_3 [i_1]), (max(14558291010879364915, (arr_3 [i_1])))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_22 = (max(1, 6108036254009764959));
                var_23 |= 35184372088831;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = (((max(((1971063153 ? 5077606117367487679 : var_12)), ((var_8 ? 1150262106777021933 : (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1] [i_1]))))) / (max(var_15, (max(var_10, (arr_11 [i_1] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 1])))))));
                            arr_16 [i_3] [i_3] [i_3 - 2] [i_4 + 2] [i_5] = (max(0, (max(1, (((arr_0 [i_1] [i_3]) ? 536870911 : 8363844439449568943))))));
                            var_24 -= ((max((arr_13 [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_4 - 1] [i_1] [i_4]), var_0)) - (!8363844439449568943));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_25 = (min(var_25, 536870923));
                            var_26 = (max((arr_17 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 2]), ((-(arr_18 [i_3 - 3] [i_3 - 2] [i_3 - 1] [i_3 - 3])))));
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_27 = (((arr_7 [i_1 + 2] [i_2]) ? 1 : (((arr_20 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 2]) ? (arr_7 [i_1 + 3] [i_1 + 2]) : (arr_7 [i_2] [i_2])))));
                var_28 = (((arr_21 [i_1] [i_2]) ? (arr_2 [i_2]) : (max(14558291010879364915, (arr_25 [i_1] [i_8 + 1] [i_1 + 3])))));
                var_29 = (((((((((arr_6 [i_8] [i_8] [i_8]) ? var_3 : 6566781807804091130))) ? var_11 : ((var_1 ? var_13 : var_0))))) ? (max(var_1, (arr_1 [i_1 + 2]))) : var_8));
            }
            for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((max(((-(arr_29 [i_1] [i_1] [i_2] [i_1]))), ((((arr_14 [i_1] [i_2]) ? (arr_3 [i_2]) : (arr_13 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 3]))))))))));
                            var_31 = ((!((max((max(var_14, var_3)), ((-15603 ? (arr_32 [i_1 - 1] [i_2] [i_1] [i_10]) : var_14)))))));
                        }
                    }
                }
                arr_33 [i_1] [i_1 + 3] [i_1 + 3] [i_2] |= ((max(((27035 ? var_5 : var_10)), (max(var_8, (arr_30 [i_2] [i_2] [i_2] [i_2]))))));
            }
            arr_34 [i_1] [i_2] = (((!var_5) ? ((~(arr_3 [i_1]))) : (max((arr_31 [i_1] [i_2] [i_2] [i_1] [i_1 - 1] [i_1]), (arr_3 [i_1 - 1])))));
        }
        var_32 = ((((((arr_11 [i_1 + 3] [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_18 [i_1] [i_1 + 1] [i_1] [i_1 + 3]) : (arr_8 [i_1 + 3])))) + (((arr_25 [i_1] [i_1 - 1] [i_1 + 2]) ? (arr_27 [i_1 + 3] [i_1 + 2] [4] [i_1 + 3]) : (arr_18 [i_1] [i_1] [i_1 - 1] [i_1])))));
    }
    var_33 = (min(var_33, var_0));
    var_34 |= ((((max(var_12, var_7))) || ((!(((12338707819699786656 ? 12363712761060281275 : 6566781807804091140)))))));
    #pragma endscop
}
