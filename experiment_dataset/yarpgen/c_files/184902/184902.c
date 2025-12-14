/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? var_11 : (((~-32756) ? -94 : var_2))));
    var_13 -= (((!var_3) << (var_6 - 568595475)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 ^= ((((min(((((arr_1 [i_4]) ? (arr_7 [i_0] [i_0 - 3] [10] [i_3] [i_4]) : (arr_8 [i_0] [i_1] [6] [i_3])))), var_2))) ? (((((max((arr_9 [i_0 - 2] [i_1]), (arr_9 [i_0] [i_0])))) || (arr_10 [i_0] [i_2] [i_3])))) : (((((1570839684326392583 ? 3 : (arr_1 [i_0])))) ? (arr_0 [i_4]) : ((max(32740, var_1)))))));
                                var_15 = (max(var_15, ((max((min((arr_9 [i_0 - 1] [i_0 - 3]), (((1789011687179012149 ? 1072583879 : (arr_7 [i_0] [i_0] [1] [i_2] [i_4])))))), ((((arr_2 [i_3]) ? ((var_11 ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (arr_0 [i_1]))) : (((arr_3 [i_0] [8] [6]) ? 827215482 : 1600107194))))))))));
                                var_16 = (min(var_16, ((min((((arr_7 [i_1] [i_0 + 1] [12] [i_0 - 3] [i_0 - 3]) ? (0 < var_6) : (arr_8 [i_0] [0] [4] [i_0 - 1]))), (arr_0 [i_0]))))));
                                var_17 = (((((max((arr_1 [i_0]), var_3))) ? (arr_2 [i_1]) : -1600107194)));
                            }
                        }
                    }
                    var_18 = ((-1600107194 ? (arr_3 [i_0] [i_1] [12]) : ((((((arr_2 [4]) ? var_9 : (arr_9 [3] [i_0])))) ? ((-(arr_10 [i_0] [i_0] [i_0]))) : (((max(113, 1))))))));
                    var_19 = 167;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = ((((((min(0, 1)) != var_11))) < (((((var_2 * (arr_12 [i_5] [i_5])))) ? var_6 : ((max(var_11, var_8)))))));
        var_20 = (arr_12 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 3; i_7 < 24;i_7 += 1)
        {
            arr_21 [i_7] = (((((1 ? 1789011687179012149 : 17179869183))) ? var_2 : (arr_12 [i_7 - 2] [i_7 - 3])));
            var_21 = ((1 ? -1 : -102));
        }
        var_22 = ((((((arr_12 [i_6] [i_6]) ^ (((arr_12 [i_6] [1]) ? 9877139112130330412 : 1600107194))))) ? (arr_16 [i_6]) : ((max(1, (-32767 - 1))))));
        var_23 += (max(((1 ? var_10 : ((var_11 ? var_1 : (arr_13 [6]))))), (arr_11 [2])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                {
                    var_24 += (((!((max(4008038954, (arr_19 [9] [i_9 + 2])))))));
                    arr_27 [i_9] [i_8] [i_9] = ((((((arr_26 [i_6] [0] [i_9]) ? 526559809 : -113))) ? 2519846281 : -32756));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_25 = (max((min((((32759 ? (arr_13 [i_9]) : (arr_12 [i_6] [i_6])))), (arr_18 [i_9]))), ((max((max(3938913710, (arr_17 [1] [1]))), ((((arr_25 [i_9] [i_9] [i_6] [i_10]) ? (arr_17 [i_8] [i_8]) : -94))))))));
                                arr_33 [i_9] [i_8] [i_8] [i_8] [i_8] = (((var_6 ? (arr_13 [i_9]) : (arr_19 [i_9] [i_10]))));
                                arr_34 [i_6] [i_8] [i_9] = (max(((-(arr_31 [i_9 - 1] [i_11] [i_11] [i_11 + 3] [i_11]))), ((var_1 ? var_3 : 113))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 -= var_1;
    #pragma endscop
}
