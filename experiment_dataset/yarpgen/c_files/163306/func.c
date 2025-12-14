/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163306
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) max((((unsigned int) (short)32767)), (((/* implicit */unsigned int) var_1))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) == (arr_2 [i_0 + 1])));
                    arr_13 [i_0 + 1] [i_1] [i_1] [i_2] = ((/* implicit */short) var_0);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1])) - (((/* implicit */int) arr_6 [5LL] [5LL] [i_0 + 1]))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_0 - 1]);
                    arr_17 [i_0 + 1] [i_0] [i_3] = ((/* implicit */unsigned long long int) max((min((arr_5 [i_0] [i_0] [i_0 + 1]), (var_1))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) || (((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_5 [i_0] [13ULL] [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0 - 1] [i_4] [i_3] [i_4] [i_5 - 1] [i_3])) == (((/* implicit */int) arr_3 [i_3])))))))) & (((((/* implicit */int) ((arr_16 [i_5 + 1] [i_0 + 1] [i_0 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5 - 1] [i_4] [i_3] [i_1] [i_0])))))) | ((~(((/* implicit */int) var_11))))))));
                                var_21 ^= ((/* implicit */long long int) ((((arr_9 [i_0 - 1] [i_5 - 2]) + (arr_9 [i_0 + 1] [i_5 + 3]))) <= (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_14 [i_4] [i_4])))), (((/* implicit */int) arr_1 [(unsigned char)15])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_6 [i_3] [i_1] [i_0]) || (((/* implicit */_Bool) arr_14 [(short)5] [i_3])))) || (((/* implicit */_Bool) ((arr_18 [i_0] [i_0 - 1] [i_0] [i_1] [i_3] [i_3]) ? (((/* implicit */int) arr_22 [i_0] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_3] [i_0 + 1] [i_1] [i_1] [i_3] [i_3]))))))))) % (((((unsigned long long int) arr_21 [i_3] [i_3] [1LL] [i_1] [i_1] [i_3])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_6] [i_1] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_6 [8ULL] [8ULL] [(unsigned short)0])))))) ^ (max((arr_4 [i_0]), (((/* implicit */long long int) arr_14 [i_0 + 1] [i_6])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) < (((/* implicit */int) arr_1 [i_0 + 1]))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0 + 1])) % (((/* implicit */int) arr_1 [i_0 - 1])))));
                    arr_25 [i_1] [i_1] = ((/* implicit */_Bool) (((~(((unsigned int) arr_15 [i_0 + 1] [(unsigned short)8] [i_1] [(unsigned short)10])))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                    arr_26 [i_6] &= ((/* implicit */unsigned short) arr_24 [i_6] [i_1] [i_6] [i_0]);
                    arr_27 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))) ? (((unsigned long long int) arr_10 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))) || (((/* implicit */_Bool) arr_14 [i_1] [i_6]))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_32 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (arr_31 [i_7] [i_1] [i_0] [i_0 - 1])))) >= (arr_28 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? (((((/* implicit */int) arr_21 [4LL] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1])) | (((/* implicit */int) arr_21 [2LL] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))) : ((~(((/* implicit */int) (signed char)86))))));
                    arr_33 [i_7] [i_0 - 1] = ((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_7]);
                }
                var_25 ^= ((/* implicit */unsigned short) arr_10 [i_0]);
                arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
                var_26 ^= ((/* implicit */short) ((_Bool) (+(arr_16 [i_0 - 1] [(_Bool)1] [i_0 + 1]))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (var_16)));
    var_28 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)-75)), (16171469027366238033ULL)));
}
