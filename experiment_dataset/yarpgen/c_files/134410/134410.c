/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((~var_4) ? (((~(arr_1 [i_0])))) : (min(7, (arr_1 [i_0])))));
        var_16 = (max(var_16, ((((arr_1 [i_0]) ? ((-112 ? 116 : 1)) : (((!(arr_0 [i_0] [3])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 1] [i_2 - 1] [i_1] [6] = (max((((!(!627502539881758258)))), -1750205738));
                    var_17 = (arr_6 [i_2] [i_1] [18] [i_0]);
                }
            }
        }
        arr_8 [5] = ((arr_5 [i_0] [i_0] [i_0] [11]) ? ((((!(arr_1 [i_0]))))) : (min((-9223372036854775807 - 1), -54)));
        arr_9 [i_0] [i_0] = (((max((((1 ? 195 : 21542))), (min(195, var_13)))) ^ var_12));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_18 += ((-(arr_0 [i_3] [i_3])));
        var_19 |= var_2;
        var_20 = (!2544761558);
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_22 [i_7] [i_5] = (((min(-1427710746, var_5)) % (arr_17 [i_6] [7] [i_7 - 2])));
                        var_21 = (max(var_21, (((((!(!var_7))) || ((!(arr_5 [i_6] [i_7 - 1] [i_7] [i_7 - 2]))))))));
                    }
                }
            }
        }
        var_22 += ((((~((5634456902155602933 ? 1 : -23359)))) & (var_15 / 21541)));
        var_23 += ((min(var_7, 4081330494)));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                {
                    arr_31 [i_8] [i_9] [14] = (((!-7144086451636064721) == ((((var_9 | var_1) > (arr_20 [i_10] [i_10 + 2] [i_9] [i_8]))))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_36 [i_8] = var_5;
                        var_24 = (((((-1224879699 ? 23095695 : 67))) ? ((min(0, (8178003111998931204 || 627502539881758258)))) : 627502539881758258));
                        var_25 = (((-(arr_30 [i_10] [13] [i_10 - 1]))));
                    }
                    var_26 = 1;
                }
            }
        }
    }
    var_27 = (~(((!((min(928251043243797854, 1)))))));
    #pragma endscop
}
