/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118745
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
    var_19 = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22903))) != (var_9)))))) * (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) < (var_3))))));
    var_20 = ((/* implicit */unsigned int) ((min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)51))))))) - (((/* implicit */long long int) (~(((((/* implicit */unsigned int) var_5)) ^ (var_16))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)-1))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_1] [(unsigned char)5] [i_0 - 2])) ? (((/* implicit */int) var_10)) : (arr_8 [i_0 - 1] [i_1] [i_1])))) != (((((/* implicit */_Bool) 8141405366206054468LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 6433288715891472199LL)))))))));
                            var_23 |= ((/* implicit */unsigned short) ((4194303) != (((/* implicit */int) (unsigned char)56))));
                            var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_12 [i_4] [i_3 + 1] [8ULL] [i_3] [8ULL] [(unsigned char)10] [i_2 - 2])))) * (((/* implicit */int) max((((/* implicit */short) ((signed char) arr_12 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_4]))), (arr_6 [i_0 + 1] [2U] [2U]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((arr_8 [i_0 - 1] [i_2 - 3] [i_3 - 1]) > (arr_8 [i_0 + 1] [i_2 - 2] [i_3 + 1])));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_1] [i_0]))))))));
                            arr_21 [i_0 + 2] [(short)0] [i_1] [i_1] [i_0] [i_1] [(unsigned char)3] = ((/* implicit */long long int) (unsigned short)64017);
                        }
                    }
                    for (unsigned int i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_1 [i_0]))) - (min((var_9), (((/* implicit */long long int) arr_1 [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_7 = 4; i_7 < 11; i_7 += 4) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_6 + 1] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_6 - 2] [i_7 - 1]))) : (((((/* implicit */_Bool) arr_4 [(signed char)4] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3522234058U))));
                            var_27 = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_6] [i_7 + 1]))) + (arr_9 [i_0 + 1] [i_1] [i_0] [i_0])));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_8] [i_0] [i_2 + 1] [1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-3829712463892627637LL))))));
                            arr_32 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0 + 1])))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            arr_37 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((arr_7 [i_0 - 1]) > (arr_7 [i_6])))) != ((-(arr_7 [i_0])))));
                            arr_38 [i_0] [0] [i_2 - 3] [i_9] [0ULL] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)16237))));
                            var_28 = (~(min((((/* implicit */long long int) ((unsigned char) 8388607LL))), (var_9))));
                        }
                    }
                    arr_39 [i_2] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) arr_29 [i_0] [i_1] [i_2 + 1] [i_0 + 1] [i_2 - 3] [i_2 - 2]))), ((~(arr_29 [i_2] [i_1] [i_0 - 2] [i_0 + 1] [i_2 - 3] [i_0 - 2])))));
                    var_29 = ((/* implicit */unsigned char) ((_Bool) ((long long int) (unsigned short)64442)));
                    var_30 = ((/* implicit */long long int) ((short) (-(-1))));
                }
            } 
        } 
        arr_40 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((var_5), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_35 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1]) & (arr_35 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])))))) : (58720256U)));
    }
}
