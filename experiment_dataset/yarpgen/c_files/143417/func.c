/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143417
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
    var_13 = ((/* implicit */signed char) ((var_5) ? (((/* implicit */unsigned int) var_8)) : (var_3)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        arr_12 [i_0] [(_Bool)1] [(signed char)12] [i_3 - 1] [(_Bool)1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_3 + 1])))) * ((-(((/* implicit */int) (unsigned short)41184))))));
                        arr_13 [i_0] [i_1] [15U] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), ((+(((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_8 [9] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [(unsigned short)13] [i_1] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37340))));
                        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37342))))) ? (((((((/* implicit */int) arr_5 [i_2])) + (2147483647))) << (((((/* implicit */int) (unsigned short)37366)) - (37366))))) : (((((/* implicit */_Bool) arr_11 [(_Bool)1] [(unsigned short)3] [i_2] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_4] [12] [i_1])) : (var_0)))))) ? (3155637289U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_1 - 1])), ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) var_6);
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 1139330006U))))), (arr_19 [i_5] [i_2] [i_1 + 1] [i_0])))), ((-(var_3)))));
                        arr_23 [i_5] [i_2] [i_2] [(signed char)12] [i_0] = ((/* implicit */unsigned char) 4247890552379155130LL);
                    }
                    arr_24 [(_Bool)1] [i_1 + 2] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 4; i_9 < 8; i_9 += 4) 
                {
                    arr_36 [i_8] [i_6] [i_7] [8ULL] [i_6] [i_9] = ((/* implicit */unsigned long long int) (+(4247890552379155130LL)));
                    arr_37 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_18 [i_9] [13] [i_9 + 3] [i_9 - 4] [i_6] [(unsigned char)16])))) ? (max((var_3), (arr_18 [i_9 + 4] [i_9] [i_9] [i_9 - 3] [i_9] [i_9]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_9 - 1])))))));
                    arr_38 [i_8] [i_6] [(signed char)7] [i_9 + 2] = ((/* implicit */short) ((-4247890552379155119LL) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)181)))))));
                    arr_39 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) 1139330007U);
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_45 [i_11] [i_10] [i_6] [3U] [2U] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6]))) | (max((arr_35 [i_6] [i_8] [i_6]), (((/* implicit */unsigned long long int) min((541239400U), (arr_14 [i_7] [6] [i_10] [i_11 + 1]))))))));
                        arr_46 [i_6] [i_10] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((var_11) | (arr_32 [i_6] [i_7] [i_8]))));
                    }
                    arr_47 [(_Bool)1] [i_7] [i_6] = ((/* implicit */long long int) arr_7 [i_6] [i_6] [i_6] [i_6]);
                }
                arr_48 [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) 596950417)), (3753727908U))) != ((-(3155637304U)))));
                arr_49 [i_6] [i_7] [i_7] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_8] [i_7]) & (3155637291U)))) ? (((/* implicit */long long int) 3753727907U)) : (min((((var_6) ? (4247890552379155151LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))), (((/* implicit */long long int) max((var_11), (((/* implicit */int) arr_43 [i_6] [i_8] [i_8] [i_8] [i_7])))))))));
            }
            arr_50 [(_Bool)1] [i_7] &= ((/* implicit */signed char) arr_6 [(signed char)16] [i_6] [i_7]);
        }
        arr_51 [(unsigned short)2] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)55))));
    }
}
