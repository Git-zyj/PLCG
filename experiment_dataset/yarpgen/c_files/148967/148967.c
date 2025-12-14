/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_10 ^= ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))) ? (min((min(15725368479073792918, (arr_0 [i_0] [i_0]))), ((((arr_0 [13] [i_0]) || -1309945373))))) : (arr_1 [i_0] [i_0]));
        var_11 ^= ((-var_7 + (max(var_9, 12016013351209812166))));
        arr_2 [i_0] [i_0 - 2] = (max(((12134064343313203813 ? 12134064343313203805 : 15725368479073792914)), (((arr_1 [i_0 - 1] [i_0 - 2]) + ((-17532 ? 242 : (arr_0 [i_0 + 1] [24])))))));
        arr_3 [i_0 - 1] = ((((((((arr_1 [i_0 - 2] [i_0]) == var_5))) >> (((((arr_1 [i_0 + 1] [i_0]) ? (arr_0 [19] [19]) : 88)) - 10571290643799667702)))) | (min((arr_1 [20] [20]), (8796093022207 != 15725368479073792886)))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_12 = (min(((((min((arr_4 [i_1 - 2] [i_2]), (arr_7 [i_2])))) ? 17399 : ((min((arr_8 [2]), (arr_7 [i_1])))))), (((((((arr_0 [i_1] [i_2]) | 1519259681))) && ((((arr_0 [23] [i_2]) + var_8))))))));
            var_13 = (((((max((arr_7 [i_1]), (arr_5 [i_2])))) / var_6)));
            arr_10 [i_1] [i_1] [i_2 + 3] = (arr_5 [i_1]);
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_4 + 1] = (((var_0 && var_6) - (((arr_14 [i_4 - 1] [i_4] [i_3] [i_1]) & (arr_14 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])))));
                    var_14 = (max((((!(arr_11 [i_3])))), (arr_7 [i_4])));
                    arr_18 [i_3] [i_3] [i_4] = max((arr_11 [i_3]), 2721375594635758718);
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_21 [i_5] [i_1 - 1] [17] = ((((+(max((arr_12 [i_1]), var_4)))) % (arr_7 [i_1 - 1])));
            arr_22 [i_1] [i_1] [i_1 - 2] = (((14077 ? (((435354627 ? -753108592 : 117))) : -1448416199845848577)) & (arr_7 [i_1 - 1]));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_25 [i_1 - 2] [1] = ((18446744073709551601 || (((var_4 ? (arr_0 [i_1] [i_6]) : (arr_7 [i_1 - 1]))))));
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_34 [6] [0] [20] [i_9 - 1] &= (var_2 - (arr_23 [i_8 - 1] [i_9 - 2]));
                            arr_35 [i_7] [i_7 - 1] [i_8 + 2] [i_7] = (-var_4 ? ((((arr_6 [6]) && (arr_19 [i_1 - 2] [i_1])))) : (!4115672797));
                            var_15 += (arr_14 [20] [i_7 - 3] [i_8] [i_9]);
                            arr_36 [i_9] [i_8 - 2] [i_7] [i_7] [i_6] [i_1] = ((~(arr_32 [i_7 - 1] [i_9] [i_9 + 1] [i_9] [12] [1])));
                            var_16 |= ((2721375594635758705 / (arr_11 [i_1 - 1])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    {
                        var_17 = (arr_39 [i_1 + 1]);
                        var_18 *= ((((arr_37 [23] [i_11 - 1]) | (arr_29 [i_1 + 1] [21] [i_10 - 1]))));
                    }
                }
            }
        }
        arr_43 [i_1 - 2] = ((~(arr_12 [i_1 - 1])));
    }
    var_19 = (max(var_6, (!7)));
    #pragma endscop
}
