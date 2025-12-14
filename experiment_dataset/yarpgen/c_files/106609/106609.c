/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] = ((!(var_2 & 1152886320234758144)));
                    arr_10 [5] [i_2 - 1] = 4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] [12] [12] = -12;
                                var_19 = (((((((max(12, 20))) ? (!0) : 10))) ? (min(((4 ? 1771 : 7484735223386372231)), ((max(7, 2119493846))))) : (((((min((arr_3 [i_1] [i_1]), (arr_3 [i_2] [6])))) ? (arr_14 [i_0] [i_0] [i_0] [15] [8] [i_0]) : ((min((arr_1 [i_0]), 32))))))));
                                arr_18 [i_1] = ((-12 ? (arr_12 [i_0] [i_1] [i_3] [i_0] [i_3 - 1] [i_3 - 1]) : (((202 >= 242) * var_2))));
                            }
                        }
                    }
                    var_20 = 28;
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_21 = ((~(min(1, (arr_0 [i_5 - 1] [i_5])))));
                    arr_23 [9] [i_1] [8] = (!54);
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_6] [i_0] = ((((((max(0, 1)) ? (arr_8 [i_0] [i_0] [i_0]) : 1794))) ? (((-((min(1, 100)))))) : 1693708712));
                    var_22 ^= (max(((202 / (arr_20 [i_0] [i_1] [8] [i_0]))), (arr_4 [i_6] [i_1] [i_0])));
                }
                arr_27 [10] [i_1] [i_0] = ((-((~(21 - 0)))));
            }
        }
    }
    var_23 = 45890;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                var_24 = (max(var_24, (((!(1 % -2))))));
                var_25 = (((arr_32 [i_7 - 1]) ? (((arr_28 [i_7] [i_8]) ? -12 : (arr_29 [i_7]))) : var_2));
                arr_33 [i_8] [i_8] = (((((arr_32 [i_7 + 3]) ? 1771 : (arr_32 [i_7 + 3]))) - ((max((((!(arr_30 [i_8])))), var_4)))));
                var_26 = ((((min((arr_31 [i_7 + 1] [6] [i_7 + 3]), 1))) ? (((((arr_28 [i_7 - 1] [i_8 + 2]) > 3628561719)))) : (min(-32767, -915305366884836239))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_27 = ((~((-((0 ? 208 : 32))))));
                                arr_42 [i_8] [i_8] [22] [8] [i_7 + 2] = (min((min((4 - -114), 18446744073709551611)), (((19885 ? (arr_38 [i_7 + 2] [i_8] [i_9] [i_10] [i_11 + 4]) : 65520)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
