/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117341
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) (+(((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */int) (unsigned short)46253)))) : (((/* implicit */int) (short)-16384))))), (((var_7) ? (var_4) : (arr_1 [i_0])))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) max(((signed char)-117), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))) ^ ((((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? ((+(((/* implicit */int) arr_6 [i_1])))) : (((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)-116))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_8 [i_1] [i_1] [i_2 - 2])));
                    var_18 = ((/* implicit */int) var_4);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [4LL])) || (((/* implicit */_Bool) (signed char)-117))))))) : ((+(((/* implicit */int) (unsigned short)8191))))));
        arr_16 [i_4] = ((/* implicit */unsigned int) arr_9 [i_4] [i_4] [i_4]);
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 4; i_6 < 13; i_6 += 3) 
            {
                arr_23 [i_4] [i_6] = ((/* implicit */long long int) var_14);
                arr_24 [i_4] [i_6] [i_6] [i_6 + 2] = var_0;
            }
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_4)))) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) : (((((/* implicit */int) arr_21 [i_4] [i_5])) / (((/* implicit */int) arr_6 [6U]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned short)57342)) : (((/* implicit */int) (unsigned char)0))))) || (arr_4 [i_4] [i_4])))) : (((/* implicit */int) var_9))));
            arr_25 [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) max((arr_8 [i_4] [i_4] [i_5]), (((/* implicit */long long int) (unsigned char)243))))) * (max((((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_4])), (arr_18 [i_4] [i_5] [i_5])))))));
            arr_26 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (arr_15 [i_4] [i_4]) : (arr_15 [i_4] [i_5])))) ? (min((arr_15 [i_4] [i_5]), (arr_15 [i_4] [i_5]))) : (arr_15 [i_4] [i_4])));
            arr_27 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_5);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_21 -= ((/* implicit */int) arr_28 [i_7]);
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_4))));
            arr_32 [i_4] [i_7] [i_7] = ((/* implicit */_Bool) var_6);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) arr_18 [i_8] [i_8] [i_4]);
            arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) var_8);
        }
        arr_36 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) / (12018337813889226381ULL))), (((/* implicit */unsigned long long int) max((arr_33 [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) (unsigned char)243))))))))));
        arr_37 [i_4] [i_4] = ((/* implicit */int) arr_6 [i_4]);
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_43 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(arr_12 [i_9] [i_9] [i_9]))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_9] [i_9]), (((/* implicit */short) arr_6 [i_10])))))) : (arr_20 [i_10] [i_10] [i_10] [i_10])));
                arr_44 [i_9] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) | (((/* implicit */int) arr_28 [i_9]))))), (arr_22 [3ULL] [i_10] [i_9] [i_9])))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_9])) ? (arr_31 [i_9] [i_10] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57)))))) ? ((-((-(arr_1 [i_11 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11] [i_10] [i_9])) ? (((/* implicit */int) arr_11 [i_9] [i_12])) : (arr_38 [i_9])))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) (signed char)103)) << (((var_6) + (8532819090109823109LL))))))))));
                            arr_50 [6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)227)))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) < (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_9 [i_9] [i_10] [(signed char)5])) - (37937)))))))) : (((((((/* implicit */_Bool) 6428406259820325235ULL)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned char)0)))) << (((((/* implicit */int) arr_9 [i_11 - 1] [i_11] [i_11 + 1])) - (37934)))))));
                            arr_51 [i_9] [i_9] [i_11] [i_9] [(_Bool)1] = ((/* implicit */int) ((_Bool) (-((-(arr_17 [i_9] [i_11] [i_12]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
