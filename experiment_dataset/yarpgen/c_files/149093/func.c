/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149093
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [i_0] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 76282099U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 76282106U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (76282099U)))) : (2702064299601319096ULL)))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1 + 1] [i_1 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -2096684328)) || (((/* implicit */_Bool) 1514332177U))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_9 [i_1 - 1] = ((/* implicit */unsigned long long int) max((arr_5 [i_1 - 1]), (((/* implicit */short) (signed char)-60))));
            var_19 = (-(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_2])));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_20 = ((/* implicit */int) (!(arr_12 [i_1 - 1])));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    arr_19 [i_3] [i_5] = arr_12 [i_1 + 1];
                    var_21 = ((/* implicit */unsigned short) arr_5 [i_3]);
                    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)42383)) | (-2096684322))) % (2096684330)));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_22 [i_6] [i_4] [i_3] [i_1 - 1] = ((/* implicit */unsigned int) -2096684322);
                    var_23 = ((/* implicit */unsigned long long int) (!(arr_10 [i_4] [i_3])));
                }
                for (short i_7 = 4; i_7 < 16; i_7 += 3) 
                {
                    arr_27 [i_7 + 2] [i_7 - 3] [i_4] [i_3] [i_1 + 1] = ((/* implicit */_Bool) arr_20 [i_1 - 1] [i_3] [i_4]);
                    var_24 |= ((/* implicit */_Bool) arr_21 [i_1 + 1] [i_3] [i_4] [i_7 - 1]);
                    var_25 = ((/* implicit */unsigned int) var_13);
                    arr_28 [i_1 + 1] [i_1 - 1] [i_3] [i_4] [i_7 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_7 + 2])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_7 + 1])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_7 - 4]))));
                }
                arr_29 [i_1 - 1] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)970)) ? (((/* implicit */int) (short)14174)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((((/* implicit */_Bool) arr_23 [i_3])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_9)))));
            }
            arr_30 [i_1 - 1] |= ((/* implicit */int) (~(max((arr_14 [i_1 + 1] [i_3] [i_1 + 1] [i_3]), (arr_14 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3654849159U)) ? (arr_21 [i_3] [i_3] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46714)))))) ? (((/* implicit */int) (short)-10346)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_3])))))))) ? ((-(((76282099U) | (((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)49))))))))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2702064299601319096ULL)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_25 [i_1 - 1] [i_3] [i_1 - 1]))))) | (((unsigned long long int) arr_21 [i_1 - 1] [i_3] [i_3] [i_3]))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) max(((-(arr_24 [i_1 - 1] [i_3] [i_3] [i_1 - 1] [i_1 + 1] [i_3]))), (((/* implicit */unsigned long long int) arr_20 [i_1 + 1] [i_3] [i_1 + 1])))))));
        }
        var_29 = min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-2096684322) : (((/* implicit */int) var_3))))), (arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2096684327)) : (arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) max((arr_11 [i_1 - 1]), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_1 - 1])), (arr_3 [i_1 - 1]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_15))));
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 268547327U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) : (4294967287U))), (((/* implicit */unsigned int) ((var_8) <= (((/* implicit */int) (signed char)-40)))))))) ? (((/* implicit */int) ((signed char) (signed char)49))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(1618327213U)))))))));
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-122))));
            }
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_41 [i_10] = (+(((((/* implicit */unsigned long long int) 1618327239U)) * (17432628792341395326ULL))));
            arr_42 [i_10] [8] |= ((/* implicit */int) var_14);
        }
    }
}
