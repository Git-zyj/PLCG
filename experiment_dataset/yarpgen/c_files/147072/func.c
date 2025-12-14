/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147072
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)127)) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108)))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (1547490209U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)19))))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)128)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))) : (((/* implicit */int) max((var_9), (((/* implicit */signed char) (!(arr_0 [i_0])))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-13))))) ? (1031236678U) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)20005))), (((/* implicit */unsigned short) arr_0 [i_1]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((/* implicit */int) arr_8 [i_2] [i_2]);
            var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) arr_8 [i_0] [i_2])) : (((/* implicit */int) min((arr_8 [i_0] [i_2]), (arr_8 [i_0] [i_2]))))))));
            arr_10 [i_0] [i_2] [i_0] &= ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) var_8))))) ^ (((/* implicit */int) arr_8 [i_0] [i_2])))), (((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned short)65523))))));
            var_14 = ((/* implicit */short) ((int) (-((+(arr_4 [i_0] [i_2]))))));
        }
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            arr_14 [i_0] [i_3] = ((/* implicit */short) arr_4 [i_3 - 1] [i_3]);
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_4 - 1])), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56683))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) (signed char)-5))))) ? (((var_3) ? (arr_4 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_4] [3])))))))))));
                        arr_21 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122)))))))), ((signed char)122)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 65535)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
            var_17 = ((/* implicit */int) arr_22 [i_0] [i_0]);
        }
        arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_3 [(_Bool)1] [i_0] [i_0])), ((short)4095)))) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) : ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
    }
    var_18 = ((((/* implicit */int) var_5)) / (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            {
                arr_30 [i_7] = ((/* implicit */unsigned char) arr_29 [i_7] [i_7] [i_8]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (var_11)));
                    arr_33 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1042587080U)) ? (-65541) : (((/* implicit */int) (unsigned char)168))));
                }
                for (unsigned char i_10 = 3; i_10 < 11; i_10 += 2) 
                {
                    arr_36 [i_7] [i_7] [i_8] [i_7] = arr_20 [i_10 + 3] [i_10 + 1] [i_10 - 2] [i_10];
                    arr_37 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_19 [i_7] [i_10 + 1] [i_7] [i_7])) > (((/* implicit */int) arr_19 [i_7] [i_10 - 2] [i_7] [i_7])))), (((_Bool) arr_19 [i_7] [i_10 + 1] [i_7] [i_7]))));
                    var_20 = ((/* implicit */unsigned long long int) arr_17 [i_7]);
                    arr_38 [i_7] [i_8] [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_8] [i_10 - 1] [i_10]))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_45 [i_7] [i_8] [i_8] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-4095))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)27857)), (arr_24 [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10))))) : (arr_40 [i_8] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 + 1])))));
                                arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */unsigned long long int) min((arr_4 [i_7] [i_7]), (arr_4 [i_7] [i_7])))) : ((~(var_0)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) 
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */int) arr_43 [i_7] [i_13 + 3] [i_7])) > (((/* implicit */int) arr_43 [i_7] [i_13 - 2] [i_13 - 2]))));
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 10; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7] [i_7] [i_13] [i_13]))) : (arr_4 [i_7] [i_7])))));
                                arr_54 [i_7] [i_7] [(unsigned short)2] [(unsigned short)2] [i_7] [(unsigned short)2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8] [i_13 + 3] [i_14] [i_15])) || (((/* implicit */_Bool) arr_35 [i_7] [i_8]))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
                {
                    arr_58 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_7] [i_16])))) : (arr_40 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                    var_23 -= ((/* implicit */int) arr_55 [i_7] [i_8] [i_8] [i_16]);
                }
                for (short i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_8] [i_8])) : (((/* implicit */int) (short)27857))))) - (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)65523))))) : ((~(arr_35 [i_8] [i_8])))))));
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((unsigned short)1263), (((/* implicit */unsigned short) ((var_4) >= (((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_8] [i_8]))) <= (921838201U)))) : (((/* implicit */int) arr_17 [i_7]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_3)))) ? (((/* implicit */int) var_9)) : (max(((-(((/* implicit */int) (unsigned short)31744)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
