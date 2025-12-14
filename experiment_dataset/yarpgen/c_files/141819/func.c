/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141819
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)8507)))) / (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_0]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) max((arr_0 [i_3]), (arr_7 [8LL] [i_1] [i_0] [i_1] [i_0] [i_1])))) - (((var_8) ? (((/* implicit */int) (unsigned short)19975)) : (((/* implicit */int) arr_2 [i_0]))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)29);
                        var_12 *= ((/* implicit */unsigned long long int) arr_7 [i_0] [(_Bool)1] [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */short) arr_0 [i_2]);
                            arr_19 [i_0] = arr_15 [i_0] [i_0] [i_0];
                        }
                        arr_20 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))), (var_0)));
                        var_14 = min((((unsigned long long int) 7850190819232791938ULL)), (((/* implicit */unsigned long long int) arr_3 [i_0])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_0] [4ULL] [i_6] [i_0] = ((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_6] [(short)14]);
                            arr_28 [i_0] [i_6] [i_0] [i_1] [i_0] = arr_13 [i_0] [i_6] [15ULL] [i_0];
                            var_15 = ((/* implicit */_Bool) (+(111692564537726159ULL)));
                        }
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_2] [i_6] [9ULL] = ((/* implicit */unsigned long long int) ((var_5) ? ((~(((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_0))));
                            arr_34 [i_0] [i_0] [(short)14] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (arr_8 [i_6] [i_6] [i_6] [i_6])));
                            var_16 += arr_16 [i_8] [i_6] [i_6] [i_1] [i_0];
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_2]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            var_18 *= ((/* implicit */short) max((arr_35 [i_6] [18LL] [i_1] [i_6] [i_6] [(short)4]), (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_6] [i_6] [i_1] [i_2] [i_6] [i_9])))));
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))));
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)53)))), (((arr_32 [i_0] [(unsigned short)18] [i_0] [i_0] [i_0] [i_0]) && (var_8)))))), (18335051509171825457ULL)));
                            var_21 = arr_32 [i_6] [i_1] [i_2] [i_6] [i_9] [i_6];
                        }
                    }
                    arr_38 [i_0] = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (_Bool)1);
}
