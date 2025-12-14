/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180333
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_1 [i_0]))))) ? ((~((-(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8426724570881824500ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) (~((~((+(var_4)))))));
        arr_8 [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (((((/* implicit */int) arr_1 [i_1])) >> ((((~(((/* implicit */int) var_6)))) - (51))))) : ((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_13 [(unsigned char)8] = ((/* implicit */long long int) min((min((((/* implicit */int) min((var_7), (var_7)))), (arr_0 [i_2]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (17150099481643682322ULL))))));
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_12 [i_2])))))));
        arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((arr_0 [i_2]) == (((/* implicit */int) arr_5 [i_2]))))) : (((((/* implicit */int) arr_1 [i_2])) >> (((arr_0 [i_2]) + (1993550120)))))));
        arr_15 [i_2] = ((/* implicit */signed char) arr_5 [i_2]);
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        var_16 *= ((/* implicit */unsigned short) (_Bool)1);
        var_17 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_6))))))), (((/* implicit */int) arr_1 [i_3]))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_2))))));
                        arr_26 [i_3 + 1] [i_3 + 2] = ((/* implicit */long long int) -973180044);
                        arr_27 [i_3] [i_6] [i_3] [4] = min((((/* implicit */int) min((((((/* implicit */int) arr_1 [i_3])) < (((/* implicit */int) arr_22 [i_3 - 2] [i_3 - 2])))), (((-973180044) != (((/* implicit */int) (_Bool)1))))))), (973180043));
                        arr_28 [i_6 - 1] [(unsigned char)2] [i_4] [i_3] = ((/* implicit */int) arr_20 [i_4] [i_5] [i_4]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_32 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */int) var_1)) != (((/* implicit */int) (short)-20470))))))), (((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) (signed char)124))))));
                        arr_33 [i_3 + 1] [i_3 + 1] [i_4] [(unsigned char)2] [i_5] [5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (((((/* implicit */unsigned long long int) arr_24 [i_3 + 1] [(unsigned short)9] [i_3 + 1] [i_5] [i_3 + 1])) + (arr_30 [i_3]))))))));
                        arr_34 [i_3 - 2] [i_3 - 2] = ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)8])) || (((/* implicit */_Bool) (unsigned char)251))))) + (arr_18 [i_3 - 1]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) min((((arr_20 [i_3] [i_3 - 1] [i_3 + 2]) / (arr_20 [i_3] [i_3 - 2] [i_3 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_36 [i_3 - 1])) : (((/* implicit */int) arr_36 [i_3 + 1])))))));
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) min((arr_35 [(_Bool)1] [i_3 - 2] [i_3 - 2]), (((/* implicit */unsigned long long int) arr_36 [i_3 + 2])))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_40 [i_3 - 2] [i_4] [i_5] [i_9] = (~(((((/* implicit */_Bool) ((long long int) arr_0 [i_9]))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_3] [i_3 + 2] [i_4] [2] [9U] [i_9]))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_3 + 2])) & (((/* implicit */int) arr_1 [i_5]))))))));
                        var_21 = ((/* implicit */signed char) arr_19 [i_5] [i_5]);
                    }
                }
            } 
        } 
    }
}
