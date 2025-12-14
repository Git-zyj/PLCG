/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114940
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 26U))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61970)))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((arr_1 [i_0 + 1]), ((~(-2750705817700990404LL))))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((max((((int) (unsigned short)61970)), (min((arr_3 [i_1]), (((/* implicit */int) arr_2 [i_1])))))) | (((((/* implicit */_Bool) ((var_8) / (4294967285U)))) ? (arr_3 [i_1]) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((max((arr_14 [(unsigned short)4]), (((/* implicit */unsigned long long int) (unsigned short)61995)))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5])) | (((/* implicit */int) (unsigned short)3565))))), ((~(4409510754571899606LL)))))));
                            arr_16 [i_3] [i_3] [10U] [i_1] [10U] = ((/* implicit */int) ((unsigned char) ((int) 290494800U)));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4294967287U))) || (((/* implicit */_Bool) (short)23637))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6]) : (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [10ULL] [i_3])));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned short) 1734242248U)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) 4294967270U);
                            var_24 = ((/* implicit */short) var_17);
                            arr_23 [i_7] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4740726119484760386LL)) ? (((((/* implicit */_Bool) 4004472496U)) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 290494783U)))) : (((/* implicit */unsigned long long int) ((long long int) 4294967277U)))));
                            var_25 = ((/* implicit */short) -7212792693824572218LL);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967269U)) ? (((((/* implicit */_Bool) -1200524392)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))) : (4294967285U))))));
                        }
                        arr_24 [i_1] [(short)6] [i_2] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5643)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [9] [9] [i_2] [i_3] [5])) : (((/* implicit */int) (short)4619))))), (max((((/* implicit */unsigned int) min((arr_4 [i_1]), ((_Bool)1)))), (290494800U)))));
                        var_27 = ((/* implicit */unsigned short) ((unsigned int) -4740726119484760368LL));
                        var_28 ^= ((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) 290494799U)))) ? (((/* implicit */int) ((short) (unsigned short)65525))) : (((/* implicit */int) (!(((/* implicit */_Bool) 268435455))))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((var_3) ? ((+(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])) ? (var_5) : (arr_20 [(short)4] [(short)0] [i_2] [i_2] [i_3])))))))))));
                }
            } 
        } 
    } 
}
