/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187579
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
    var_11 = ((/* implicit */_Bool) var_7);
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_15 -= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2] [i_1] [(short)18] [i_0]))))) & ((-(3936575088U))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_4 [i_0] [i_0])))) ? (((arr_5 [i_2] [i_2]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (var_8))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_3]) : (arr_0 [i_3]))) > (((/* implicit */unsigned int) (+(arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_5 [i_0] [i_3])))))) * (((((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) || (arr_5 [i_0] [(signed char)3]))))))));
                        arr_12 [i_0] [i_0] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (arr_4 [i_0] [i_0]) : (arr_4 [4ULL] [i_1])))) ? (((arr_4 [i_0] [i_0]) % (arr_4 [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) || (((/* implicit */_Bool) 3936575086U))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_4 [i_0] [(short)6]))) / (((/* implicit */int) ((signed char) arr_9 [i_0] [(unsigned short)6] [7ULL] [i_3] [i_3] [i_3])))));
                        var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) > ((+(1LL)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 14246582577431443004ULL))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_4]), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */int) arr_3 [(unsigned short)2])), (var_2))) : ((-(((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) & ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_4] [i_1]))))))));
                        var_19 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)4] [i_2] [i_4])))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_18 [i_0] = ((/* implicit */long long int) arr_16 [i_2] [i_4]);
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (max((((/* implicit */int) arr_9 [i_2] [i_2] [i_5] [i_5] [i_0] [i_2])), (((((/* implicit */_Bool) arr_16 [i_1] [i_1])) ? (arr_10 [i_5] [17ULL] [i_1] [i_0]) : (((/* implicit */int) var_6))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (short)-14488));
                            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29609)) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (short)-14488))))))) ? (var_8) : (((/* implicit */int) arr_3 [i_0]))));
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_6] [i_2]))));
                            arr_24 [i_1] [i_1] [i_2] [i_0] [i_6] [18LL] = ((/* implicit */_Bool) var_10);
                            var_23 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_2] [i_5] [i_6]);
                        }
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 3) 
                        {
                            arr_28 [i_0] [i_0] [i_5] [i_5] [i_7 + 2] [i_1] = arr_16 [i_0] [i_1];
                            arr_29 [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_2]);
                            arr_30 [i_1] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? ((-((+(14246582577431443004ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (4200161496278108615ULL)))) ? (arr_27 [i_2] [i_2]) : (((((-760229994408262577LL) + (9223372036854775807LL))) >> (((358392207U) - (358392175U))))))))));
                            arr_31 [i_0] [i_1] [i_1] [(short)20] [i_2] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_7 + 2] [i_5] [i_7 + 1] [i_2])) * (((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) + ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7 + 2]))))))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4200161496278108604ULL)))) ? (((((/* implicit */int) arr_15 [i_5] [i_1] [7U] [i_5] [i_1] [i_2])) + (((/* implicit */int) arr_15 [i_7 + 1] [i_0] [(signed char)9] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [(short)1] [i_7 - 1] [i_5] [i_2] [i_1] [i_0]))))));
                        }
                        arr_33 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 14246582577431443001ULL))));
                        arr_34 [i_0] [i_1] = ((/* implicit */unsigned char) var_5);
                    }
                }
            } 
        } 
    } 
}
