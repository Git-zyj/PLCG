/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10149
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) -9223372036854775795LL))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */long long int) arr_2 [i_1])), (9223372036854775787LL))) : (((9223372036854775795LL) + (((/* implicit */long long int) arr_2 [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) 17585199923558440425ULL)) ? (var_1) : (((/* implicit */unsigned long long int) arr_3 [(unsigned char)11] [(unsigned char)11] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_1 - 1]) : (((/* implicit */int) arr_0 [i_0] [i_1 - 2])))))));
            var_13 = ((/* implicit */int) ((((((((/* implicit */int) var_5)) > (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (7608954007627247482LL))))) <= (((((arr_1 [i_1]) < (1109855132U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)31)) : (var_7)))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_8)))))));
            arr_4 [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)220)) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((max((((/* implicit */unsigned int) var_9)), (arr_1 [i_0]))) + (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-65)) + (2147483647))) >> (((arr_3 [i_0] [i_0] [i_1]) - (3168260343U))))))))));
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)43)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)61))))), ((+(arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((arr_0 [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1]))))) : (min((((/* implicit */unsigned int) (short)-26)), (arr_3 [i_1 - 1] [i_1 - 2] [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_0 [i_2] [i_2])) + (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) || ((!(((/* implicit */_Bool) var_8))))))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_0 [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_7 [i_3 - 1])))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-23650)) | (arr_2 [i_0]))) & (((((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_2] [i_0])) & (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_3 - 2])))))));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)16))))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [1ULL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1] [i_2] [i_2] [11ULL]))) : (arr_1 [i_3])))))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65506)) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_1)))))));
                var_19 = ((/* implicit */_Bool) (signed char)-10);
            }
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_16 [i_0] [(short)1] [i_5] = ((/* implicit */short) (-(var_0)));
                var_20 = ((/* implicit */unsigned short) (((!(((arr_9 [i_0] [i_0] [i_4] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_0]))))))) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5])))));
                var_21 = ((/* implicit */unsigned long long int) var_5);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (-9223372036854775787LL)))), (((arr_11 [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1782143930) : (arr_2 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))) : (((arr_14 [i_0] [i_4] [(unsigned short)7]) ? (-7608954007627247482LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))));
            }
            for (int i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-9223372036854775772LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6] [i_6 + 2])))))) ? (((/* implicit */int) arr_14 [i_6 + 2] [i_6 + 2] [i_6 + 2])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_6 - 1] [i_6] [i_6 + 2]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    var_24 += ((((((/* implicit */_Bool) arr_22 [i_7] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (arr_24 [i_7] [i_0] [i_0] [i_4] [i_0]))) - (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_7])));
                    var_25 = ((/* implicit */signed char) arr_20 [i_6 - 1] [i_6 - 1] [i_6 + 1]);
                    var_26 ^= ((((/* implicit */_Bool) 4294967280ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-9223372036854775787LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))))))) : (((((/* implicit */_Bool) 17597287615662936181ULL)) ? (16695094670112057686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8]))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                var_27 = ((/* implicit */long long int) arr_0 [i_8] [i_4]);
                var_28 = ((((/* implicit */_Bool) 849456458046615436ULL)) ? (((/* implicit */int) arr_23 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [i_0]))))));
                var_29 = ((/* implicit */unsigned long long int) ((arr_14 [i_8] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */int) arr_14 [i_8] [i_8 - 1] [i_8 - 2])) : (((/* implicit */int) arr_14 [i_8] [i_8 + 1] [i_8 - 1]))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_0 [7] [7]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) + (arr_3 [i_8 + 1] [i_8 + 1] [i_8 + 1])));
            }
            arr_27 [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))) != (arr_10 [i_0]))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_4]))) : (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) == (((/* implicit */int) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44680)))))))) ^ (min((((/* implicit */unsigned int) arr_30 [i_9] [(signed char)12])), (arr_28 [i_10])))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) -7608954007627247482LL)) ? (((/* implicit */int) arr_32 [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_9] [i_9])))) >= (((/* implicit */int) ((arr_28 [i_10]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
        }
        for (short i_11 = 1; i_11 < 23; i_11 += 1) 
        {
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) arr_30 [i_9] [i_11]))))) ? (((((/* implicit */int) arr_30 [i_11] [i_11])) / (var_7))) : (((/* implicit */int) arr_33 [i_11 + 1] [i_11] [i_9])))) & (((/* implicit */int) arr_32 [i_9] [i_11])))))));
            var_34 = ((/* implicit */unsigned int) max((min((var_1), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_9] [i_9])) > (((/* implicit */int) arr_30 [i_11 - 1] [i_9])))))));
            arr_35 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_31 [i_11 + 1] [i_11 + 1]))))) > (((((/* implicit */_Bool) arr_32 [i_11 + 1] [i_11 + 1])) ? (arr_31 [i_11 + 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11 - 1] [i_11 - 1])))))));
            var_35 = ((/* implicit */_Bool) arr_29 [i_9]);
            var_36 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_29 [i_11])) ? (((/* implicit */int) arr_32 [i_9] [i_9])) : (((/* implicit */int) (signed char)22)))) ^ (max((((/* implicit */int) arr_29 [i_11])), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_33 [i_9] [i_11] [i_9]))))))));
        }
        var_37 = ((/* implicit */int) arr_33 [i_9] [i_9] [i_9]);
    }
    var_38 = ((/* implicit */int) min((var_38), ((+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-110))))))))));
    var_39 = ((/* implicit */int) 7ULL);
}
