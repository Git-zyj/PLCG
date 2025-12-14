/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((249197429 / var_9) ^ ((var_0 ? var_2 : var_10)))) + (max(var_7, var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 += ((((arr_3 [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_3]))) == (((17255541738040015931 ? (arr_6 [i_0] [i_1 + 2] [7]) : (arr_5 [i_3])))));
                        var_14 += var_9;
                    }
                }
            }
            var_15 += ((((var_5 ? (arr_1 [i_0] [i_0]) : (arr_8 [4] [i_0] [4] [i_1] [i_1])))) ? var_5 : 1191202335669535702);
        }
        var_16 = (-72 <= var_9);
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_17 ^= ((((((~var_3) ? ((max(27, var_7))) : (((arr_11 [i_4 - 1] [i_4]) ^ -833526409))))) ? -var_11 : (((-(max(-2145058860, (arr_12 [i_4] [i_4]))))))));
        var_18 = (max((min((max(3510642978, (arr_11 [i_4] [i_4]))), (32704 || 178))), ((-74 * (((arr_11 [i_4 + 1] [4]) | var_1))))));
        var_19 = 3510642969;
        var_20 = ((((1 ? -3779849749764845292 : 1191202335669535714)) & ((((var_0 || (arr_12 [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_21 = ((max((max((arr_11 [i_5] [20]), var_2)), var_10)));

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_22 ^= (((((arr_17 [i_4 + 2] [i_4 + 1] [i_4 + 2]) && var_0)) && (((1307438771990658495 ? 5840 : -1814597034)))));
                        arr_23 [i_5] [i_6] = ((min(16, (arr_20 [i_4 + 1] [14] [i_4] [i_4 + 1]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_23 += (arr_15 [i_4 + 2] [i_5] [i_6]);
                        arr_26 [i_8] = ((~((773467604 ? (arr_24 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_21 [i_4] [21] [2] [i_4] [i_4 - 1])))));
                        arr_27 [i_8] = (((((var_6 - (arr_25 [i_4] [i_4] [i_4] [i_4])))) / ((var_3 ^ (arr_24 [i_4] [i_8] [0] [0] [i_4] [i_4])))));
                        arr_28 [i_8] [18] [9] [9] = (((((~(arr_12 [i_6] [i_8])))) ? 13841209658325886274 : (arr_22 [i_8] [i_8 + 1] [22] [22] [i_4])));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_24 ^= max(var_8, (((((101 ? 22454 : var_11))) ? ((var_3 ? var_6 : var_0)) : (var_3 + -22455))));
        var_25 = (min(var_25, ((max((arr_17 [i_9] [i_9] [i_9]), ((((((arr_4 [i_9]) & var_1))) ? ((min(-2456276666746321433, 32767))) : (~6438909549356923898))))))));
    }
    #pragma endscop
}
