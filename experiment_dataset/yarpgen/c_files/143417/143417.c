/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 ? var_8 : var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [1] [12] [i_3 - 1] [1] = ((((-(arr_0 [i_3 + 1]))) * -41184));
                        arr_13 [i_0] [i_1] [15] [i_3] = (max(-var_9, ((+(((arr_5 [i_3]) ? (arr_8 [9] [i_1] [i_1]) : (arr_1 [i_0])))))));
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [13] [i_1] [i_2] [i_4] = (!37340);
                        arr_17 [i_0] = (((((-37342 ? (((((arr_5 [i_2]) + 2147483647)) << (37366 - 37366))) : (((arr_11 [1] [3] [i_2] [i_2] [i_4] [i_4]) ? (arr_6 [i_4] [12] [i_1]) : var_0))))) ? 3155637289 : ((min((arr_0 [i_1 - 1]), (~1))))));
                    }
                    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] = var_6;
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] = (max(((max(((((arr_1 [i_0]) && 1139330006))), (arr_19 [i_5] [i_2] [i_1 + 1] [i_0])))), -var_3));
                        arr_23 [i_5] [i_2] [i_2] [12] [i_0] = 4247890552379155130;
                    }
                    arr_24 [1] [i_1 + 2] |= (!var_7);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 4; i_9 < 8;i_9 += 1)
                {
                    arr_36 [i_8] [i_6] [i_7] [8] [i_6] [i_9] = 4247890552379155130;
                    arr_37 [i_6] [i_7] [i_8] [i_8] = (((((~(arr_18 [i_9] [13] [i_9 + 3] [i_9 - 4] [i_6] [16])))) ? (max(var_3, (arr_18 [i_9 + 4] [i_9] [i_9] [i_9 - 3] [i_9] [i_9]))) : (((-(arr_5 [i_9 - 1]))))));
                    arr_38 [i_8] [i_6] [7] [i_9 + 2] = (-4247890552379155119 - -181);
                    arr_39 [i_6] [i_6] [i_6] [i_6] = 1139330007;
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_45 [i_11] [i_10] [i_6] [3] [2] = (((arr_29 [i_6]) | (max((arr_35 [i_6] [i_8] [i_6]), ((min(541239400, (arr_14 [i_7] [6] [i_10] [i_11 + 1]))))))));
                        arr_46 [i_6] [i_10] [i_6] = (((var_11 | (arr_32 [i_6] [i_7] [i_8]))));
                    }
                    arr_47 [1] [i_7] [i_6] = (arr_7 [i_6] [i_6] [i_6] [i_6]);
                }
                arr_48 [i_6] [i_7] [i_8] = (((max(596950417, 3753727908)) != -3155637304));
                arr_49 [i_6] [i_7] [i_7] [3] = ((((((arr_4 [i_8] [i_7]) & 3155637291))) ? 3753727907 : (min(((var_6 ? 4247890552379155151 : (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), ((max(var_11, (arr_43 [i_6] [i_8] [i_8] [i_8] [i_7]))))))));
            }
            arr_50 [1] [i_7] &= (arr_6 [16] [i_6] [i_7]);
        }
        arr_51 [2] [i_6] = (!55);
    }
    #pragma endscop
}
