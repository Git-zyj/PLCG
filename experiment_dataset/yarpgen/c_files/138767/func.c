/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138767
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_3))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) min(((+(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) (unsigned short)28939))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_13 [i_3 - 2] [i_2] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned short)65525)))))));
                            arr_22 [i_3] [i_3] = ((unsigned short) (+(((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                var_17 = ((17592186044415ULL) - ((~(786432ULL))));
                var_18 = (~(var_4));
                var_19 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6] [(unsigned short)12]))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) 18446726481523507206ULL)))) ? (((/* implicit */int) arr_24 [(unsigned short)15] [(signed char)7] [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6 - 2] [i_6] [i_2] [i_2])))))));
            }
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1])))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3637438135U)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)46)))) / (((/* implicit */int) var_9)))))));
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (17592186044434ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)8)))))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        {
                            arr_35 [i_1] [i_1] [(unsigned short)18] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_8] [(unsigned short)22] [i_8 + 1] [i_8 + 3] [i_8] [i_8])) ? (((/* implicit */int) arr_31 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8] [i_8])) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_8 + 2] [i_8] [i_8] [i_8]))));
                            arr_36 [i_1] [i_7] [i_8] [(unsigned short)11] [i_8] [i_10] = (unsigned short)9339;
                        }
                    } 
                } 
            } 
            arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65519))));
            arr_38 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7] [i_1] [i_1] [i_1] [i_1] [i_7])) * (((/* implicit */int) arr_18 [i_1] [i_7] [i_7] [i_7] [i_1] [i_1]))));
        }
        arr_39 [i_1] |= ((/* implicit */signed char) ((unsigned short) arr_15 [i_1]));
    }
}
