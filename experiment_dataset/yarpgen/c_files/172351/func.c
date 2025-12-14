/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172351
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((unsigned long long int) arr_3 [(short)6] [i_1] [(unsigned short)10]);
                var_11 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [5U] [i_1])) & (((/* implicit */int) var_6))));
                var_12 ^= ((/* implicit */_Bool) ((signed char) ((1520531692U) << (((/* implicit */int) (_Bool)1)))));
                var_13 ^= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [11] [i_1]))) : (arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)208), ((unsigned char)34))))) & (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_7 [13U] [i_3]))))))))));
            var_14 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_3])))))));
            arr_13 [i_2] [i_2] = (unsigned short)16012;
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_7 [i_2] [i_3]))) && (min((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_19 [i_2] [i_3] [i_4] [i_2] [(short)10])))));
                        var_16 += ((/* implicit */unsigned short) (unsigned char)71);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned int) arr_18 [i_2] [i_3] [i_3] [i_5] [i_6]);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (short)27851)) << (((((long long int) arr_3 [i_6] [i_4] [i_2])) - (23LL)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) var_9);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) (unsigned short)49529)))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) arr_3 [i_2] [i_3] [(unsigned char)15]))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-27841))) - (-6067850031876792339LL))))))));
                            arr_27 [i_2] [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) ((min((-1207018363285982256LL), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_15 [i_3])))), (((((/* implicit */_Bool) (short)-27828)) || (((/* implicit */_Bool) (unsigned char)126)))))))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((arr_10 [i_2] [i_2] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49501)) | (((/* implicit */int) arr_7 [i_2] [i_4]))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) arr_31 [(unsigned char)4] [(unsigned char)4] [i_8] [i_9]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (int i_11 = 4; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_37 [i_2] [i_2] [(unsigned char)14] [i_2] [i_11 + 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_11 + 2])) != (((/* implicit */int) arr_0 [i_11 - 4]))))), (max((((/* implicit */unsigned long long int) (unsigned char)232)), (arr_28 [i_11 + 3] [i_8])))));
                                var_22 = ((/* implicit */signed char) ((unsigned int) min((((int) var_0)), (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)1))))))));
                                var_23 = ((/* implicit */long long int) ((((max((arr_34 [i_2] [i_8] [i_9] [i_10]), (((/* implicit */unsigned int) (unsigned char)3)))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)1134))))) + (579182296U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_29 [i_12] [i_12])) > (((/* implicit */int) (_Bool)1))))))));
        arr_40 [i_12] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-96))))), (((arr_23 [i_12] [i_12] [6ULL] [i_12] [i_12] [i_12] [(short)5]) - (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned short)2] [0LL])))));
    }
}
