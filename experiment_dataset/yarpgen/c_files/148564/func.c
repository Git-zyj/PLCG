/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148564
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
    var_18 = ((/* implicit */unsigned char) max((var_18), ((unsigned char)128)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned char) ((unsigned char) var_17))))));
                var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) - (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) : (((arr_0 [i_0]) + (((/* implicit */unsigned int) arr_1 [i_1] [i_0])))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) var_5);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((long long int) arr_6 [i_3 + 3] [i_3 + 2] [i_3 + 2])) - (max((((/* implicit */long long int) arr_0 [i_3 + 1])), (((long long int) (unsigned char)128))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] &= ((_Bool) max((arr_9 [i_1] [i_4] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_1]), (((/* implicit */unsigned char) var_2))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_3] [i_4] [i_3 - 1]))) + (arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_3])))) ? (arr_11 [i_0] [i_2] [(unsigned char)11] [i_2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3] [i_0] [i_1] [i_2] [i_3 + 1] [i_4])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */int) (unsigned char)128))))) ? (((arr_6 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) (unsigned short)34437)) - (34408))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) -1661820682)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))))));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)34224);
                    arr_17 [(signed char)0] [(signed char)0] [i_1] [i_0] = (+(((/* implicit */int) ((short) arr_2 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_23 [0U] [(_Bool)1] [i_5] [i_5] [i_0] [i_0] [(signed char)3] = ((((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_6] [i_5])) | (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_6] [i_0])))) & ((~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_5])))));
                                var_23 = ((/* implicit */unsigned short) ((unsigned long long int) arr_8 [4ULL] [i_1]));
                                var_24 += ((/* implicit */unsigned int) arr_15 [i_5] [i_0]);
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 1564593068U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_28 [i_1] [i_8] [(signed char)8] [2ULL] [i_1] |= ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_11 [i_9] [i_5] [i_1] [i_0]) : (arr_22 [i_0] [i_0]))) - (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [0] [i_5]))))))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)114)))))));
                                var_27 -= ((/* implicit */int) ((((arr_11 [i_9 + 2] [i_1] [i_9 + 2] [i_5]) >> (((arr_11 [i_0] [i_1] [i_9 + 1] [i_1]) - (4144651681U))))) & (arr_11 [i_1] [i_1] [i_9 + 2] [i_8])));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((9LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_1] [i_5] [i_8] [i_9 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_0])) >> (((((/* implicit */int) (unsigned char)50)) - (26)))))) : (((2730374228U) & (1564593068U)))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((unsigned char) ((17417353649377114402ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))));
    var_30 = ((/* implicit */_Bool) var_10);
}
