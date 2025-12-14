/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166062
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : ((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-12981)) : (((/* implicit */int) var_3))))))));
    var_12 ^= ((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((unsigned char) var_10))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 1])) * ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-12970))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) (((!(arr_1 [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) : (2855013506U)))) : (arr_2 [i_1] [i_1])));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2]))));
                    var_14 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned int) ((unsigned char) (+(arr_17 [i_4] [i_0 - 1] [i_2 + 3] [i_3 + 1] [i_4] [(unsigned char)6] [i_4]))));
                                arr_18 [i_1] [i_1] [i_0 + 2] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) * (arr_17 [i_0] [i_0] [i_2 + 1] [i_3] [i_3] [i_4] [i_4 - 1])))) ? (((/* implicit */int) arr_16 [i_0] [i_4] [i_3] [13U] [i_2 + 3] [i_1] [i_0])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [9U] [i_2 - 1] [i_1] [i_1])) : (((/* implicit */int) var_5))))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                var_17 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_25 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7] = ((/* implicit */_Bool) var_2);
                    arr_26 [(signed char)20] [(signed char)20] [i_6] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0])))))));
                    var_18 ^= ((/* implicit */int) (_Bool)1);
                    var_19 ^= ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_19 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) : (var_7))) : (((/* implicit */unsigned long long int) ((1125899906842624LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            }
            var_20 ^= ((/* implicit */signed char) ((_Bool) arr_20 [i_0]));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_13 [i_0] [(short)22] [i_0] [i_0]))));
            arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1125899906842624LL)) && (((/* implicit */_Bool) var_9))));
            arr_28 [i_5] [i_5] [i_0 + 2] = ((/* implicit */short) arr_11 [i_5 + 1] [i_5 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
        }
        arr_29 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)));
    }
    for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4049664293U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2266996139U)))), (((((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [2] [i_8]))) : (arr_24 [i_8] [i_8]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_8] [i_8])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) < (((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) > (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_5))))))))))));
            var_24 *= ((/* implicit */_Bool) ((signed char) (short)-27684));
            arr_34 [i_9] [i_9] [i_8] = ((/* implicit */_Bool) var_7);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-12981)) > (((/* implicit */int) (short)-12981))));
        /* LoopNest 3 */
        for (signed char i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_9))));
                        var_27 = ((/* implicit */long long int) arr_43 [i_10] [(unsigned short)4] [i_10] [i_13]);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)16] [i_11] [i_12] [i_13])) ? (2266996145U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_10] [(unsigned char)4] [i_10])))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_10] [i_13] [i_13] [i_13]))) ^ (var_7))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) (~(arr_9 [i_10] [i_11 + 1] [i_11] [i_11 + 1])));
                            arr_47 [i_14] [i_10] [i_10] [i_12] [i_10] [i_10] [i_10] = arr_15 [i_10] [24ULL] [i_12] [i_13] [24ULL] [24ULL] [i_11];
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                        {
                            var_30 *= ((/* implicit */_Bool) ((arr_39 [i_11 + 1] [i_12] [(signed char)9]) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_51 [(unsigned char)19] [i_10] [i_12] = ((/* implicit */unsigned char) ((((arr_14 [i_10] [i_10] [i_10] [i_10]) ? (((/* implicit */int) arr_6 [i_10])) : (((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) arr_48 [i_10] [i_15] [i_12] [i_11 + 1]))));
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)95))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (((((/* implicit */_Bool) arr_46 [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12]))) : (1125899906842630LL)))));
                        }
                        var_32 = arr_6 [i_11 + 1];
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) ((arr_50 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_4))));
}
