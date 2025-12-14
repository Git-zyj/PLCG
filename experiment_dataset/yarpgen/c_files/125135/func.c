/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125135
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_18)), (var_5)));
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)10733))) || (((2146959360U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-((~(8950248958696393754LL)))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1 - 3] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [8ULL]))))) * (((((/* implicit */long long int) var_1)) / (var_16))))))));
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_1 - 3]));
                        var_23 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (((long long int) (unsigned short)54530))))) ? (((((/* implicit */_Bool) ((int) arr_0 [i_3]))) ? (((/* implicit */int) (unsigned char)108)) : (((((/* implicit */_Bool) arr_0 [10])) ? (((/* implicit */int) var_18)) : (var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-21882))))));
                        arr_11 [i_0] [i_1 + 3] [(unsigned char)21] [i_3] [(unsigned char)8] [i_1] = (~((~((~(((/* implicit */int) (unsigned char)162)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */short) ((max((((/* implicit */int) (unsigned short)54530)), (2028895424))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_2] [i_4] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */int) var_18)) >= (arr_9 [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 4])));
                            arr_20 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22843)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_0]))));
                            var_24 = ((/* implicit */signed char) ((unsigned int) (unsigned short)51107));
                            arr_21 [i_0] [i_1 + 1] [(unsigned short)16] [i_4] [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                            var_25 = ((int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_5])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_15))));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_8)), (var_5))), (min((var_5), (((/* implicit */unsigned short) var_14))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-32)), (arr_8 [i_1 - 3] [i_2] [i_4])))) ? (21488950) : (((/* implicit */int) arr_1 [i_0])))))));
                    }
                    arr_23 [4U] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)0)))));
                    var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [2ULL] [i_1 + 2] [i_1])) ? (-5449610806311483836LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1 - 3] [i_1]))))), (((/* implicit */long long int) max((((/* implicit */int) var_5)), (2007074116))))));
                }
            } 
        } 
    } 
}
