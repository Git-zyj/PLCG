/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138969
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
    var_11 += (+(((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388592U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65524))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)4095))))) : (arr_2 [i_2])))) : (((((unsigned long long int) var_6)) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_2] [i_2] [i_2] [i_0 + 1]), (((/* implicit */short) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = (+(((((/* implicit */_Bool) (short)12052)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (short)(-32767 - 1))))));
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_6))));
                            arr_15 [i_0 - 2] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (~(var_4)));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)96))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_0] [i_0] [i_0]))) : (8062589573682224539ULL))))) : (((/* implicit */unsigned long long int) (+(var_0))))));
                        }
                    } 
                } 
            }
            arr_16 [i_0] [i_1] [(signed char)2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)20)) ? (9ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0 + 1]))))))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((((/* implicit */long long int) var_4)) / (arr_2 [i_0]))))))));
            arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_1])))) >= (((/* implicit */unsigned long long int) (~(var_0))))))) : (((/* implicit */int) ((arr_7 [i_0 - 2]) >= (arr_7 [i_0 - 1]))))));
            var_14 += ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_3 [(unsigned short)10] [(unsigned short)10])), (arr_9 [(signed char)20]))) >= (arr_9 [(unsigned char)12])));
            arr_18 [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_1]);
        }
        arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)110)) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0] [i_0]))))) : (25ULL)));
        var_15 ^= ((/* implicit */unsigned int) (((+((-(arr_0 [i_0]))))) >= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_8 [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]))), (var_4))))));
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (unsigned char)255);
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)6))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_6 - 1] [i_6 + 1] [i_6 + 1]))))) ? (max((-765336128), (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 1] [i_6 + 1])))) : (((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 1] [i_6 + 1]))))));
                    var_20 = var_7;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                {
                    arr_31 [i_9] [i_5] [i_5] [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((unsigned int) var_4))))), ((+(22ULL)))));
                    arr_32 [i_9] [i_9] [i_5] = ((/* implicit */long long int) ((arr_8 [i_5] [i_8] [i_8] [i_5] [i_9] [i_9]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_2 [i_9])))) ? ((~(((/* implicit */int) (unsigned short)12)))) : (((/* implicit */int) arr_3 [i_9] [20ULL])))))));
                }
            } 
        } 
    }
}
