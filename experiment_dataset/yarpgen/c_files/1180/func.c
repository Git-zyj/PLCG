/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1180
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
    var_12 *= ((/* implicit */unsigned long long int) (((-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) ^ (793196434U))))) >> (((/* implicit */int) (signed char)20))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_13 += ((/* implicit */int) ((((unsigned int) (-(((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */int) (signed char)-21)) | (((/* implicit */int) (signed char)-9)))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] &= ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) var_9)), (min((arr_4 [i_2]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                var_14 = ((/* implicit */long long int) ((-1) == (((/* implicit */int) (signed char)20))));
                arr_14 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_2]))));
                /* LoopSeq 3 */
                for (short i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    var_15 = ((/* implicit */signed char) min((var_15), ((signed char)-19)));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3600646067U)));
                    arr_18 [i_2] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) 5478870142653363467ULL))))));
                    var_17 = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) - (var_7)));
                    arr_19 [i_0] [i_3 + 1] [i_2] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) << (((var_7) - (3756586275U)))))) ? (((/* implicit */int) arr_3 [i_0] [i_2 + 3] [i_2 + 3])) : (((/* implicit */int) (signed char)-7))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-89)))));
                        arr_27 [i_0] [i_2] [i_2] = ((/* implicit */signed char) var_3);
                    }
                    arr_28 [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */long long int) (signed char)-97);
                }
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : (-6995101436075761312LL))));
                    arr_31 [(unsigned char)1] [i_2] [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 1]))) | (var_5)));
                }
            }
        }
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            arr_34 [i_8] [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_8] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_8] [i_0]))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_24 [6LL] [i_0] [i_0])))))))));
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (signed char)20))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (signed char i_10 = 3; i_10 < 12; i_10 += 4) 
            {
                {
                    arr_39 [i_9] [i_0] = ((/* implicit */unsigned int) (signed char)-29);
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                arr_46 [i_0 + 1] [i_9] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)29450)) : (arr_38 [i_12] [i_11] [i_0])))) ? (arr_0 [i_0 + 1] [i_10 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2048)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)92)) < (((/* implicit */int) arr_7 [i_0]))))) : (max((((/* implicit */int) var_9)), (var_0)))))) : ((-(var_2)))));
                                arr_47 [i_0] [i_9] [i_9] [(_Bool)1] [i_11] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_33 [i_0 - 1])) * (((/* implicit */int) arr_33 [i_0 - 1])))));
                                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_23 [i_10] [i_12] [i_10] [i_10 - 2] [i_10]), (arr_23 [i_10] [i_0] [i_10] [i_10 - 2] [i_10]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 -= ((((/* implicit */long long int) min((arr_25 [i_0]), (var_7)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 141877154)) ? (arr_11 [i_0] [i_0] [i_0] [6ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))) ? (((1889151024394292406LL) | (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
        var_22 |= ((/* implicit */unsigned int) arr_2 [(signed char)10]);
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        arr_61 [i_14] [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((var_10), (var_10)))) ? (((/* implicit */unsigned long long int) var_7)) : (min((arr_54 [i_15]), (((/* implicit */unsigned long long int) (short)-7921)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1636591137) : (((/* implicit */int) (signed char)20))))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))))));
                        arr_62 [i_13] [i_13] [i_14] [i_16] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) ^ (-456026506)))));
                        arr_63 [i_14] = ((/* implicit */unsigned char) (signed char)-21);
                        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) (short)-4665)), (1250036592)))), (min((min((((/* implicit */long long int) var_3)), (arr_50 [i_13] [i_15]))), (((/* implicit */long long int) min((arr_51 [i_13]), (arr_51 [i_13]))))))));
                        var_24 &= (signed char)63;
                    }
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_52 [i_13] [i_14 + 1])), (var_11))))))));
                    var_26 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_52 [i_14] [i_14 + 1])))) ? (var_10) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) ((signed char) var_0));
    var_28 = ((/* implicit */unsigned short) var_9);
}
