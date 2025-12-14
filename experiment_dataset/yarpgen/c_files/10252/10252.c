/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((1 ? ((-1 ? var_9 : -723609662)) : -233)) | var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_6 [i_0 - 2] = (min((max((~-723609658), ((0 ? -706617313 : var_0)))), (arr_0 [i_0] [i_0])));
                    var_14 = (arr_4 [i_0 + 2]);
                    arr_7 [i_0] = ((-(max((!706617313), (max(-834033498, 3372))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_15 += (min(var_0, ((((54547 <= 22) <= (min(320557173, (arr_0 [i_0] [5]))))))));
                        arr_13 [2] [i_3] [2] [10] = (min(((((arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 2]) ? 7 : var_7))), (arr_9 [i_3] [i_0 - 3])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_18 [i_0] [1] [i_3] [i_3] [i_5] [i_3] = ((((-(arr_17 [i_0 + 3] [i_0 + 3] [i_3] [i_5] [i_5] [7])))) ? (max(var_7, (~var_8))) : (((min(var_10, 8120222411089241624)) & (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 1]))));
                            arr_19 [i_3] [i_1] [i_1] [0] [i_1] [i_1] = ((((max((max(var_0, var_11)), ((max(706617323, var_1)))))) ? (((max((arr_2 [i_0]), (((!(arr_3 [i_6] [i_0 - 1] [i_0 - 1])))))))) : 57085));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_16 = (min(var_16, 0));
                            var_17 = (((arr_12 [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0 + 2]) ? -17069990676172034841 : ((((var_1 < (arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_7])))))));
                            var_18 *= (((!(arr_5 [i_0] [21] [i_7]))));
                        }
                        var_19 |= (max(12761, (arr_16 [i_0 - 1] [i_1] [i_3])));
                        arr_22 [i_0] [i_1] [i_3] [i_0] = ((var_7 << (((((arr_20 [i_0] [i_0] [i_1] [i_0] [0]) + 1482991366)) - 14))));
                        arr_23 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_5] [i_5] = ((-(min(((var_8 ? (arr_2 [i_0]) : var_3)), (((arr_3 [i_5] [i_3] [i_1]) ? (arr_12 [18] [i_1] [i_3] [1]) : (arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))));
                        arr_24 [i_0] [13] [3] [i_3] [3] [i_0] = (max((arr_1 [i_0] [i_0]), -var_0));
                    }
                    var_20 = (((((((706617323 ? (arr_2 [i_0]) : -39))))) >= (min((max(var_4, (arr_1 [0] [i_3]))), 8450))));
                    var_21 *= (var_12 ? ((max((!16678127665522189203), ((!(arr_16 [i_0 - 2] [17] [17])))))) : (!-644820141));
                    var_22 = (arr_4 [i_3]);
                }
                arr_25 [i_0] [10] [i_0 - 3] = (((-((-320557174 ? 1909880752 : 3)))));
            }
        }
    }
    #pragma endscop
}
