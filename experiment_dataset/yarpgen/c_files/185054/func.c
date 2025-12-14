/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185054
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0 + 2]))));
                        arr_12 [i_0 - 1] [i_0] [i_1 + 2] [i_2] [i_1] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) var_9))))));
                        arr_13 [(unsigned short)1] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) arr_10 [(unsigned short)14] [i_2 - 1] [i_2 + 1] [i_1] [(unsigned char)8]);
                        var_18 = ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */long long int) arr_1 [i_2 - 1] [i_1 + 2])) : (arr_3 [i_0] [i_1]));
                        arr_14 [i_0] [i_1] [i_1] [(unsigned short)5] = ((/* implicit */signed char) var_4);
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_2 - 1] [i_4] [i_1] = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2] [i_1] [i_0]);
                            var_19 = ((/* implicit */unsigned long long int) ((signed char) ((_Bool) (!(((/* implicit */_Bool) arr_9 [i_4] [i_5]))))));
                            arr_21 [i_0] [(_Bool)1] [i_2] [i_1] [i_5] = ((/* implicit */long long int) (signed char)118);
                        }
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) * (var_15)));
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)90)) ? (((max((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */long long int) (signed char)-119)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-119)) ? (792491313U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned short)2] [i_0] [0ULL] [i_4])))))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((short) (signed char)118))))))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4]))));
                        arr_22 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)164)) | (((/* implicit */int) (unsigned char)208))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_28 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_0 + 1] [i_2 + 1] [i_1 + 2])), ((unsigned short)63612))))) | (((unsigned int) arr_6 [i_0 + 1] [i_2 + 1] [i_1] [i_6]))));
                        arr_29 [i_0] [i_0] [i_2] [i_2 - 2] [i_2] [i_1] = ((/* implicit */unsigned short) ((min((((var_15) << (((((/* implicit */int) var_8)) + (38))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_0] [i_1])), (3542923147U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_4 [i_1 + 2]))))))))));
                        var_23 = ((/* implicit */short) ((long long int) ((short) var_10)));
                        arr_30 [i_1] = ((/* implicit */unsigned int) (-(max(((-(arr_10 [i_0] [i_1] [i_0] [i_6] [(unsigned short)4]))), (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_2] [i_0 + 1])) ? (var_4) : (arr_25 [i_2] [i_2] [(_Bool)1] [i_0 + 1])))))));
                        var_24 = ((/* implicit */long long int) (unsigned short)37788);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((signed char) min((((/* implicit */int) arr_5 [(short)0] [i_1 - 1] [i_2 - 2])), ((~(((/* implicit */int) (signed char)54))))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])))))))))));
                        var_27 ^= ((/* implicit */_Bool) (signed char)-118);
                    }
                }
                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [(signed char)12] [14LL]))));
                arr_34 [i_0] [i_1] [i_1] = ((/* implicit */short) min(((+(((/* implicit */int) (short)4088)))), (((/* implicit */int) max((arr_32 [i_0] [i_1] [i_0] [i_1]), (arr_32 [i_0 + 1] [i_1] [i_1] [i_1 + 2]))))));
            }
        } 
    } 
}
