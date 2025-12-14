/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153306
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-1413382048)))))))) >= (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15LL))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (var_5)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (var_13))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) 10ULL))))), (((((/* implicit */int) (short)11909)) + (((/* implicit */int) var_0))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (arr_4 [i_1 + 1]))), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_4])))) | (((/* implicit */int) min((((/* implicit */short) arr_11 [i_3] [i_1])), ((short)14)))))))));
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-6712)), (var_6))))))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9024))) ^ (arr_4 [i_1 - 3]))))))) | (((/* implicit */int) ((((/* implicit */_Bool) 10ULL)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)516)) << (((29LL) - (20LL))))))))))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min(((+((+(((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_11 [i_1 - 2] [i_6 - 1])))), ((-((-(((/* implicit */int) (short)-128)))))))))));
                            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (((((/* implicit */_Bool) arr_8 [i_2] [i_4])) || (((/* implicit */_Bool) arr_7 [i_3] [i_4] [i_3])))))))) ^ (max((var_2), (((/* implicit */unsigned long long int) min((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]), (var_10)))))));
                            var_20 *= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-520))) + (18446744073709551611ULL)))));
                            arr_20 [6LL] [6LL] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) 4200530297U))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (~(min((arr_4 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                            var_22 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1 - 1] [i_4] [i_7 - 1])) | (((/* implicit */int) arr_16 [i_1 - 3] [i_1 - 3] [i_2] [i_2] [i_4] [i_2]))))) && (((/* implicit */_Bool) min((((/* implicit */short) var_0)), (arr_23 [i_1] [i_2] [i_2] [i_3] [(short)7] [i_7]))))))));
                            arr_24 [i_1] [i_2] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_17 [12LL] [i_2] [i_3] [i_3] [i_7]))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_1] [i_2] [i_3])) + (((/* implicit */int) arr_22 [i_4] [i_4] [i_4])))) >= (((/* implicit */int) var_11)))))) + (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)1] [i_7 + 3] [i_7 + 3] [i_1 - 1] [i_1 + 3] [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
                        {
                            var_24 *= ((/* implicit */unsigned int) (-(((arr_26 [i_1] [i_1] [1LL] [i_1] [i_1] [i_1] [15ULL]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47455)))))));
                            var_25 = ((/* implicit */long long int) (~((~(arr_25 [i_1 + 1] [i_2] [i_3] [i_2])))));
                            var_26 = ((/* implicit */int) (((-(arr_26 [i_1] [i_2] [i_3] [i_4] [i_4] [i_3] [i_4]))) / (((/* implicit */long long int) arr_25 [i_1] [i_1 - 1] [i_1] [i_1]))));
                        }
                        var_27 = max(((~((-(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            for (int i_10 = 3; i_10 < 13; i_10 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65530)) | (((/* implicit */int) arr_8 [i_1] [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_36 [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) | ((+(((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                        arr_37 [i_1] [i_1] [10] [10] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_11 + 1]))))));
                        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)108)) | (((/* implicit */int) (short)(-32767 - 1)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2)) + (((/* implicit */int) var_14))))))))));
                        arr_38 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_15 [i_1] [i_11 - 2] [i_10 + 3] [i_11 + 1] [i_11 + 1])))) | (((/* implicit */int) ((((/* implicit */_Bool) min((arr_25 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) arr_11 [i_1] [i_10 + 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_11] [i_1] [i_1]))))))))));
                        arr_39 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551611ULL))))) | (((/* implicit */int) var_11))))) | ((~((-(var_1)))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_42 [i_1] [i_1] [i_9] [i_1] [i_12] [i_12] = ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-27285))))))) * (((((9439723692865304913ULL) * (((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_10])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15806)) / (((/* implicit */int) var_10))))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */int) (signed char)-100)) >= (((/* implicit */int) (unsigned char)145))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        var_31 = ((((/* implicit */long long int) ((/* implicit */int) min((var_12), ((short)-407))))) + ((~(arr_41 [i_1 - 1]))));
                        arr_45 [i_9] [i_9] [i_9] [i_9] [i_13] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_10 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 + 3])) | (((/* implicit */int) var_8)))))));
                    }
                    var_32 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) min((((/* implicit */short) var_0)), ((short)-2))))))));
                    var_33 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)124))))));
                }
            } 
        } 
    }
}
