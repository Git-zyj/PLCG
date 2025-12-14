/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182482
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
    var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -12)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)182), (((/* implicit */unsigned char) (_Bool)1))))))))) : (min((((((/* implicit */_Bool) (unsigned char)74)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))))), (((/* implicit */unsigned long long int) (unsigned char)9))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (max((max((((/* implicit */unsigned int) (short)-1)), (arr_4 [i_1]))), (((/* implicit */unsigned int) (unsigned short)18))))));
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 1] [(signed char)8]))) ? (min((arr_3 [i_3 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) ((long long int) 3854014618096847113ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)9))))));
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0]))) : (((/* implicit */int) (unsigned char)204)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)223)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_0]))))), (18446744073709551606ULL)))));
                        var_13 = ((/* implicit */short) min((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned char)223))));
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        arr_18 [i_2] [i_2 + 1] [i_1] [i_2] = ((/* implicit */_Bool) max((min((((((/* implicit */unsigned long long int) -6098353978962164964LL)) | (1ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)15)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            arr_21 [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_12 [(unsigned short)1] [i_2] [(unsigned short)1] [i_5])), (((((/* implicit */_Bool) arr_20 [(unsigned short)3] [(unsigned short)3] [i_2 - 2] [i_2] [i_6])) ? (max((arr_16 [(unsigned short)1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)1]), (var_5))) : (arr_4 [i_2 - 1])))));
                            arr_22 [i_0] [i_2] = ((/* implicit */int) (_Bool)1);
                            arr_23 [i_0] [i_0] [i_0] [i_2] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_2] [i_2 - 1] [i_6]);
                        }
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((min((((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_1])), ((-(((/* implicit */int) arr_2 [(unsigned short)7])))))), (((((/* implicit */int) (unsigned short)6)) & (((/* implicit */int) ((signed char) (unsigned char)204))))))))));
                    }
                    arr_24 [i_1] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_13 [10ULL] [i_0] [i_1] [i_2 - 1] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        arr_27 [i_7] = min((((arr_26 [i_7]) ? (((/* implicit */int) (unsigned short)32532)) : (((/* implicit */int) (unsigned char)75)))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7]))))), (((int) arr_26 [i_7])))));
        arr_28 [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551608ULL)))) && ((!(((/* implicit */_Bool) (unsigned short)2560))))))), (arr_25 [i_7])));
    }
}
