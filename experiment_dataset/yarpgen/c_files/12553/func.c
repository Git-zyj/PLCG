/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12553
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1])) ^ (((/* implicit */int) arr_8 [i_0] [i_0]))))))) ? (arr_5 [i_2 + 3] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)14] [i_0 + 2] [i_0] [i_2] [i_3]))))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((min(((+(arr_0 [i_0]))), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) & (arr_5 [i_0] [(short)6] [i_0 + 3] [i_0]))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (arr_7 [i_3] [i_0] [i_1] [i_0]))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (arr_6 [i_0] [(signed char)4] [i_0] [i_2] [(unsigned char)6]) : (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_2 [i_0 + 3]))))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) arr_1 [6ULL] [(unsigned short)10])))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_6 [i_0 + 1] [i_1] [14LL] [i_0] [i_1]) : (arr_6 [(signed char)14] [i_1] [(signed char)14] [i_0 + 2] [(unsigned short)0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [(_Bool)0])) ? (arr_5 [i_0 + 1] [(short)14] [i_1] [(unsigned char)4]) : (arr_7 [i_0] [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [8ULL] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [12ULL]))) : (arr_6 [i_0 + 3] [(short)12] [(short)2] [i_0 + 3] [i_1])))) ? (arr_1 [i_0] [(short)2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [0])))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_15 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4])))))))));
                                arr_27 [i_4] [(unsigned short)3] [0] [i_4] [(unsigned char)20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_18 [i_5] [i_6 + 3] [i_5] [i_5]), (arr_23 [i_4])))) ? (((/* implicit */int) ((arr_23 [i_4]) != (arr_18 [i_4] [20LL] [i_6] [i_8])))) : ((+(((/* implicit */int) arr_22 [(signed char)6] [i_8])))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_26 [i_4] [i_4] [i_4] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4])))))) ? (((((/* implicit */_Bool) arr_19 [i_4])) ? (arr_18 [i_4] [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7]))))) : (((((/* implicit */_Bool) arr_14 [i_6] [(_Bool)1] [i_6])) ? (arr_21 [(signed char)12] [i_5] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))))))) - (420028946734490896LL)))));
                            }
                        } 
                    } 
                } 
                var_20 = max(((((+(arr_18 [i_4] [i_4] [(_Bool)1] [i_5]))) + (((((/* implicit */_Bool) arr_22 [12ULL] [(unsigned char)6])) ? (arr_18 [i_4] [(signed char)17] [(signed char)17] [(unsigned short)4]) : (((/* implicit */long long int) arr_25 [i_4] [i_4] [19LL] [(signed char)20] [(short)10])))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [i_5] [i_5])) || (((/* implicit */_Bool) arr_23 [i_4]))))) >> ((((+(((/* implicit */int) arr_22 [(signed char)18] [i_5])))) - (20785)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                {
                    var_21 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((-(arr_21 [i_11] [i_10] [i_9]))), (((/* implicit */long long int) arr_15 [i_10])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        for (int i_13 = 1; i_13 < 14; i_13 += 3) 
                        {
                            {
                                arr_39 [i_9] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_9] [8ULL])) >> (((((/* implicit */int) arr_14 [i_9] [i_12] [i_13 - 1])) - (22516)))))), ((~(arr_5 [i_9] [i_9] [5U] [i_9]))))), ((((_Bool)1) ? (4679693347529878099LL) : (4679693347529878115LL)))));
                                var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */int) arr_16 [i_9])) == (((/* implicit */int) arr_16 [i_9]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_9] [i_9] [(_Bool)1] [i_13])))))))));
                                arr_40 [i_13] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (+(min(((-(arr_30 [i_9]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9] [i_9])) ? (((/* implicit */int) arr_13 [i_11])) : (((/* implicit */int) arr_12 [i_9] [i_10])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_15] [i_14] [i_9]))) / (arr_21 [i_9] [4LL] [i_14])))), ((+(arr_35 [i_10] [i_9] [i_9] [i_10])))))));
                                var_24 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) ^ (4192256)));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_1 [i_9] [i_14]))));
                                var_26 -= ((/* implicit */short) ((((/* implicit */int) arr_33 [14LL] [(signed char)7] [14LL] [i_14 + 1])) & (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9] [i_10] [i_11])) >= (((/* implicit */int) arr_2 [i_9]))))), (arr_24 [i_9] [i_10] [i_14]))))));
                            }
                        } 
                    } 
                    arr_47 [i_9] [i_9] [8U] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_4 [i_9] [i_10] [(short)15] [4LL]), (arr_16 [i_9])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) arr_38 [i_9] [i_10] [i_10] [i_10] [i_11] [i_9])) : (((/* implicit */int) arr_33 [i_9] [i_9] [i_10] [i_9]))))))) ? (((((/* implicit */int) arr_24 [4ULL] [4ULL] [i_11])) << (((((((/* implicit */_Bool) arr_2 [i_9])) ? (arr_29 [i_9]) : (arr_23 [i_9]))) - (9092672108325427632LL))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_9]) == (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [14]))))))) <= (max((((/* implicit */long long int) arr_11 [i_9])), (arr_29 [i_11]))))))));
                }
            } 
        } 
    } 
}
