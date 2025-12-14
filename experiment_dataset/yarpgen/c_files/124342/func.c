/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124342
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) max((-3473695140660509527LL), (arr_6 [i_0] [i_1])))), (4814611012402800023ULL))));
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_2 + 1] [i_1])), (max((9206763205536434204ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2 - 1] [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_3] [(unsigned char)18] [i_3]))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                var_19 = ((/* implicit */signed char) 931741859);
                arr_17 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_3]))));
                arr_18 [i_3] [i_4] [i_5] = (+(arr_10 [i_3] [i_4] [i_5]));
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (int i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(arr_21 [i_6])));
                    var_21 = ((unsigned char) var_6);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), (max((max((((/* implicit */long long int) arr_27 [i_8] [i_9])), (arr_1 [i_8]))), (((/* implicit */long long int) 1329880651U))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [3] [i_9 + 1] [3] [(unsigned short)9] [i_8] [i_10] = ((/* implicit */signed char) -5342959462607592951LL);
                        arr_38 [i_8] [i_9] [i_8] = ((/* implicit */int) 1107878265U);
                        arr_39 [i_8] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_32 [i_11]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        arr_43 [9] [i_9] [i_9] [i_9 - 1] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) var_4)) | (var_0)));
                        arr_44 [i_8] [i_8 + 1] [9LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_28 [i_8 + 1])))) ? (arr_28 [i_8 - 1]) : (arr_28 [i_8 + 1])));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_23 = -713574025;
                            var_24 = ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (_Bool)1)) : (122919316));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        arr_52 [i_8] [i_9] [i_14] [i_14] = arr_42 [i_9] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1];
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_9 - 2] [i_9 + 1] [i_8 + 1] [i_14] [i_14 - 1] [i_9])) & (((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 2] [i_8 - 1] [i_14] [i_14 + 1] [i_14]))));
                    }
                    arr_53 [i_8 - 1] [i_8 - 1] [i_10] [i_8] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_13 [i_8 - 1] [i_8])), (var_11)));
                }
            } 
        } 
        var_26 = (-((~((-(((/* implicit */int) arr_4 [i_8 - 1] [i_8])))))));
        var_27 = ((max((((/* implicit */unsigned long long int) var_4)), (0ULL))) / (((/* implicit */unsigned long long int) ((arr_25 [i_8 + 1] [i_8 - 1]) % (((/* implicit */long long int) (~(var_8))))))));
        arr_54 [i_8 + 1] = ((/* implicit */int) var_11);
        var_28 = ((/* implicit */unsigned long long int) (unsigned char)189);
    }
    var_29 = ((/* implicit */int) var_10);
}
