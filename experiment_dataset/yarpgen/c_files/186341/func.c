/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186341
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_0)))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) 0U))));
        var_14 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_1 [i_0] [i_0])))) | (max(((-(((/* implicit */int) (unsigned short)25761)))), (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-6927))))))) == (((((/* implicit */_Bool) (signed char)-19)) ? (var_2) : (((/* implicit */unsigned long long int) 7409421649277467233LL))))));
        var_15 = ((/* implicit */unsigned int) ((short) (!((_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (var_0)));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [5ULL]))) <= (var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 3020457936579227310ULL)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((unsigned short) 7409421649277467241LL)))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(4294967295U)));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_20 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) | (((((/* implicit */unsigned long long int) arr_6 [i_5 - 1] [i_3] [i_4])) | (5653182385896805346ULL)))));
                        arr_21 [i_1] [i_3] [i_4] [i_5 - 1] [i_5 - 1] [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) && (arr_14 [i_5 + 1] [i_5 + 1] [i_3] [i_3])));
                        arr_22 [(unsigned char)12] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (-((+(7409421649277467241LL)))));
                        arr_23 [i_1] [12ULL] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 2) 
                    {
                        var_19 = ((unsigned int) arr_24 [i_5 + 1] [i_7] [i_5 + 1] [i_5 + 1] [i_7 + 2] [i_5 + 1] [i_7]);
                        var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (signed char)5))));
                    }
                    /* LoopSeq 1 */
                    for (short i_8 = 4; i_8 < 12; i_8 += 2) 
                    {
                        var_21 += ((/* implicit */short) arr_14 [(short)8] [i_3] [(unsigned short)4] [i_1]);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_8] [i_5])) | (((/* implicit */int) (short)6915))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [(unsigned short)0] [(unsigned short)0] [i_4] [(unsigned short)0] [i_8] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57937))))))) : (2955459945U)));
                        arr_32 [i_1] [i_1] [(_Bool)1] [i_4] [7ULL] [7ULL] [i_8 + 1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) var_0)) <= (var_2))));
                    }
                    arr_33 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_3] [i_3])) - (9414))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_4] [i_1] [i_3] [i_5 + 1] [i_1])))))));
                    var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_4))) * (((/* implicit */int) arr_14 [i_5 - 1] [(signed char)12] [(signed char)12] [i_5 + 1]))));
                }
                for (short i_9 = 3; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) var_0)) : (7409421649277467259LL))))));
                        arr_40 [i_1] [i_9] = ((/* implicit */_Bool) (-(((long long int) arr_10 [i_1]))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-2277)) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_3] [i_1] [i_3] [i_11] [i_11]))));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((unsigned long long int) var_5)))));
                }
            }
            for (long long int i_12 = 3; i_12 < 12; i_12 += 2) 
            {
                var_28 = ((/* implicit */int) (~(4088085081U)));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7))));
            }
            for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                var_30 = ((/* implicit */short) ((unsigned short) ((_Bool) var_9)));
                var_31 *= var_5;
                arr_49 [i_1] [i_1] [i_1] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_16 [i_1] [i_1] [i_1] [(signed char)9] [i_13] [i_13]));
                arr_50 [i_13] [i_13] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52184)) == (((/* implicit */int) ((var_2) < (var_2))))));
            }
        }
    }
    /* vectorizable */
    for (short i_14 = 1; i_14 < 12; i_14 += 4) 
    {
        arr_55 [i_14] = ((/* implicit */unsigned char) arr_39 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1] [i_14]);
        arr_56 [i_14] = ((/* implicit */_Bool) var_1);
        /* LoopNest 3 */
        for (signed char i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (short i_17 = 3; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_14] [i_14])))))) ? (1339507351U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))));
                        var_33 += ((/* implicit */unsigned int) (-(arr_18 [i_14] [i_14 + 1] [i_14] [i_17 + 3] [i_15])));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_14]))) ^ (2429186348057681204ULL)))) ? ((~(206882214U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_4)))))));
    }
    var_35 = ((/* implicit */_Bool) var_4);
    var_36 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)1008)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)54416)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17982))))))), (((unsigned int) ((((/* implicit */int) (unsigned short)52184)) <= (((/* implicit */int) var_3)))))));
}
