/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174035
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned long long int) min((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15713021834588951835ULL)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (var_1)))))))));
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [14LL] [i_0] = (-(arr_1 [15LL]));
        arr_3 [(_Bool)1] [(unsigned char)10] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)20))));
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_21 [i_1] [i_2] [i_3] [16ULL] [16ULL] = ((unsigned char) max((arr_9 [i_1]), (arr_9 [i_1])));
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */short) (~(max((2396565103481344593LL), (((/* implicit */long long int) arr_20 [i_1] [i_2]))))));
                                arr_23 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))) / (9715477430656004374ULL))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) & (var_5)))));
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_3] = ((/* implicit */long long int) (unsigned char)157);
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_1]))));
        arr_26 [i_1] = ((/* implicit */short) 8731266643053547242ULL);
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned int) arr_7 [i_6]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 3; i_7 < 14; i_7 += 3) 
        {
            arr_33 [i_6] = ((/* implicit */unsigned int) (((-(var_7))) > (arr_30 [i_7 - 3] [i_7])));
            /* LoopNest 2 */
            for (long long int i_8 = 3; i_8 < 12; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        arr_38 [i_9] [4U] [i_9] [(unsigned char)12] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_17 [i_6] [i_8 - 1] [i_9]) << (((2396565103481344593LL) - (2396565103481344588LL)))));
                        arr_39 [i_8] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_40 [i_6] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                    }
                } 
            } 
            arr_41 [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) arr_14 [i_6] [i_6]);
            arr_42 [i_7 - 3] [14LL] [11ULL] = ((/* implicit */short) -2396565103481344594LL);
        }
        arr_43 [i_6] = ((/* implicit */_Bool) max((((9715477430656004373ULL) * (((/* implicit */unsigned long long int) 2773311060U)))), (((/* implicit */unsigned long long int) (short)32741))));
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_46 [i_10] = ((/* implicit */unsigned long long int) ((short) (-(((unsigned long long int) (-9223372036854775807LL - 1LL))))));
        arr_47 [i_10] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10] [i_10] [i_10] [i_10]))) * (min((var_5), (((/* implicit */unsigned long long int) 16777215U))))))));
        arr_48 [i_10] = ((/* implicit */short) ((9715477430656004374ULL) * (9715477430656004374ULL)));
        arr_49 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((!(((/* implicit */_Bool) 8731266643053547242ULL)))))))) != (((long long int) 8731266643053547242ULL))));
    }
}
