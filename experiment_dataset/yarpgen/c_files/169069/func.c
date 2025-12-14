/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169069
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
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_2] [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_6))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */short) ((unsigned short) (unsigned short)55408));
                        arr_13 [i_0] [i_2] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)-34)) | (((/* implicit */int) (signed char)-1)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [(signed char)4] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) (unsigned short)10127)) : (((/* implicit */int) var_12))))) % (var_8)))));
                        var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (unsigned short)44142)), (arr_3 [i_0]))))) ? (9223372036854775807LL) : (max((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)33))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)234)) >> (((((/* implicit */int) arr_4 [i_0])) - (46100))))))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [12LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) -1LL);
                            var_14 = ((/* implicit */unsigned short) (unsigned char)113);
                            var_15 = ((/* implicit */unsigned char) (~(arr_6 [(unsigned short)10] [i_0] [i_1])));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 70364449210368LL)) ? (-4912946664375654042LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47701)))))) || (((/* implicit */_Bool) (unsigned short)55408)))))));
                        }
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_3);
                            var_17 += ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)17960))));
                            var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_2] [i_1] [i_5]), (((/* implicit */unsigned short) (short)-5883)))))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_1]);
                            arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((arr_1 [i_0]), (((/* implicit */long long int) arr_18 [i_0] [i_0] [(unsigned short)13]))));
                            arr_27 [i_6] [i_1] [i_2] [(unsigned short)0] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) (signed char)-34)))));
                            var_19 = (unsigned short)15;
                        }
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            arr_30 [(unsigned short)13] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_10 [i_0 + 3] [(unsigned char)14] [i_2] [i_3] [i_3] [i_7])))), (((/* implicit */int) ((((((/* implicit */int) arr_14 [(unsigned char)15] [i_2] [i_2] [i_1] [i_2] [i_7] [i_1 + 2])) / (((/* implicit */int) (unsigned short)33354)))) <= (((/* implicit */int) arr_19 [i_1])))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((-(arr_6 [i_3] [i_1 + 2] [i_3]))) - ((~(arr_6 [i_3] [i_1 + 2] [i_3]))))))));
                            arr_31 [i_1] [(unsigned short)4] [(unsigned short)4] [0ULL] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_15 [i_1] [i_1] [(unsigned short)8] [i_1 + 1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 2] [17LL])))) : (min((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1] [i_3])), (arr_15 [i_1] [(unsigned char)7] [i_1 + 2] [i_1 - 1] [i_1])))));
                        }
                    }
                    arr_32 [i_1] [(short)9] [i_2] [i_0] = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_11);
                                var_22 |= ((/* implicit */unsigned short) arr_10 [9] [i_8] [i_2] [i_2] [i_1 + 2] [i_0]);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1232810110342436850LL)) ? (((((/* implicit */_Bool) ((signed char) arr_22 [i_8] [i_1] [(unsigned short)11] [i_1] [(unsigned short)11]))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_36 [i_1] [i_9] [i_8 - 1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_35 [i_0] [i_1 - 1] [i_2] [(signed char)5] [i_8] [i_2])) : (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_8] [i_9] [i_2])))))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1 + 2] [i_1] [i_8]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? ((+(-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)35863))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_1 + 1] [i_2] [i_2])) < (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 4] [(unsigned char)5] [i_0 + 4]))))) : (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (signed char)-1);
    var_26 = ((/* implicit */unsigned short) var_2);
}
