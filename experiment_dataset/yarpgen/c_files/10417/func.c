/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10417
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (0ULL)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_0 [i_0]))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_8))), (((/* implicit */unsigned long long int) ((unsigned short) 0ULL)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (18446744073709551615ULL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        var_20 = ((unsigned short) var_8);
                        var_21 = ((/* implicit */int) ((unsigned short) (+(-2076401014))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 - 1] [i_4] = ((/* implicit */unsigned char) ((int) arr_7 [i_4 + 1] [i_1]));
                            var_22 = ((/* implicit */unsigned int) ((int) -844996431));
                        }
                        arr_16 [i_1] [(unsigned short)1] = ((unsigned int) ((unsigned long long int) var_14));
                        arr_17 [1U] [i_0] [i_1] [i_1] [i_2] [i_3] = arr_7 [i_0] [i_1];
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_24 [i_1] = ((/* implicit */unsigned int) var_16);
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_6 [(unsigned short)11] [i_1] [(short)10] [i_1])), (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */unsigned int) 27)) : (3452362779U)))));
                                arr_25 [i_1] = arr_23 [i_0] [i_6] [6U] [15] [i_6] [i_5];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_35 [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (+(((((var_8) ^ (((/* implicit */unsigned long long int) arr_34 [i_7] [i_8] [i_9] [i_7])))) ^ (max((((/* implicit */unsigned long long int) 595743689U)), (var_8)))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 154219172U)), (((((/* implicit */_Bool) 2828040253U)) ? (arr_37 [i_7 - 1] [i_7 + 3] [i_7 + 2] [(unsigned char)14]) : (arr_37 [19ULL] [i_9] [i_8] [i_7 + 1])))));
                        var_25 = ((/* implicit */unsigned short) var_14);
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned short) max((36), (((/* implicit */int) (unsigned char)125)))));
                    }
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((arr_37 [i_7 - 2] [i_7 + 3] [i_7 + 2] [i_7 - 1]), (((/* implicit */unsigned long long int) ((unsigned char) min((var_6), (((/* implicit */int) (unsigned short)0)))))))))));
                    var_28 = ((/* implicit */unsigned long long int) var_16);
                    arr_39 [i_7 - 2] [i_8] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_32 [i_7 + 3] [i_7] [i_7 + 3])) * (var_5)))) ? (((/* implicit */unsigned int) ((arr_34 [i_7] [i_7 + 3] [i_7 - 3] [i_7]) / (arr_34 [i_7] [i_7 + 2] [i_7 + 3] [i_7])))) : ((-(var_12)))));
        arr_40 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(16120913565387905667ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(-844996416)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)1))) | (1315529721U)))))) : (((((/* implicit */_Bool) arr_37 [i_7] [i_7 - 3] [i_7] [i_7 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [0] [i_7] [12] [i_7])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)33189)))))))));
        arr_41 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1010661320)) ? (arr_26 [i_7 - 3]) : (((/* implicit */unsigned long long int) arr_34 [i_7] [(unsigned short)7] [(unsigned short)21] [i_7]))))))) ? (13455666239814647956ULL) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_7] [i_7] [13U])))) : (arr_26 [i_7])))));
    }
    var_30 = ((/* implicit */unsigned short) ((unsigned long long int) (short)13393));
}
