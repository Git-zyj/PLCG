/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140283
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [0ULL] [i_0] = ((((/* implicit */unsigned long long int) arr_0 [i_0])) * (((((((/* implicit */_Bool) 7312922737875525270ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (0ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-120)), ((unsigned char)100))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 = ((166882216) << (((max((var_11), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (var_3))))) - (18121349108487921915ULL))));
                    var_14 = var_11;
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)0)), ((short)29604)))) ? (((((unsigned long long int) arr_7 [11] [i_0] [i_0] [i_0])) - (((unsigned long long int) arr_7 [(signed char)12] [(signed char)12] [(signed char)12] [i_0])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [(signed char)3] [i_0] [i_0])) - (((/* implicit */int) arr_3 [16U] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4 + 3] [i_5])) ? (((((/* implicit */_Bool) (unsigned short)22802)) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_5])))) : (((/* implicit */int) arr_5 [(short)21] [21ULL] [i_5]))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_4 - 1] [i_3 - 3]))));
                        arr_15 [i_3] [i_3 + 1] [(_Bool)1] [(short)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [5ULL] [6U]))))) ? (-1376747269) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_3 [i_0] [6]))))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3 - 2])) ? (arr_10 [i_3 - 2] [i_3 - 1]) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_10 [i_3 - 1] [i_3 - 2])) : (var_2))) : (((/* implicit */unsigned long long int) (+(arr_10 [i_3 - 2] [i_3 - 3])))));
                        var_19 = ((/* implicit */unsigned long long int) var_0);
                        var_20 = ((/* implicit */short) min((arr_8 [15ULL] [i_3] [i_3] [(_Bool)1]), (((/* implicit */unsigned char) min((arr_3 [i_3 - 1] [i_3 + 1]), (arr_3 [i_3 - 2] [i_3 - 2]))))));
                    }
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) ((short) arr_1 [i_7]));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((arr_1 [i_3 - 2]) - (7515250429114497504ULL)))));
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_3 - 2] [i_3 - 1]))));
                            arr_24 [i_0] [18LL] [i_7] [i_7] [i_3] = ((/* implicit */unsigned char) arr_23 [i_7] [i_7] [i_3] [i_4 - 1] [i_3] [(short)8]);
                            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_8])) ? (((/* implicit */long long int) 0)) : (arr_11 [i_0] [i_0] [i_7] [i_0])))) ? (((((/* implicit */_Bool) (short)0)) ? (arr_16 [i_4] [i_4] [i_4] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [(_Bool)1] [i_4 - 1] [9ULL] [20U] [i_0] [(signed char)13]))))) : (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2)))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_29 [i_0] [i_3] = ((/* implicit */unsigned short) (unsigned char)225);
                            var_25 -= ((/* implicit */signed char) ((unsigned char) arr_18 [i_7 + 1] [i_7 + 1]));
                        }
                        arr_30 [i_0] [i_3] [i_4] [(signed char)21] = ((/* implicit */long long int) ((unsigned short) arr_10 [i_0] [i_4]));
                    }
                    var_26 = ((/* implicit */unsigned long long int) min((((short) var_9)), (((/* implicit */short) arr_27 [i_4 + 3] [i_4 + 1] [i_4 + 2] [i_3 - 3]))));
                    arr_31 [i_0] [i_3] [23U] [(unsigned char)17] = ((/* implicit */unsigned int) ((int) (((!(arr_27 [i_3] [i_3] [i_3] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (11133821335834026326ULL))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        arr_35 [(unsigned short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) -4966801957553306831LL)) && (((/* implicit */_Bool) arr_23 [i_10] [(unsigned char)4] [i_10] [i_10] [i_10] [(unsigned char)4])))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8563608475155422383ULL))))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15847))) : (0U)))) && (((/* implicit */_Bool) (signed char)55)))))));
        arr_36 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_10] [i_10]))))) : (((/* implicit */int) min((arr_4 [i_10] [i_10]), (arr_4 [i_10] [i_10]))))));
    }
    var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4966801957553306833LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
