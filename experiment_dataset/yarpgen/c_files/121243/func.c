/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121243
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
    var_16 = ((short) (unsigned char)255);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned short)65524)), (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_1 + 2]))))));
                var_18 = ((/* implicit */long long int) ((int) min((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_3 [i_0] [i_0] [i_0]))), (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)251)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((signed char) max((arr_3 [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned long long int) max((-9223372036854775796LL), (arr_0 [i_0]))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((max((min((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [11LL] [11LL]))), (((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_2 - 1]))))), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 + 3] [i_2 + 1] [i_4 + 1])) || (((/* implicit */_Bool) -9223372036854775796LL)))))));
                                var_21 = ((/* implicit */unsigned char) ((short) min((arr_7 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_1 - 1] [i_4 + 2]), (arr_7 [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_4 + 2]))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_1 + 2] [i_3] [i_4 + 1])), (arr_5 [i_1] [(signed char)7] [i_1 + 2] [i_4])))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_1] [i_1 + 2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 2] [i_1 - 1] [i_4]))) : (arr_5 [(_Bool)1] [i_1] [i_1 + 2] [i_3]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) : (arr_5 [i_0] [i_3] [i_1 + 2] [i_1]))))))));
                                var_23 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((412226809) | (max((((/* implicit */int) arr_7 [i_2 + 2] [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 3])), (var_4))))))));
                        var_25 = ((/* implicit */_Bool) max((9223372036854775784LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)12)), ((unsigned short)65024)))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)-20)))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)228)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 1] [10] [i_1 + 1] [i_5 + 2])))));
                        var_27 = ((/* implicit */int) arr_0 [i_0]);
                        arr_15 [i_0] [i_1 + 1] [i_0] [i_5 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13378))) & (((unsigned int) arr_13 [i_0] [i_0] [i_2] [i_5 - 1] [i_2] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_2] [i_2 + 1] [i_1] [i_1] [i_1 + 1]), (arr_7 [i_2 + 2] [i_2 + 2] [i_2] [i_1 + 3] [i_1 + 3]))))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)127))) & (4193728566U)))), (7619710829025953066LL)))));
                    }
                    for (int i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (min((arr_4 [i_1 - 1] [i_6 + 2]), (((/* implicit */unsigned char) (signed char)10))))))) ? (min((max((((/* implicit */int) (short)-5)), (939070967))), (((/* implicit */int) (!(((/* implicit */_Bool) 1458377684U))))))) : (((((/* implicit */int) arr_9 [i_2 + 1] [i_6 + 1] [i_2 + 1] [i_2 + 1] [i_1 + 3] [i_0])) | (((/* implicit */int) arr_9 [i_2 + 1] [i_6 + 1] [i_2 + 1] [i_0] [i_1 + 3] [i_2 + 1]))))));
                        arr_18 [i_0] [i_0] [i_1] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_1 + 2] [i_1] [i_0] [i_0])) ? (-356715071637605525LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_1 + 3]), (arr_8 [i_0])))))));
                        arr_19 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */short) max((arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 2]), (arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 2])));
                        var_29 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) arr_8 [i_0]))))))));
                        arr_20 [i_0] [i_6] = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_13 [i_6 + 2] [i_6] [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_1]))));
                    }
                }
                arr_21 [i_0] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)23)), (arr_7 [i_1] [i_1] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_0])))))));
            }
        } 
    } 
}
