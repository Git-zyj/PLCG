/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165236
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_10))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_13 = (short)26727;
                        /* LoopSeq 4 */
                        for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((long long int) (short)26725)))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0] [19LL] [i_4]))))) : (((/* implicit */int) arr_17 [17] [i_4] [i_4] [i_1 - 1]))));
                            var_16 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)28))));
                        }
                        for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_5 + 1] [i_0] [i_2] [i_1 - 1] [i_0] [i_0])) != (((/* implicit */int) (short)-26728)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_5 - 2]))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)243)) | (((/* implicit */int) arr_6 [(signed char)20] [(signed char)20] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) : (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14219))) : (var_3)))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) arr_9 [i_0] [(short)20] [i_3] [(short)11]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_26 [i_0] [10] [i_2] [16U] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 - 1])));
                            arr_27 [i_6] [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_0]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_30 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)64325))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(arr_5 [i_1 - 1]))))));
                            var_20 = ((/* implicit */signed char) ((int) (signed char)110));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_1] [i_8] [i_0] = ((/* implicit */int) var_3);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((short) arr_29 [i_2] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_10))));
                    }
                    /* LoopSeq 4 */
                    for (int i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_24 = ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]));
                        var_25 -= ((/* implicit */unsigned long long int) (signed char)-111);
                    }
                    for (int i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(var_1))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (arr_4 [i_11] [i_0])));
                            arr_43 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) >= (2756386101U)));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_12] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_12] [i_12 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) (+(14102166822253404051ULL)));
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(unsigned short)11] [(unsigned short)11] [i_2] [(unsigned short)11] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_1] [i_13] [i_12 + 1] [i_1]))) : (((long long int) -1545909612)))))));
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_12 + 1] [i_12 + 1] [i_1 - 1] [i_1 - 1])) >= ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_13])) : (((/* implicit */int) var_6)))))))));
                        }
                        arr_51 [i_0] [i_1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] = ((/* implicit */short) (-(((/* implicit */int) (short)26727))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_12] = arr_32 [i_1 - 1];
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_14 + 1] [i_14] [i_14] [i_0] = ((/* implicit */unsigned char) arr_24 [i_0]);
                        var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6154))) : (arr_42 [i_1 - 1] [i_14 + 1] [i_1 - 1] [i_14] [i_14])));
                        arr_57 [i_14] [i_14] = ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (short)26727)) : (((/* implicit */int) (signed char)-17)));
                        var_33 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)25825)) >> (((((/* implicit */int) arr_38 [i_1 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])) + (156)))));
                    }
                    arr_58 [i_1] [i_1 - 1] [i_1] = ((/* implicit */int) ((((_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)));
                }
            } 
        } 
        var_34 = ((/* implicit */int) (signed char)-56);
        arr_59 [i_0] = ((/* implicit */short) var_7);
    }
    var_35 = ((/* implicit */short) var_4);
}
