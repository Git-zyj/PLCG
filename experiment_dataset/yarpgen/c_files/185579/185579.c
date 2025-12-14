/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, var_19));
            var_21 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_2] = -17352;
            arr_7 [i_0] [i_0] [i_2] = (((((((var_10 ? (arr_2 [i_0] [i_2]) : var_5)) - (max(var_5, 17352))))) ? (arr_5 [i_0]) : (((!0) & 63397306))));
        }
        var_22 = arr_5 [i_0];
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = arr_8 [i_3] [i_3];
        arr_12 [i_3] = ((~(arr_0 [i_3 + 1])));
        var_23 = 68;
        arr_13 [i_3] [i_3] |= ((~(arr_8 [i_3 - 3] [i_3 - 3])));
        var_24 = var_19;
    }
    var_25 = (max(var_25, 76));
    var_26 = (max((((-3 && -17342) ? 51 : (~483622303))), (((max(var_12, var_9))))));
    var_27 = var_6;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_6] [i_5] [i_5] = ((((((((var_14 ? var_19 : 63397306))) % -4800859791784846594))) ? ((((arr_19 [i_4] [i_4] [i_4] [i_4]) && ((max((arr_14 [i_6] [i_5]), (arr_3 [i_4] [i_4]))))))) : ((~((-(arr_18 [i_4] [i_4] [i_5])))))));
                    var_28 = (min(var_28, ((((((var_5 <= 29649) ? var_10 : ((((arr_16 [i_4]) ? (arr_15 [i_5]) : var_0))))) / ((((var_6 ? var_9 : (arr_18 [i_4] [i_5] [i_4]))) % -10571854846083836801)))))));
                    var_29 ^= (arr_3 [i_6] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
