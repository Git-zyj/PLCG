/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172667
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))), (18446744073709551615ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (signed char)-64)) * (((/* implicit */int) (unsigned char)0)))));
                        arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1] [i_2])) << (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) - (23937)))));
                        var_23 = arr_6 [i_0];
                    }
                    for (int i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        var_24 = arr_1 [i_0] [i_1];
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))) : (arr_3 [i_0])));
                        arr_11 [i_0] [i_2] [i_0] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) ^ (((/* implicit */int) (signed char)-64))));
                        var_26 = ((/* implicit */unsigned short) arr_7 [i_0 - 3] [i_0 - 1] [i_0] [i_4 - 2]);
                    }
                    var_27 = ((unsigned int) arr_5 [(_Bool)1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) (-(arr_13 [i_5 + 1] [i_5] [i_5] [i_6 - 1] [i_6])));
                                var_29 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_6 - 1] [i_0] [i_5])) + (((/* implicit */int) arr_7 [i_1 + 1] [i_6 + 1] [i_0] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)155));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_9 [8LL] [i_0 - 1] [i_0] [8LL])))) ? ((+(((/* implicit */int) (short)17109)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [13U])) : (((/* implicit */int) (signed char)58)))))))));
        arr_18 [i_0] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_32 = ((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_20 [i_7]) : (((/* implicit */int) arr_19 [i_7])));
        var_33 = ((short) (unsigned char)88);
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 3; i_8 < 12; i_8 += 2) 
    {
        for (long long int i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_34 += (-(((/* implicit */int) arr_28 [i_10])));
                    /* LoopSeq 4 */
                    for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_27 [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9] [i_9]))) : (arr_27 [i_8 + 1]))), (((arr_27 [i_8 + 1]) & (arr_27 [i_8 + 1])))));
                        arr_35 [i_9] [12LL] [i_9 + 2] [i_9] = ((((/* implicit */_Bool) min(((short)-17126), (((/* implicit */short) arr_28 [i_9]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)60171)))) ? (((/* implicit */int) arr_7 [i_8] [i_9] [i_9] [i_10])) : (((((/* implicit */int) arr_19 [i_8])) ^ (((/* implicit */int) (unsigned short)7168)))))) : (max((((/* implicit */int) arr_26 [6ULL])), (((((/* implicit */int) (unsigned short)5365)) | (((/* implicit */int) (short)22119)))))));
                    }
                    for (int i_12 = 1; i_12 < 10; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (arr_3 [i_9])));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_39 [(short)3] [i_12 + 1] [i_12] [i_12] [i_12] [6])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) > (arr_9 [i_8] [i_9] [(short)8] [i_10]))) ? (((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) arr_0 [i_10]))))) : (arr_0 [i_10])))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (arr_25 [i_10] [i_10])))), (18446744073709551615ULL))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        arr_44 [i_13] [i_9] [i_9] [i_8 + 1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (signed char)64)), (4099836483U))), (((/* implicit */unsigned int) (_Bool)0))));
                        arr_45 [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_37 [i_8] [i_9] [i_9] [i_13])) > (arr_23 [i_8 - 2])))) + (((int) (short)23117))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8])) ? (arr_14 [i_8] [19ULL] [8] [i_14]) : (((/* implicit */unsigned int) arr_0 [i_9]))))) ? (4099836483U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_14] [i_10] [i_9] [i_8] [i_8])) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_26 [i_10]))))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29320)) ? (arr_20 [i_8 - 2]) : (arr_20 [i_8 - 3])));
                    }
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) 195130813U)) <= (-691184680295240829LL)))) < (arr_23 [i_8])));
                }
            } 
        } 
    } 
}
