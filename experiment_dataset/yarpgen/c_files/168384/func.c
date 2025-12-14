/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168384
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 += ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)240))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */signed char) (unsigned short)19760);
                            arr_13 [7U] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_3]))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)37820)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0 + 2]) | (arr_3 [5U] [i_0 + 2]))))));
        }
        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
        {
            arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_5 + 3] [i_5])) ? (((/* implicit */int) (unsigned short)21425)) : (((arr_5 [i_0] [i_5] [i_5]) ^ (((/* implicit */int) var_16)))))) > (((((/* implicit */_Bool) 1559993626)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)255))))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned char)0)))));
                            arr_23 [i_0 + 2] [i_0 + 2] [i_7] [i_0 + 2] [i_7] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)36336)), (((((((/* implicit */_Bool) 12153054749968764421ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29176))) : (16ULL))) >> (((arr_20 [i_0] [i_5] [i_5] [i_6] [i_7] [(signed char)3]) - (12889640654629355342ULL)))))));
                            var_24 = max((((((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5 - 3] [i_0])) ? (arr_9 [i_5] [i_5 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
        {
            arr_28 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) arr_8 [(unsigned char)1] [(unsigned short)4]);
            arr_29 [i_9] [i_9] [i_9] = ((/* implicit */int) var_14);
            var_25 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [9] [i_0]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1039512859)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) : (16185088112326243329ULL))))));
            arr_32 [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)12663);
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_27 ^= ((/* implicit */unsigned short) max((-1559993619), (1)));
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    var_28 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)21409))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_41 [i_0] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) % (((4294967284U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)8639)), ((unsigned short)12663)))) ? (((/* implicit */int) max(((unsigned short)36340), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_0] [i_10] [i_11] [14ULL] [i_13])))))))) : (((/* implicit */int) (unsigned short)65535))));
                        arr_42 [i_13] [i_0] [i_11] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))))) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)65535))));
                        arr_43 [i_13] [i_12] [i_10] [i_11] [i_10] [i_0] = ((/* implicit */int) var_17);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_47 [i_0] [i_10] [i_0] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2206))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (3882502738U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13115)))))));
                        var_31 = (~(((/* implicit */int) (_Bool)1)));
                    }
                    arr_48 [i_0] [i_0] [i_11] [(_Bool)1] [i_0] = ((/* implicit */int) max((1152921504598458368ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)38439)), ((-(var_10))))))));
                }
                var_32 = ((((/* implicit */unsigned int) var_13)) < (4294967276U));
                var_33 |= -559973935;
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_52 [i_0] [i_15] = ((/* implicit */unsigned int) arr_21 [i_0] [i_15]);
                var_34 = (~(((/* implicit */int) (unsigned short)20231)));
                var_35 |= ((/* implicit */unsigned long long int) (unsigned short)61953);
                arr_53 [i_0] [i_10] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_10] [(unsigned char)1])) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : ((-(((/* implicit */int) (unsigned short)0))))));
                arr_54 [i_0] [i_10] = ((/* implicit */unsigned int) 2147483640);
            }
        }
        /* LoopSeq 3 */
        for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            arr_58 [i_0] [i_16] = ((/* implicit */int) ((arr_44 [i_0] [(signed char)5] [i_0 + 1] [i_0] [i_0] [i_16]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38454))))));
                var_37 ^= ((/* implicit */int) max((((/* implicit */unsigned int) var_6)), (max((4294967267U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3955547195U)) && (((/* implicit */_Bool) 416645264)))))))));
                var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_50 [4ULL] [i_16] [i_17])) ? (arr_35 [i_0] [i_16] [i_0] [i_16]) : (-1747868403)))))) ? (((((/* implicit */_Bool) 19U)) ? (4294967278U) : (max((0U), (((/* implicit */unsigned int) (unsigned char)192)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                var_39 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= ((-2147483647 - 1))))), (max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))));
            }
            var_40 = ((/* implicit */int) max((var_40), (((((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) (unsigned short)32512)) - (32481)))))) ? (((/* implicit */int) arr_59 [i_16] [(signed char)2] [i_0] [0])) : (var_13))) % ((+(((/* implicit */int) var_16))))))));
            var_41 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (short i_18 = 1; i_18 < 12; i_18 += 4) 
        {
            arr_66 [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (6192468390301474493ULL)))) ? (arr_44 [0] [i_18] [i_18] [i_18] [(signed char)3] [i_18 + 3]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (617966307)))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)8507)), ((+(arr_60 [i_0]))))))));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1015808U)) ? (arr_35 [i_18 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)8)), ((~(((/* implicit */int) (unsigned short)49029))))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8520))) : (12254275683408077122ULL)))))));
        }
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            arr_71 [i_0 + 1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) 105007015);
            var_43 ^= ((/* implicit */signed char) max((max((2147483628), (((arr_64 [i_0] [i_0] [0ULL]) ? (1137740870) : (((/* implicit */int) (unsigned short)8529)))))), (((/* implicit */int) (!((_Bool)1))))));
        }
    }
    var_44 ^= ((/* implicit */unsigned char) ((signed char) 599576007));
}
