/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_14 = ((((((-(arr_3 [i_0]))))) >> ((((var_8 | (max(var_13, (arr_5 [i_3] [i_2] [i_1] [i_0]))))) + 39))));
                        arr_10 [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 4] [i_1 + 4] = (((1 ? ((~(arr_4 [i_1] [12] [i_3])) : (arr_5 [i_3] [i_2] [i_1] [i_0])))));
                        var_15 = ((((((arr_5 [i_0] [i_1] [i_2] [i_3]) >> (-2916377285037941888 - 39807)))) | (max(-111, (min(4294967295, -111))))));
                        var_16 *= (!-32);
                        var_17 += (((((25515 << (var_2 - 53483)))) + (arr_5 [i_0] [i_0] [i_2] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_18 = (~4095);
                        var_19 = ((((!(arr_8 [i_0] [i_1 + 2] [i_2] [i_2 + 4] [i_4] [i_4]))) ? ((((arr_4 [i_0] [i_0] [i_0]) ? ((-719604164802633884 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_7)) : (var_9 - 25288)))) : (((!(arr_7 [i_0] [i_1] [i_2 + 4] [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] = ((!(var_5 || 0)));
                        arr_19 [i_0] [i_1] [i_1] = (((((arr_4 [i_0] [i_1] [i_2]) >> (var_4 - 2604116710898792245))) < (arr_2 [i_5] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((((((arr_12 [i_0] [i_0] [i_2] [i_6] [i_6]) ? var_1 : (arr_14 [i_6] [i_1] [i_1] [i_0] [i_1] [i_0])))) ? (arr_1 [i_0]) : (!23955)));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = ((((40247 ? 1 : (48 > 1))) != (((!(arr_25 [i_1]))))));
                            var_22 = (((((((!(arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] [i_1]))) ? (!1) : (!-15)))) || ((((1 * 1) + (((!(arr_13 [i_6] [12] [i_1])))))))));
                        }
                    }
                    var_23 = (((((!var_3) && (max(1, 1)))) ? ((~((max(var_10, 95))))) : (((!((((arr_8 [i_0] [i_1] [i_1] [3] [i_2 + 4] [i_2]) - (arr_23 [i_1])))))))));
                }
            }
        }
    }
    var_24 = (((!1) ? (min((min(-3874374275223427910, var_8)), (!var_7))) : ((((var_3 | -2916377285037941900) ? (min(3353, var_3)) : (var_10 | var_1))))));
    var_25 = (((-var_11 / var_5) ? (-2147483647 - 1) : ((21 * ((1 ? 0 : 18070))))));
    #pragma endscop
}
