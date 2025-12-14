/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131400
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
    var_20 = ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_3 [i_0])), (((arr_3 [i_1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (((/* implicit */int) arr_3 [i_0]))))) : (max((((/* implicit */unsigned int) arr_3 [(short)0])), (arr_1 [(unsigned char)8])))))));
                arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)8339)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) arr_7 [i_2 + 1]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_12 [i_2] = (_Bool)1;
            var_22 = arr_6 [i_2] [i_2];
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_11 [i_2] [i_2 + 1] [i_2]) && (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_13 [i_4])))))))) << (((((/* implicit */int) var_13)) - (85)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_24 += ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) var_17))));
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_2 + 1]))));
            }
            var_26 = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_4])) || (((/* implicit */_Bool) arr_15 [i_2] [i_4] [(_Bool)1] [i_4]))))))))));
            var_27 = ((/* implicit */unsigned char) (+((~((-(5022112383338339423ULL)))))));
            var_28 ^= ((/* implicit */short) (((((-(((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1])))) + (2147483647))) >> ((+(((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1]))))));
        }
        arr_18 [i_2] = min(((+(min((var_1), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))), (((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) / (arr_5 [i_2] [i_2]))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_23 [i_6] [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_7])), (((((/* implicit */_Bool) arr_17 [i_7 - 2] [i_2 - 1] [i_2 - 1] [(unsigned char)15])) ? (arr_6 [i_7 - 3] [i_2 - 1]) : (arr_6 [i_7 + 1] [i_2 - 1])))));
                    arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) | (((((/* implicit */_Bool) arr_19 [i_7] [i_6])) ? (arr_22 [i_2] [i_2 - 1] [i_6] [i_7 + 1]) : (arr_6 [(unsigned char)11] [(_Bool)1])))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) min((((/* implicit */short) arr_7 [i_7])), ((short)-14260))))))) : ((+(((/* implicit */int) arr_7 [i_2 + 1]))))));
                    var_29 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? ((-(16614108877302006972ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1])))));
                    arr_25 [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7])) ? (((((/* implicit */_Bool) arr_13 [i_6])) ? (arr_5 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((arr_11 [i_2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */unsigned long long int) arr_13 [i_6])) : (arr_6 [(_Bool)1] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_2 - 1]))) : ((+((+(arr_13 [i_7])))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_28 [i_8] [i_6] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_6]))) > (((((/* implicit */unsigned long long int) arr_13 [2ULL])) & ((+(arr_6 [i_2] [i_6])))))));
                        var_30 = ((/* implicit */short) (signed char)-101);
                    }
                }
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned long long int) min(((+((-(((/* implicit */int) arr_30 [i_9])))))), ((-(((/* implicit */int) (short)-26851))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))) / (max((max((arr_29 [i_9]), (((/* implicit */unsigned int) arr_30 [i_9])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_30 [i_9])))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_10]))) < ((+(((var_18) << (((var_7) - (13786221985937221000ULL)))))))));
        arr_35 [i_10] &= ((/* implicit */short) (signed char)71);
        arr_36 [(_Bool)1] = ((/* implicit */signed char) arr_33 [i_10]);
        /* LoopNest 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 3; i_12 < 8; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_33 = ((/* implicit */short) ((max((((arr_13 [i_10]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10] [1ULL] [i_11] [1ULL]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-830))) == (8074231577631715648ULL))))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_38 [i_10] [i_11 - 1] [i_12 - 3]))))));
                        var_34 &= ((/* implicit */_Bool) (+(((arr_21 [i_11 - 1] [(signed char)2] [i_12]) ? (((/* implicit */int) arr_21 [i_11 - 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_21 [i_11 - 1] [(short)4] [(short)4]))))));
                        arr_47 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) (~(arr_1 [i_10])));
                    }
                } 
            } 
        } 
    }
    var_35 += var_2;
}
