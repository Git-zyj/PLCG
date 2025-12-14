/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143658
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
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_0), (var_0)))) : (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((short) var_12));
        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 - 3]))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (var_9))), (max((((/* implicit */unsigned long long int) var_14)), (2152263238347304995ULL)))))) ? (min((((/* implicit */int) arr_4 [i_1 - 1])), ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1 + 3]))))) > ((+(var_17))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 ^= ((/* implicit */short) ((((3009974790U) <= (1284992487U))) ? (((/* implicit */unsigned int) ((int) arr_3 [i_1 + 2]))) : (min((1284992506U), (((/* implicit */unsigned int) (unsigned short)65529))))));
            arr_11 [9] = ((/* implicit */_Bool) (~(((((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))) | (arr_10 [i_1 - 1])))));
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_14 [i_1] [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_1 + 1]);
            var_23 ^= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 3009974790U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_3]) % (arr_5 [i_1 - 1] [i_3])))))), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_12 [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_4] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) == ((-(var_1)))));
            arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (arr_10 [i_1 + 3])));
        }
    }
    for (int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_25 |= ((/* implicit */unsigned int) ((long long int) (short)31451));
        var_26 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))) ? (arr_18 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))))), (((/* implicit */long long int) ((((arr_19 [i_5]) ? (((/* implicit */long long int) 3009974771U)) : (6385360053203980876LL))) <= (((/* implicit */long long int) ((int) arr_18 [i_5]))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) min((((/* implicit */long long int) ((int) var_13))), (arr_18 [i_5 - 1])));
                        var_28 = max((((((/* implicit */_Bool) (short)18386)) ? (((/* implicit */int) (short)32747)) : (-2114328115))), (((((/* implicit */int) ((_Bool) (short)1873))) + (((/* implicit */int) var_18)))));
                        arr_27 [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) var_0)), (((unsigned long long int) var_11))))) || (((/* implicit */_Bool) (+(arr_20 [i_5 - 1] [i_5 + 1]))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */signed char) (!((!((((_Bool)1) || (((/* implicit */_Bool) 3009974817U))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((((var_9) - (((/* implicit */unsigned long long int) 1874706285)))) <= (((/* implicit */unsigned long long int) (-(var_16))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_5 + 1])) <= (((/* implicit */int) (unsigned char)142))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_33 ^= ((/* implicit */short) ((arr_24 [i_11] [i_9] [22LL]) / (arr_24 [i_11] [i_11] [i_5 - 1])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 4) 
        {
            arr_39 [i_5] = ((/* implicit */signed char) ((unsigned short) arr_23 [i_5 - 1] [i_5 + 1]));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_18 [i_5]))))));
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3101980767U)) ? (((/* implicit */long long int) var_16)) : (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_5] [i_5 + 1] [i_13] [i_12]))) | (6465498989501222815LL)))));
            }
            var_36 = ((((/* implicit */int) arr_19 [i_12 - 1])) << (((/* implicit */int) arr_19 [i_12 - 1])));
            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
        }
        for (unsigned short i_14 = 4; i_14 < 22; i_14 += 4) 
        {
            var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_14))))));
            var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? ((+(arr_22 [i_14 + 1] [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14] [i_14 - 4] [i_14 + 1]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
            var_40 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_41 |= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_28 [i_14] [i_14 - 4] [i_14 + 2])))) & ((~(((/* implicit */int) arr_28 [3] [5] [i_14 - 1]))))));
        }
        for (signed char i_15 = 3; i_15 < 22; i_15 += 1) 
        {
            arr_50 [i_15] [i_15] [i_15] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32747))) > (3101980767U))))) <= ((-(var_9)))))));
            arr_51 [i_5] = ((/* implicit */_Bool) (+(-7253460028266528366LL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    for (unsigned char i_18 = 2; i_18 < 21; i_18 += 1) 
                    {
                        {
                            var_42 ^= ((/* implicit */unsigned char) arr_28 [i_15] [i_15 - 3] [i_15 - 3]);
                            arr_60 [(_Bool)1] [i_17] [i_16] [(_Bool)1] [i_5] = (+(((((/* implicit */_Bool) 2114328115)) ? (3503073626U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))));
                            var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                arr_61 [i_5] [i_5] [(short)10] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_58 [i_5 - 1] [i_5 + 1] [13ULL] [i_15] [i_16])) <= (((/* implicit */int) arr_58 [i_5] [i_15 + 1] [i_5] [i_15] [i_16]))));
                var_44 = ((/* implicit */int) arr_26 [i_16] [i_5 - 1] [i_5 - 1] [i_16]);
            }
        }
    }
    var_45 |= ((max((((/* implicit */unsigned long long int) ((4414388174250349133LL) == (((/* implicit */long long int) ((/* implicit */int) (short)32747)))))), (var_2))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 3101980780U))) || (((/* implicit */_Bool) var_9)))))));
}
