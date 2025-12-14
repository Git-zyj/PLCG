/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186416
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
    var_17 &= ((/* implicit */signed char) ((((/* implicit */int) (((-(4896593661868106795ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)119)))))))) < (((((((/* implicit */int) (signed char)47)) / (((/* implicit */int) var_15)))) ^ (((((/* implicit */_Bool) var_6)) ? (1879048192) : (((/* implicit */int) (signed char)-55))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_0 [(unsigned short)22] [i_0])) + (13550150411841444820ULL))));
        var_19 -= ((/* implicit */unsigned int) (~(arr_0 [8ULL] [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_1 - 1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_14 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))) + (((13550150411841444820ULL) | (((/* implicit */unsigned long long int) 8126464))))));
                    arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (short)-18411)) : (((/* implicit */int) (_Bool)1)));
                }
                arr_16 [0U] [0U] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [3])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (arr_9 [0U] [i_2] [0U]))))));
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (6675289933791472266LL))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_1 + 1] [i_2])) + (((/* implicit */int) var_5))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((_Bool) 23ULL)))));
                            arr_27 [i_2] [i_6] = ((/* implicit */_Bool) var_12);
                            var_23 = ((/* implicit */unsigned int) ((signed char) var_7));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (2552378281371794754ULL))) <= (((/* implicit */unsigned long long int) -6675289933791472268LL))));
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -429256766)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)117))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 + 1] [i_1 - 1] [i_2]))));
                var_26 *= ((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_8]);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_27 = ((/* implicit */long long int) -1422678436);
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1983681233)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(signed char)2] [i_9] [i_9])))))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                        }
                        var_30 -= ((/* implicit */unsigned long long int) 0U);
                    }
                } 
            } 
            var_31 = ((/* implicit */_Bool) (signed char)-11);
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_40 [i_12] [i_2] [7] [i_2] = ((/* implicit */unsigned int) ((1U) < (((arr_8 [i_12] [i_2]) >> (((var_16) - (1017390560144805931ULL)))))));
                arr_41 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)59))));
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    arr_50 [(unsigned char)1] [(unsigned char)1] [i_13] [i_13 - 1] [i_2] = ((/* implicit */int) 13550150411841444821ULL);
                    var_32 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) var_8)))));
                    arr_51 [i_2] = ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                }
                for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    arr_56 [i_2] = ((/* implicit */unsigned int) ((((170033837) << (0U))) != (-333919629)));
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) -786875259125579975LL))));
                    var_34 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(8604204181460729820ULL))))));
                    arr_57 [i_2] [i_2] [i_2] [4LL] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1]);
                }
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    arr_60 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) (signed char)-14))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_2] [i_1])) ? (arr_49 [i_13 - 1] [i_13] [i_13 - 1] [i_16] [i_2]) : (((/* implicit */int) var_9))));
                }
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_6 [0ULL] [i_13 - 1]))));
                var_37 = ((/* implicit */_Bool) min((var_37), (var_8)));
            }
            for (long long int i_17 = 2; i_17 < 10; i_17 += 4) 
            {
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                var_39 ^= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_17]))) <= (arr_55 [i_1 - 1] [i_17] [i_17] [i_17] [i_17]))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_17 - 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_2] [i_1])) ? (-1983681234) : (((/* implicit */int) arr_24 [i_2]))));
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_2] [i_17 - 2] [i_2])) ? (arr_47 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_17 - 1] [i_2])))));
            }
            var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_45 [i_2]) == (639101535240182786ULL))))));
        }
    }
}
