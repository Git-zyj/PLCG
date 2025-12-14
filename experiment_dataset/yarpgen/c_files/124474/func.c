/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124474
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (+(((((/* implicit */int) ((short) 4279687146U))) & ((-(((/* implicit */int) arr_1 [19LL] [(_Bool)1])))))))))));
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 + 1]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) : (((/* implicit */int) ((unsigned short) var_3)))));
        arr_4 [i_0] = ((/* implicit */short) ((((arr_1 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)43442)) : (((/* implicit */int) arr_2 [i_0])))))) * ((+((~(((/* implicit */int) var_11))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17830))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17830))) & (((1003698546U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */int) 3038009622U);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_14 *= arr_11 [i_3];
                var_15 += ((/* implicit */unsigned char) (short)-1);
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    arr_19 [(_Bool)0] &= var_6;
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_1] [i_4 + 1] [i_1 + 2])))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 1) 
                {
                    arr_23 [i_1] [i_1] [i_1] [i_1] [i_5] [i_2] = ((/* implicit */unsigned long long int) (short)-9531);
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_2]))));
                    arr_24 [i_1] [i_2] [i_3] [i_2] [(unsigned short)8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)32969)))) ? (arr_5 [i_1 + 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_18 [i_2] [i_5] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_2])) : (((/* implicit */int) var_9)))))));
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5865)) / (((/* implicit */int) (unsigned short)24576))));
                    arr_25 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)1)) - (((/* implicit */int) (signed char)0))));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    arr_28 [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) (short)-12854);
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) 4384334030899428411LL);
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-921)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (short)-1))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        arr_35 [i_8] [i_2] [i_2] [i_2] = ((/* implicit */int) 7358466047427877699ULL);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_30 [i_6] [i_6]))) ? (((/* implicit */int) arr_14 [12])) : (((((/* implicit */int) arr_30 [i_6] [i_3])) ^ (((/* implicit */int) arr_18 [2ULL] [2ULL] [i_6] [i_6] [i_1] [i_3])))))))));
                        arr_36 [i_2] [(short)1] [i_3] [i_3] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) / (((11088278026281673934ULL) & (((/* implicit */unsigned long long int) var_10))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_1 [i_1 - 1] [i_1 - 1]))));
                        arr_37 [i_1] [i_1] [13LL] [13LL] [i_2] [2LL] = ((/* implicit */unsigned short) (-(arr_5 [i_1 + 2])));
                    }
                    arr_38 [i_2] [i_2] [(_Bool)1] [(unsigned short)3] = ((/* implicit */unsigned char) (!(((arr_20 [i_1] [i_1] [i_1] [9] [(unsigned short)4]) == (((/* implicit */unsigned long long int) arr_22 [i_2] [i_6]))))));
                    var_24 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) var_11)))));
                    arr_39 [(_Bool)1] [i_2] [i_2] [5] = ((/* implicit */short) ((_Bool) arr_1 [(unsigned char)6] [i_1 - 1]));
                }
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (494951612371758848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        arr_44 [i_1] [i_2] [i_3] [i_9 + 1] [i_10 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned short)33040))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_7 [i_3] [i_9 + 1]))));
                        var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_21 [i_2] [i_2] [i_2] [18ULL]))))));
                        arr_45 [i_2] [i_2] [i_10 + 2] = ((/* implicit */short) (-(((1ULL) + (2204018792607374667ULL)))));
                        arr_46 [14LL] [i_3] [2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)16] [(_Bool)1] [(unsigned short)16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (arr_5 [i_1])))) ? (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39790)) - (((/* implicit */int) (signed char)-106)))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_27 *= ((/* implicit */unsigned int) ((long long int) arr_31 [i_1] [i_2] [3ULL] [i_9] [i_9]));
                        var_28 = ((int) (!(((/* implicit */_Bool) arr_7 [i_3] [(signed char)9]))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_1] [(_Bool)1]))))) ^ (((/* implicit */int) arr_43 [18U] [0] [i_9 + 1] [(short)16] [i_1 + 1] [i_1 + 1] [18U])))))));
                    }
                    arr_49 [i_2] [7ULL] [7ULL] [(unsigned short)1] [i_9 + 1] = ((/* implicit */signed char) arr_30 [i_1] [i_1 + 2]);
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-(arr_27 [i_9 + 1] [(unsigned char)10] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                }
            }
        }
        arr_50 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)46)), (-1635108987)));
        var_31 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> ((((-(((/* implicit */int) (short)-32765)))) - (32762)))))), ((-((~(var_6)))))));
    }
    var_32 = ((/* implicit */long long int) var_9);
    var_33 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (10ULL)));
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (6ULL)))) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))))) : (((/* implicit */long long int) min((1635108987), (((/* implicit */int) (short)-12815)))))));
}
