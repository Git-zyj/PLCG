/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123145
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)21598)) ? (((/* implicit */int) (short)21617)) : (((/* implicit */int) (short)21581))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) | (((/* implicit */int) var_3))))));
                        arr_11 [i_2] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */long long int) (-(arr_7 [i_0] [i_1] [i_3 + 1] [(signed char)10])));
                        var_19 = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
            arr_12 [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_1] [i_0]);
        }
        for (int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            var_20 += ((/* implicit */short) ((((/* implicit */_Bool) -5706830087730110296LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            var_21 = ((/* implicit */short) ((unsigned char) 0U));
            var_22 += ((/* implicit */unsigned short) (signed char)96);
        }
    }
    for (int i_5 = 4; i_5 < 15; i_5 += 4) 
    {
        var_23 |= ((((((/* implicit */int) arr_16 [i_5 + 3])) ^ (((/* implicit */int) (short)7)))) & (((/* implicit */int) var_13)));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        arr_26 [i_8] [7U] = ((/* implicit */signed char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21611)) ? (arr_20 [i_5 + 1]) : (arr_20 [i_5 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 158187482)) / (5706830087730110287LL))))));
                            var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [(unsigned char)4] [i_5])) || (((/* implicit */_Bool) var_2))))))))));
                            var_26 *= ((/* implicit */signed char) arr_17 [i_5 + 1]);
                            var_27 = ((/* implicit */_Bool) ((short) var_16));
                        }
                        var_28 *= ((/* implicit */short) ((max(((((_Bool)1) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) (unsigned short)33057)))), (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_27 [i_7] [i_8])))))) * ((~(((/* implicit */int) arr_24 [i_5 - 3] [i_6]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_29 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-21612))))))), (arr_34 [(short)16] [i_6] [i_6] [i_10] [i_11])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_17 [i_6]))))))) : (((arr_22 [(_Bool)1]) ^ (((((/* implicit */_Bool) arr_33 [i_5] [i_6])) ? (arr_28 [i_10] [i_10] [i_10] [i_10] [9LL] [(short)9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            arr_38 [(unsigned char)16] [i_12] [i_12] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_20 [i_5 - 4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9007190664806400ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_20 [i_5 - 3]))))));
            /* LoopNest 2 */
            for (signed char i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                for (long long int i_14 = 2; i_14 < 16; i_14 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 1; i_15 < 17; i_15 += 4) 
                        {
                            var_31 |= max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_9))), (((/* implicit */long long int) var_16)));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1737134944)) != (268435200U)));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 1; i_16 < 16; i_16 += 4) 
                        {
                            var_33 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) var_7)))));
                            arr_51 [i_5] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                            arr_52 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14 + 2] [i_16])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_14 - 2] [i_13])))));
                            arr_53 [i_13] [(unsigned char)17] [i_13] [(short)17] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((unsigned char) arr_36 [2] [i_13])))));
                        }
                        arr_54 [(unsigned short)16] [i_13] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_15 [(signed char)1]) != ((~(arr_21 [i_14] [i_13] [i_5]))))))));
                        var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_12])))))) - (((((/* implicit */_Bool) (-(18437736883044745218ULL)))) ? (((((/* implicit */_Bool) arr_34 [i_5] [(unsigned char)2] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (2834862357U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_49 [i_13] [13] [(unsigned char)3] [i_13] [(signed char)2] [i_13])))))))));
                    }
                } 
            } 
        }
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_15 [i_5 + 2])) ? (arr_15 [i_5 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
        var_36 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_23 [i_5 + 1])))) ^ ((((_Bool)1) ? (((/* implicit */int) arr_27 [i_5 + 1] [i_5 - 2])) : (((/* implicit */int) (unsigned short)18783))))));
    }
    for (short i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        arr_57 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_55 [i_17] [i_17])))) >= (((/* implicit */int) arr_56 [i_17])))))) <= (((((1737134943) != (((/* implicit */int) (unsigned short)52236)))) ? (8226708712810569084LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_55 [(unsigned short)18] [(_Bool)1])))))))));
        var_37 &= ((/* implicit */int) (!(((/* implicit */_Bool) 268435224U))));
    }
    var_38 = ((/* implicit */int) var_8);
}
