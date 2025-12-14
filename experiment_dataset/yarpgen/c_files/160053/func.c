/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160053
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
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) != (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_12))))))) && (((/* implicit */_Bool) var_14))));
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0 + 1] [(_Bool)1] [4]))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_0] [12] = ((/* implicit */_Bool) ((arr_0 [i_0 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) == (arr_7 [(signed char)10] [i_1] [i_2])))))));
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_2]);
                arr_10 [i_0] [i_0] |= ((arr_1 [i_0 - 2]) && (arr_1 [i_0 - 1]));
            }
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_3])) >> (((/* implicit */int) arr_1 [i_0])))) / (arr_2 [i_0] [i_0] [i_3])));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_20 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_3])) % (arr_2 [i_0] [i_3] [10ULL])))) == (((arr_6 [i_3] [i_3] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_3])))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0])) == (((((/* implicit */int) arr_14 [i_0] [i_3] [i_4] [i_4])) + (((/* implicit */int) arr_1 [i_3]))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_12 [i_0] [i_3] [i_4]))));
                            arr_22 [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1])) | (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                            arr_23 [(signed char)1] [i_5] [(signed char)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((arr_15 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) & (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                            arr_24 [i_0] [i_3] [i_4] [i_5] [i_6] [i_0 + 2] = ((/* implicit */short) ((((((arr_16 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_5] [i_0 + 2]))))) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) ^ (arr_7 [i_0 - 2] [i_3] [i_4]))) + (8216304350677660839LL)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_3])) > (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_28 [i_0 + 1] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                var_24 = ((((/* implicit */int) arr_25 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1])) / (((/* implicit */int) arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2])));
            }
        }
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_25 ^= ((/* implicit */unsigned short) ((arr_16 [i_0 + 2]) - (arr_16 [i_0 - 1])));
            arr_31 [i_0] |= ((/* implicit */short) ((((((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2])) ^ (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_8])))) ^ (((((/* implicit */int) arr_1 [i_8])) & (((/* implicit */int) arr_20 [i_0 + 1] [(unsigned short)15] [i_0 + 1] [i_0] [i_0]))))));
        }
        var_26 = ((/* implicit */unsigned long long int) ((arr_18 [(short)12]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))))));
        var_27 = ((/* implicit */short) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]);
        arr_32 [7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [(unsigned short)11] [i_0 + 1]))) >= (arr_6 [i_0] [i_0 - 2] [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_9])) * (((/* implicit */int) arr_33 [i_9]))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9])) && (((/* implicit */_Bool) ((arr_34 [i_9] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9]))))))));
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_13))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_14)))))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_15))))) > (((/* implicit */int) var_9)))))));
}
