/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119659
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) (unsigned char)25);
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) >= (975546225749328671ULL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (short)-8715)) ? (17471197847960222945ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_7 [i_0] [i_1])) + (((/* implicit */int) (unsigned char)158)))) : (((/* implicit */int) ((signed char) 60335568U)))));
                        arr_16 [i_0] [10U] [i_2] [i_3] [i_3] [(unsigned char)1] = ((/* implicit */long long int) var_3);
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    }
                } 
            } 
            arr_18 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_9);
        }
    }
    for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned long long int) arr_19 [16ULL]);
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_19 [i_4]) : (arr_19 [i_4])));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_27 [i_5] [i_5] [14LL] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_4 - 1])) > (((/* implicit */int) arr_26 [i_4] [i_4] [i_4 - 1]))));
            arr_28 [(signed char)15] [i_5] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_26 [i_4 + 2] [(unsigned char)10] [i_5]))))), (arr_19 [(unsigned char)7]));
        }
        arr_29 [i_4 + 3] = ((/* implicit */unsigned int) ((signed char) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_24 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))))), (arr_24 [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_36 [0LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7]))) >= (arr_0 [i_7])));
            arr_37 [(unsigned short)8] = ((/* implicit */unsigned char) (signed char)122);
            arr_38 [(unsigned short)2] = ((/* implicit */signed char) ((var_7) & (((/* implicit */unsigned long long int) (-(arr_19 [i_6]))))));
        }
        arr_39 [i_6] [i_6] |= ((/* implicit */unsigned long long int) arr_2 [i_6]);
        arr_40 [i_6] = var_6;
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned int i_9 = 3; i_9 < 9; i_9 += 4) 
            {
                {
                    arr_47 [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_23 [i_6] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60065))) : (4503599627370495LL))))));
                    arr_48 [i_6] [(unsigned short)9] [(unsigned short)9] [(signed char)6] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_3)))));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */signed char) var_2);
}
