/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165692
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) >> (((((var_7) & (((/* implicit */unsigned int) -1945025785)))) - (201343236U))))) & (max((min((3839807442U), (((/* implicit */unsigned int) (unsigned short)31721)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_0))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) < (((/* implicit */long long int) arr_0 [i_0] [i_0]))))), ((unsigned char)31)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [(short)0]))))));
            arr_6 [(unsigned short)8] [i_1] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))));
            var_21 = ((/* implicit */long long int) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) max((-1945025756), (arr_0 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]))) : (max((var_13), (((/* implicit */unsigned long long int) arr_1 [0LL] [i_1])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0])), (((arr_4 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((long long int) arr_4 [i_3 - 2])));
                        arr_13 [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) max((-1061588969), (-1945025763)))) >= (arr_4 [i_1]))) ? (1945025740) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_1]);
                            var_22 = ((/* implicit */_Bool) ((unsigned short) ((arr_1 [i_3 - 4] [i_3]) | (arr_1 [i_3 - 2] [i_3]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */long long int) -1731988159)), (-11LL)))) ? (min((var_17), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((-1945025763), (((/* implicit */int) (unsigned char)0))))), ((+(arr_17 [4U] [i_1] [(signed char)4] [i_5]))))))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)15457)), (((((/* implicit */unsigned int) 1945025729)) / (arr_17 [i_1] [i_1] [i_3] [i_5])))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) arr_9 [i_2] [i_3] [i_1]))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])) : (min((((/* implicit */unsigned long long int) var_14)), (arr_11 [i_1])))))));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_10 [i_5] [i_3] [i_1] [i_0])) ? (arr_11 [i_1]) : (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned short)7] [i_2] [i_3 - 3] [i_5])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_24 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 1] [i_3] [i_2] [i_1] [i_0] [i_0]))) - (-6833624463333530101LL))));
                            arr_25 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_23 [i_6] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]);
                            arr_26 [i_1] [i_1] [i_3] [i_6] = ((/* implicit */long long int) var_3);
                            var_23 = ((/* implicit */_Bool) var_1);
                        }
                        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)16)) ? ((~(((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned short) (signed char)114))))))))));
                            arr_29 [i_1] [i_1] [i_1] [i_3] [i_7] = ((long long int) ((((((/* implicit */int) (short)-17445)) + (2147483647))) << ((((+(((/* implicit */int) arr_5 [i_0])))) - (22364)))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) 13892544261816282212ULL);
                arr_34 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29)) != ((~(((/* implicit */int) (signed char)-102))))))), ((((+(var_13))) / (((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_0] [i_0] [i_8] [i_0] [i_9] [i_8]), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9])))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_8] [i_11 + 1] [i_8] [i_11 + 3] [i_11]))));
                            arr_43 [i_8] [i_8] [i_10] [i_11] = var_4;
                            arr_44 [i_8] [i_8] [i_10] [i_10] [i_8] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_7)))))) & (arr_23 [i_12] [i_12] [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 1] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            arr_49 [i_10] [i_8] |= (!(((/* implicit */_Bool) arr_17 [i_0] [i_10] [i_0] [i_0])));
                            arr_50 [i_0] [i_8] [i_10] [i_8] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_0] [i_8] [i_10] [i_13] [i_14] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_47 [i_0] [i_8] [i_10] [i_13] [i_10] [i_8])));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) 1945025756)) : (arr_4 [i_14])));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_35 [i_10] [i_10] [i_8] [(short)4])))) - (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_8] [i_8] [i_10]))));
            }
        }
    }
}
