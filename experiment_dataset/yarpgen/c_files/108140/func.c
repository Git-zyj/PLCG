/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108140
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((arr_5 [i_0] [i_0]) % (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)12387)))))));
                    var_19 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [16LL] [i_1] [i_1])) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        arr_20 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_11), (((/* implicit */unsigned int) (unsigned short)12368)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (arr_6 [i_3 - 2] [i_4] [i_5])))))))) ? ((((!(((/* implicit */_Bool) arr_5 [i_3] [(signed char)9])))) ? (max((var_3), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)31316)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_5] [i_6 + 1] [i_6 + 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12493))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned char)1] [13U] [i_5] [(unsigned char)1])) && (((/* implicit */_Bool) (unsigned short)53149))))))))));
                        arr_21 [i_3] [15U] [15U] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) arr_7 [i_3] [i_3] [18U] [i_4])))) + (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6 + 1]))))));
                        arr_22 [i_3] [i_4] [i_3] [6U] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_15))), ((~(523196024)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (arr_11 [i_3] [i_3] [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)12386))))) : ((-(var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -6004414472848698796LL)) ? (((/* implicit */int) arr_17 [i_3] [i_3 + 2] [i_6 - 1])) : (((/* implicit */int) arr_17 [i_3] [i_3 + 2] [i_6 - 1])))))));
                        arr_23 [(unsigned char)14] [(unsigned char)14] [i_4] [i_3 + 2] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((arr_4 [0U] [i_5] [i_5] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3])))))))), (((((/* implicit */_Bool) arr_15 [i_6 + 4] [i_6 - 1])) ? (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_15))))) : (max((arr_5 [5U] [i_4]), (((/* implicit */long long int) (unsigned short)12387))))))));
                    }
                    for (int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [(unsigned char)15] [i_7]))) : (arr_25 [i_7 + 2] [i_5] [i_7] [i_5] [i_5]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (arr_4 [10ULL] [i_7] [i_7] [i_4]))))));
                        var_21 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (unsigned short)0)))))) ? (((/* implicit */int) arr_12 [i_3] [i_4] [i_5])) : (((((arr_19 [(short)21] [i_4]) && (((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_26 [i_3] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3 + 2])))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_30 [(signed char)1] [i_4] [i_5] [i_8 + 3] [i_8] = (!(((/* implicit */_Bool) var_16)));
                        arr_31 [i_3] [i_3] [(signed char)10] [i_3] = ((/* implicit */unsigned char) 523196024);
                    }
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2714)) ? (((((/* implicit */_Bool) (unsigned short)53166)) ? (((/* implicit */int) (unsigned short)53148)) : (((/* implicit */int) (unsigned char)209)))) : (((/* implicit */int) min(((unsigned short)2714), (((/* implicit */unsigned short) (unsigned char)100)))))));
                    var_23 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) 3489347005U);
    var_25 = ((/* implicit */unsigned long long int) var_7);
}
