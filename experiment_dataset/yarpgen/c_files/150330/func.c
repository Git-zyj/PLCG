/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150330
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
    var_13 = max(((short)-450), (((/* implicit */short) (_Bool)1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                arr_11 [(unsigned short)0] [(short)8] [i_2] [i_2] [i_2] [i_2] = (short)0;
                                arr_12 [i_0] [i_1] [i_2] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] &= ((/* implicit */unsigned int) (_Bool)1);
                                arr_14 [0] [i_1] [i_2] [(_Bool)1] [i_4] = ((/* implicit */signed char) (short)-429);
                            }
                            /* LoopSeq 3 */
                            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                arr_19 [(short)9] [i_2] [i_2] [(short)10] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61716)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2617467439U)) ? (((/* implicit */int) arr_17 [12] [11] [4])) : (((/* implicit */int) (_Bool)1))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10634)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)10633)), (1ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (signed char)-83))))) : (((/* implicit */int) arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
                                arr_20 [(short)5] = ((/* implicit */signed char) ((short) (signed char)-91));
                                arr_21 [(short)0] [i_1] [i_1] [(short)10] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (short)-10644)) : (((/* implicit */int) (short)12909))))) ? (((/* implicit */int) (short)-10634)) : (-57640940)));
                                arr_22 [(_Bool)1] [(short)3] [(short)3] [i_3] [(signed char)2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0] [(short)6] [i_5] [i_3 + 1])) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)33251)) == (((/* implicit */int) (short)10644)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 + 1] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1])) == (((/* implicit */int) (signed char)34))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                            {
                                arr_27 [2U] [2U] [(short)5] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (short)-27407)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (arr_10 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]));
                                arr_28 [3] [i_1] [i_1] [i_2] [i_2] [i_3] [3] = ((/* implicit */int) (signed char)-6);
                                arr_29 [(short)3] [i_6] &= ((((/* implicit */_Bool) (short)-10641)) ? (((((/* implicit */_Bool) -1589030549)) ? (((/* implicit */int) (unsigned short)33239)) : (((/* implicit */int) arr_8 [i_3] [i_1] [i_2] [i_3] [i_6] [i_2] [i_2])))) : ((~(((/* implicit */int) (short)-4675)))));
                                arr_30 [1ULL] [(signed char)0] [i_2] [i_3 + 1] [1] = ((short) arr_8 [i_3 + 1] [i_1] [(signed char)11] [i_3] [9U] [i_3] [i_1]);
                            }
                            for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                            {
                                arr_34 [i_0] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -2147483633)) : (((18446744073709551606ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [(short)4] [i_0] [i_3 + 1] [i_3] [i_3] [i_7])))))))) ? (((((/* implicit */_Bool) (short)-8937)) ? (arr_24 [(short)11] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */int) (short)3256)))) : (((/* implicit */int) (short)3265))));
                                arr_35 [i_7] [i_3 + 1] [i_2] [i_1] = ((/* implicit */int) ((unsigned int) (_Bool)1));
                            }
                        }
                    } 
                } 
                arr_36 [(short)3] [i_1] [3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)25)) ? (16062279929747770480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
            }
        } 
    } 
}
