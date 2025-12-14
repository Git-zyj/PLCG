/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113626
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [(signed char)8] [3] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [i_0])) - ((-(((/* implicit */int) arr_6 [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) 3714538175192734999ULL);
                    }
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned char) arr_2 [(unsigned char)3]);
                        arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & ((+(((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5])) / (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) 14732205898516816625ULL)));
                        arr_21 [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_15)))) ? (-1307517308444525318LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [9ULL] [(unsigned char)2] [i_2] [i_5])))));
                        arr_22 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 2]))));
                    }
                    arr_23 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    var_19 = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0] [i_0]);
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [(_Bool)1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [(signed char)8])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1] [(unsigned short)12]))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(var_9)));
    var_22 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((var_9) % (min((var_12), (((/* implicit */int) var_5))))))), ((+(var_1)))));
    var_23 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                var_24 = ((/* implicit */short) arr_28 [i_7]);
                var_25 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_6] [i_7]))))) ? ((-(((/* implicit */int) arr_28 [i_7])))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_6])) ? (((/* implicit */int) arr_3 [i_6] [i_7] [(signed char)2])) : (((/* implicit */int) arr_13 [i_6] [i_7]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_26 = ((/* implicit */int) max((var_26), (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) / (14732205898516816617ULL)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_15 [i_6] [i_7] [i_8] [i_8])) / (((/* implicit */int) (unsigned char)201)))))) ^ (((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8 + 2])) : (((/* implicit */int) arr_18 [i_8] [(unsigned char)9] [i_8] [i_8 + 1]))))))));
                    arr_33 [i_8] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_8] [i_7] [i_8] [i_8])), (var_1)))) && (((/* implicit */_Bool) arr_24 [(signed char)5] [(signed char)5]))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (4294967295U)))) ? (((/* implicit */int) arr_1 [i_8 + 1])) : (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8]))))))));
                }
                arr_34 [i_7] [i_7] [i_7] = ((/* implicit */signed char) 14732205898516816617ULL);
                var_27 *= ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_6] [i_6])) | (max((((/* implicit */int) min((arr_26 [9LL]), (((/* implicit */unsigned char) arr_25 [i_6]))))), ((~(((/* implicit */int) arr_9 [i_7] [12] [i_7] [i_6] [i_7]))))))));
            }
        } 
    } 
}
