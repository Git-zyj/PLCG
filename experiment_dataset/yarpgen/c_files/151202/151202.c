/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_2;
    var_13 = ((~((var_0 ? var_9 : (var_10 - var_7)))));
    var_14 = ((-var_8 ? (((~(max(1141730274, var_7))))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = min((17968246556708825029 || 102), ((var_10 ? (16392 / 51) : (((arr_4 [i_0] [i_2] [i_0]) ? (arr_7 [10] [i_0] [i_2] [i_2] [i_2]) : (arr_9 [i_0] [i_0]))))));
                                var_15 *= ((((arr_11 [i_4] [i_1]) || (((18446744073709551615 ? 154 : var_0))))));
                                var_16 = (((((var_1 << (((!(arr_2 [12] [i_2] [i_0]))))))) ? (((arr_11 [i_0] [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [i_0]))) : ((min(16392, ((-32713 | (arr_7 [i_1] [i_0] [i_2] [i_3] [i_4]))))))));
                                arr_14 [i_0] [i_2] [3] [i_0] [i_4] = (max(((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > ((-66 | (arr_10 [i_4] [i_4] [i_0] [16] [i_4] [i_4])))))), (arr_12 [i_0] [i_1] [i_1] [15] [i_1] [i_1])));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((max((arr_8 [10] [4] [i_2] [i_2]), (((var_11 == (((arr_12 [10] [16] [i_1] [i_2] [i_2] [16]) ? var_1 : (arr_9 [4] [0])))))))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_18 = (((((((((arr_8 [i_5] [i_0] [i_0] [i_0]) ? 51897 : 0))) ? var_0 : (arr_1 [i_0] [i_0])))) ? ((((min((arr_0 [i_0] [i_0]), (arr_11 [i_0] [i_0])))) ? ((((arr_0 [i_0] [i_0]) <= (arr_10 [7] [i_1] [i_0] [i_1] [1] [i_0])))) : (((!(arr_4 [i_0] [i_1] [i_0])))))) : ((min(15, ((((arr_1 [i_0] [i_1]) == var_9))))))));
                    arr_17 [i_0] [i_1] [2] |= -1;
                    var_19 = var_4;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, ((min((((var_2 ? 5664866071406467461 : var_2))), (1651344683978105466 & 0))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((max((arr_8 [16] [i_8] [16] [i_7]), 12781878002303084155)) / ((((arr_9 [i_0] [i_8]) ? 23824 : (arr_19 [i_8])))))) & (((21543 >> (var_4 - 59093)))))))));
                                arr_26 [i_0] [i_0] [12] [i_0] [i_0] [14] [i_0] = ((!(arr_23 [i_8] [i_0] [i_6] [i_1] [i_0] [6])));
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] [i_0] [1] = (((((((402653184 >> (-23833 + 23852)))) ? (((16 >= (arr_23 [i_6] [i_0] [i_6] [i_1] [i_0] [i_0])))) : var_10)) & (((!(arr_22 [i_0]))))));
                }
                arr_28 [i_0] = var_10;
                var_22 = ((((max((!var_7), (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [3]), var_2))))) ? (arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1] [1]) : var_2));
                var_23 = (((((((-1 ? 12781878002303084155 : 1141730274))) ? var_10 : 65535)) >> ((((18 ? -23833 : (-9223372036854775807 - 1))) + 23847))));
            }
        }
    }
    #pragma endscop
}
