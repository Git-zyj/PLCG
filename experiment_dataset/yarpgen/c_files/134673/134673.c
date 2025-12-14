/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = (arr_1 [i_0]);
        arr_4 [i_0] [2] = -6;
        arr_5 [i_0] [i_0] = (arr_0 [i_0] [14]);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [18] [i_2] [18] = (arr_0 [i_1 - 1] [i_2]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_4] [i_5] [i_3] [i_1 - 3] = (arr_8 [i_1 - 1] [i_1 + 1] [i_3]);
                            arr_19 [i_1] [i_1] = ((8594521610309841772 ? -20198 : 6));
                            arr_20 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1] &= (arr_17 [i_1] [18]);
                            arr_21 [i_4] [14] [i_3] [i_4] [17] [i_4] [i_2] = var_3;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_1] [i_3] = (min(-8594521610309841774, ((((arr_23 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [5]) / -11)))));
                            arr_25 [i_1 - 1] [15] [13] [i_1] [i_1] [i_1 - 3] [0] = ((((((arr_9 [i_4] [i_6]) ? 6 : 8594521610309841776)))) ? 0 : 106);
                            arr_26 [i_6] = (~-32619);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_29 [i_1 + 1] [5] [i_3] [i_4] [i_7] [i_3] = (((arr_17 [i_1 + 1] [i_4]) > (min(8594521610309841772, (((arr_22 [6] [6] [0] [i_4] [i_4] [i_1]) ? 8594521610309841772 : (arr_7 [i_1])))))));
                            arr_30 [18] [18] [i_4] [i_4] [18] [18] = ((((~(arr_13 [8] [i_3] [i_1 - 2]))) != (arr_9 [4] [i_2])));
                            arr_31 [3] [8] [3] = (((((3622259830 ? 2054849524 : (arr_1 [i_1]))) / (((var_2 ? 5 : -19741))))) == (((min(0, 97)))));
                            arr_32 [14] [14] [i_3] [i_4] [i_7] = min((var_14 + -98), (arr_8 [i_1] [i_2] [i_3]));
                            arr_33 [4] [5] = 39716;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_37 [i_8] [i_4] [i_3] [i_2] [i_1] = 11583;
                            arr_38 [i_1] = 3797125090;
                            arr_39 [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_4] [i_8] &= (((arr_13 [9] [i_1 + 1] [i_1 - 3]) ? (((arr_0 [i_1] [i_2]) ? 1 : (arr_28 [0]))) : (arr_16 [i_1 - 1] [i_1 - 2])));
                        }
                        arr_40 [i_1 + 1] = (((arr_16 [i_1 - 3] [i_1 - 3]) ? (arr_10 [i_1 - 2] [7]) : ((((arr_10 [i_1] [i_2]) ? (37167 || 65534) : -1187142700)))));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_43 [2] [2] [i_9] = (arr_9 [4] [i_1 - 2]);
            arr_44 [15] [15] = (((((arr_23 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_9]) / var_9))) ? 65534 : (((65534 < (-940807508 != var_5)))));
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            arr_48 [i_1 - 2] [3] [i_1] = 1;
            arr_49 [16] [16] [i_10] = 2258830541;
        }
    }
    var_16 = 20197;
    var_17 = var_9;
    var_18 = var_3;
    #pragma endscop
}
