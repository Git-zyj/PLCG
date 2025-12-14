/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177538
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
    var_17 = ((/* implicit */long long int) ((short) var_10));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 + 1] [i_0 + 1]));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (arr_1 [i_0] [i_0 + 1])));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2] [0U] [i_2] [0U] = ((/* implicit */unsigned char) var_15);
                        arr_16 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_10 [i_3]);
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_14 [i_1] [i_2 - 1] [i_3]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [i_2 + 1] [i_3])) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) ((unsigned long long int) (+(arr_1 [0] [0]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) var_10);
                            arr_29 [i_8] [i_6] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_12 [i_6]))))));
                        }
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)5853))) ? (((((/* implicit */int) arr_11 [i_6] [i_6 - 1] [i_7 - 3] [i_6])) - (((/* implicit */int) arr_11 [i_6] [i_6 - 1] [i_7 + 2] [i_7])))) : (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_11 [i_6] [i_6 + 1] [i_7 - 3] [9ULL])) : (((/* implicit */int) arr_11 [i_5] [i_6 + 1] [i_7 + 2] [i_7]))))));
                        arr_30 [i_1] [i_1] [i_1] [14LL] [10ULL] [i_6] = ((/* implicit */int) 2840057048U);
                        arr_31 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) var_6);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_34 [i_6] [(short)5] = var_1;
                            arr_35 [i_6] [i_6] [7U] [(short)2] [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_6] [i_6]), (((/* implicit */long long int) -1564049604))))) ? (((((/* implicit */_Bool) (~(arr_21 [(unsigned short)12] [(unsigned short)12] [i_6])))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)-123)), (1461191347)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [(_Bool)1] [i_5] [i_5] [(unsigned char)5] [(unsigned short)4]))) : (var_11))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-123)))))))));
                            arr_36 [(unsigned char)4] [i_6] [6] [6ULL] [i_6] [i_6] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_32 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1]))));
                        }
                    }
                } 
            } 
        } 
        arr_37 [i_1] [i_1] = ((/* implicit */signed char) (-(min((var_7), (((/* implicit */long long int) (-(var_5))))))));
        var_23 = ((/* implicit */signed char) (((~(max((((/* implicit */unsigned long long int) (unsigned short)24119)), (3182122417642337059ULL))))) << (((var_5) - (1437257452U)))));
        var_24 ^= ((/* implicit */unsigned int) ((max((arr_20 [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)119)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) && (((/* implicit */_Bool) var_2))))))));
    }
    /* vectorizable */
    for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [(signed char)10] [i_10] [i_10 - 1]))));
        arr_41 [i_10] = ((/* implicit */int) arr_13 [i_10] [10U] [14U] [10U] [14ULL]);
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_26 |= ((unsigned long long int) ((((arr_28 [i_11] [i_11] [(unsigned char)5] [i_13] [i_14] [i_14]) + (2147483647))) >> (((12678321857233941848ULL) - (12678321857233941823ULL)))));
                            arr_53 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_12 + 3] [i_12 + 3] [i_12] [i_12 - 3] [i_12 + 3] [i_12 + 3] [i_12 + 3]))))) % (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_26 [i_11] [i_11] [2U] [i_12 + 1] [i_11] [i_13] [i_14]))))));
                            var_27 = ((/* implicit */long long int) arr_11 [i_11] [i_14] [i_14] [4U]);
                        }
                    } 
                } 
                arr_54 [2U] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_40 [i_12 + 2])), (((unsigned int) arr_40 [i_12 - 3]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        arr_58 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_55 [i_15])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)4094)), ((unsigned short)13200))))));
        /* LoopNest 3 */
        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    {
                        arr_67 [i_15] = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % (arr_66 [i_16 + 3] [i_16 + 1]))), (((/* implicit */int) var_1))));
                        arr_68 [i_15] [(short)0] [i_15] [17LL] [17LL] = ((/* implicit */_Bool) var_2);
                        arr_69 [i_17] [i_15] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((arr_61 [i_16] [i_17]) ? (1073741824) : (((/* implicit */int) arr_62 [16LL] [17ULL] [17ULL]))))))), (var_14)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        arr_74 [i_19] [i_19] = ((/* implicit */_Bool) max((3684562971517996792LL), (((/* implicit */long long int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned long long int) ((int) min(((short)-14012), (((/* implicit */short) arr_61 [i_19] [i_19])))));
    }
}
