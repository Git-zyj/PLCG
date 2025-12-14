/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121062
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((/* implicit */_Bool) arr_2 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((int) arr_1 [17U] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (var_4)));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_4 [i_2 - 1]))));
            var_16 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((((/* implicit */int) (signed char)-93)) >= (((/* implicit */int) (unsigned char)24))))))), (max((((/* implicit */int) arr_1 [i_1] [i_2 + 3])), (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)16949))))))));
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    arr_15 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) arr_5 [i_3]);
                    arr_16 [i_1] [i_1] [i_3] [i_4 - 1] |= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_11 [i_2 + 2] [i_3 - 2] [i_4 - 1] [i_4 + 1]))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((int) (unsigned char)255))), (arr_0 [i_1]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_2] [i_4 - 1]), (((/* implicit */unsigned short) arr_14 [i_1] [i_2] [i_3] [i_4 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)95)) < (((/* implicit */int) var_3))))) : (arr_3 [i_1])))))))));
                }
                arr_17 [i_2 + 2] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                arr_18 [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)25458)) ? (((405754674905115668ULL) + (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)244))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_2 + 4])))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)83)))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6 + 1] [i_5])))))));
                    var_19 *= ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_13 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 2]), (arr_13 [i_6 - 2] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 1]))))));
                    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (134201344) : (((/* implicit */int) (signed char)-61))))) & (min((((/* implicit */unsigned long long int) var_11)), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
                    arr_26 [i_1] [i_5] = ((/* implicit */unsigned short) 4294967274U);
                }
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_0))));
                            var_22 = ((unsigned int) ((493789149) ^ (((/* implicit */int) (unsigned char)246))));
                            var_23 = ((/* implicit */short) (unsigned short)23748);
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((((+(var_8))) >> (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) + (111))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_10])))))));
            arr_36 [i_1] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_1] [i_10]))))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) < (min((4294967295U), (((/* implicit */unsigned int) arr_24 [i_1] [i_1] [i_1] [i_1]))))));
        }
        var_26 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1] [i_1]))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_28 [i_1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-93))))) : (((((/* implicit */_Bool) arr_28 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) : (var_6)))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 2) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_11] [i_11])) ? (((/* implicit */int) arr_1 [i_11] [i_11 + 1])) : (((/* implicit */int) arr_38 [i_11] [i_11 - 1]))))) ? (4294967289U) : (((((/* implicit */_Bool) var_10)) ? (3591605087U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        arr_40 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_11 + 2] [i_11 - 1])) : (((/* implicit */int) arr_38 [i_11 - 1] [i_11 + 1]))));
    }
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    var_31 = min((var_5), (var_9));
}
