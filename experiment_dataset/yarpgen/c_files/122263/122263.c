/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] = ((1 ? 1149636732 : (((25540 ? 2101209582 : 15427486670907397792)))));
                            var_20 = ((min((max(var_2, -623959194)), -2101209564)) - ((((var_4 ? (arr_2 [i_1] [i_1]) : -1)) | var_4)));
                            arr_9 [i_0] [i_1] [i_1] [i_3] = (((max((arr_6 [i_0] [i_1] [i_1] [i_3 - 1]), 623959194))) ? (((arr_2 [i_1] [i_3]) | (arr_7 [i_0] [i_1] [i_2 - 1] [i_3 + 1]))) : (min(1772121991, (arr_6 [i_1] [0] [i_1] [i_1]))));
                        }
                    }
                }
                arr_10 [i_1] = (min(((208 / ((13272232563750754871 ? -809124030175856227 : 18446744073709551615)))), 4095));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 = 1;
                            var_22 = (min(var_22, ((min(32784, ((-(min((arr_12 [i_0] [i_0]), (arr_11 [i_0]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_1] = 776887042;
                            var_23 = ((var_18 + (arr_18 [i_0] [i_1] [i_6] [i_7])));
                            arr_25 [i_6] [i_1] = ((0 ? 0 : 8388607));
                            var_24 = 508;
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((min((min(-1, 1)), ((min(var_18, 2757903764)))))) ? -31327 : ((var_13 ? 0 : var_15))));
    var_26 = (max(var_26, var_14));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                var_27 = min((max((arr_19 [i_8] [i_8] [i_9]), (((var_9 || (arr_22 [15] [i_8] [i_8] [i_9] [16])))))), (arr_1 [19]));
                var_28 = 1095622108;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_38 [i_8] = (((((((min((arr_11 [i_11 + 3]), 61))) ? (arr_28 [i_9 - 2] [i_10 - 1]) : (max((arr_20 [1] [i_9] [i_11]), 0))))) ? ((~((1 ? (arr_14 [i_8] [16] [i_10 + 1] [i_8]) : var_14)))) : ((((!(arr_0 [i_8])))))));
                            var_29 -= (arr_7 [i_11] [i_10] [i_9 - 2] [i_8]);
                            var_30 = (min(var_30, ((((((-(arr_27 [i_9 + 2])))) == ((~((8037880289111512311 ? (arr_17 [i_8] [20] [i_10] [i_10] [i_11]) : 1142117297)))))))));
                            var_31 = (min(16263411167287861370, 1));
                            arr_39 [i_8] = ((((min(((3199345187 >> (arr_36 [i_8] [i_9 + 1]))), (1 + 1)))) ? (min((arr_11 [i_9 - 1]), -2018379831)) : ((((min((arr_32 [5] [i_9 + 1] [11]), -1)))))));
                        }
                    }
                }
                arr_40 [i_8] = 1525250748076254119;
            }
        }
    }
    #pragma endscop
}
