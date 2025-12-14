/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145698
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
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_13)))), (((var_16) | (var_5)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)0))))), (var_5))) : (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (9140206599860817064ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2 - 1] [i_1] [i_0])) ? (1803861390863577986ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2])))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_2 + 2] [i_2 + 1] [i_2 - 2]));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])) >> (((((/* implicit */int) arr_0 [i_1])) - (56)))));
                            arr_14 [i_1] = (-(((unsigned long long int) 16387105495354590394ULL)));
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_22 = ((unsigned char) arr_3 [i_1] [i_2 - 2]);
                            var_23 &= ((/* implicit */unsigned long long int) ((var_1) << (((((((/* implicit */unsigned long long int) arr_10 [i_0])) + (2059638578354961197ULL))) - (4734574323430306787ULL)))));
                        }
                        for (short i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            arr_23 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_1] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_6 + 1] [i_6]))) * (arr_4 [i_6 + 1] [i_1]));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))) : (var_3)))) ? (((/* implicit */int) arr_19 [i_6] [i_3 + 1] [i_2 - 1] [i_1] [i_0])) : (((((/* implicit */int) var_6)) | (((/* implicit */int) (short)-524))))));
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_0 + 1] [i_3 - 1] [i_2 + 1] [i_3] [i_1]))));
                            arr_24 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_3 [i_1] [i_6 - 1]));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_7])) | (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3 - 1] [i_7]))));
                            arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2 + 2] [i_2 - 1] [i_1] [i_2 + 2])))));
                        }
                        arr_30 [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (short)-27202)) : (((/* implicit */int) (short)-1)))));
                    }
                    arr_31 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                }
            } 
        } 
        arr_32 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))));
        arr_33 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_0) + (((/* implicit */unsigned long long int) var_7)))));
    }
}
