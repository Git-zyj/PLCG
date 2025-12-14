/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111129
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
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0]);
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) -2064610725)))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                arr_12 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((1099511627775ULL) + (((/* implicit */unsigned long long int) 2233102117U)))) : (((/* implicit */unsigned long long int) 2061865201U))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2064610741)) ? (2064610730) : (((/* implicit */int) arr_2 [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */unsigned int) arr_3 [i_0])) + (2233102117U)))));
            }
            var_22 &= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0]);
            arr_13 [i_0 + 2] [i_0] = ((/* implicit */int) arr_9 [5] [i_1] [i_0 + 1] [i_0]);
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) 2061865187U);
        /* LoopSeq 1 */
        for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            var_23 = ((/* implicit */short) arr_9 [i_3] [i_3] [i_3 - 1] [i_0]);
            arr_17 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [(short)7] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_0 + 1] [2]))) : (var_5)))) ? (arr_3 [i_0]) : (((/* implicit */int) (!((_Bool)0))))));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(arr_16 [i_0 + 2])));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (_Bool)1))));
                    var_25 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)194))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_27 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2061865187U))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((!(((/* implicit */_Bool) 2061865166U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4503599627370495LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_4 [i_0] [i_4]))))))))));
                    arr_28 [i_4] [i_0] [i_0] [11] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_3 - 1] [i_0 + 1] [i_4])) ? (((/* implicit */int) (unsigned short)39029)) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (unsigned short)45942)))))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) 7187915148380812816ULL))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0]);
                        arr_31 [i_0] [i_3 - 2] [0LL] [i_0] [i_7] = (!(((/* implicit */_Bool) (((_Bool)0) ? (2061865176U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37024)))))));
                        arr_32 [i_0 + 2] [i_3] [i_0] [i_6] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) arr_21 [i_6] [i_6] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) (short)63)) == (((/* implicit */int) arr_21 [i_0 + 1] [i_4] [i_6]))))) : (((/* implicit */int) var_9))));
                        arr_33 [i_0] [i_3 - 2] [i_3] [i_4] [i_6] [(signed char)11] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) -1940944678)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7596))) : (arr_19 [i_4] [i_6] [i_7]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_6]))) : (arr_26 [i_0] [i_3] [i_0] [i_4] [i_6] [1ULL]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_4] [i_4]))));
                        arr_36 [i_0] [i_0] [i_4] [(_Bool)1] [0U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (short)-20492))));
                        var_30 = ((/* implicit */int) var_17);
                        var_31 = ((/* implicit */signed char) (unsigned short)30446);
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_32 &= ((/* implicit */unsigned short) (_Bool)1);
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (_Bool)1))) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))));
                        var_34 = ((/* implicit */short) (!((_Bool)1)));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_39 [i_0] [i_10] [i_4] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))) != (((/* implicit */unsigned long long int) (-(var_0))))));
                    arr_43 [i_0] [i_3] [i_4] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184))));
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((4197202685325486454ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62)))));
                            var_37 -= ((/* implicit */_Bool) -5404523452301993193LL);
                            arr_48 [i_3] [i_0] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            arr_49 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (short)28722)) - (28721))))));
                            arr_50 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3298827939U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)184))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 1; i_15 < 10; i_15 += 4) 
                        {
                            arr_58 [i_0] [i_15] [i_0] [(short)2] [(signed char)7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) | (var_0))))));
                            arr_59 [i_0] = (-(((((/* implicit */_Bool) 10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))));
                        }
                        var_38 = ((/* implicit */long long int) (short)7126);
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7322))))) ? (((((/* implicit */_Bool) (unsigned short)30446)) ? (2061865187U) : (((/* implicit */unsigned int) var_16)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)5565)) : (((/* implicit */int) arr_0 [i_3])))))));
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_40 [i_13] [(_Bool)1] [i_13] [i_14 + 2] [i_14 + 2]))))));
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */short) arr_40 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
    }
    for (int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        arr_64 [i_16] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (!(arr_60 [i_16])))))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) 
        {
            arr_68 [i_16] &= ((/* implicit */int) (short)5584);
            arr_69 [i_16] [i_16] [i_16] = ((/* implicit */int) arr_65 [i_16] [i_17]);
        }
        var_42 = ((/* implicit */int) max((var_42), (max((((/* implicit */int) ((unsigned short) arr_60 [i_16]))), (((((((/* implicit */_Bool) -548494364)) ? (((/* implicit */int) (short)-27809)) : (((/* implicit */int) arr_67 [i_16])))) - ((+(((/* implicit */int) arr_66 [i_16] [4LL]))))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
    {
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            for (short i_20 = 2; i_20 < 12; i_20 += 4) 
            {
                {
                    arr_81 [i_18] [i_19 + 1] [i_19] = ((/* implicit */short) 3110225588418859557ULL);
                    arr_82 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-548494377), (((/* implicit */int) var_14))))) ? (((((/* implicit */int) arr_60 [i_20 - 1])) >> (((/* implicit */int) arr_60 [i_18])))) : ((~(((/* implicit */int) arr_61 [i_19 + 1]))))));
                    arr_83 [i_20] [i_19] [i_20] [i_20] = -548494377;
                    arr_84 [i_18] [8] [i_19] [i_18] = ((/* implicit */unsigned char) ((unsigned short) (+(((((/* implicit */_Bool) arr_78 [i_19] [i_19])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_18] [i_19]))))))));
                }
            } 
        } 
    } 
}
