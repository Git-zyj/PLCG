/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113481
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_10 = var_2;
            var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            var_12 ^= ((/* implicit */unsigned char) ((long long int) var_7));
            var_13 = ((/* implicit */signed char) ((unsigned short) (unsigned short)30235));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30235))) : (arr_1 [i_2]))))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 0U))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)20239))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                            var_18 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 531333567425735871ULL)) ? (((/* implicit */int) (unsigned short)5531)) : (((/* implicit */int) (unsigned short)16380)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */signed char) var_7);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned short)34651)) * (((/* implicit */int) arr_22 [i_3])))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((7582707567395955637ULL), (((/* implicit */unsigned long long int) (unsigned short)45297))))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_3 [i_8]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) (((-(((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-32739)))))) >> (((min((arr_28 [i_3] [i_8]), (arr_28 [i_8] [i_3]))) - (17889599638548595973ULL)))));
                            var_23 = ((/* implicit */unsigned short) 1073741822U);
                        }
                        for (long long int i_11 = 4; i_11 < 12; i_11 += 1) 
                        {
                            arr_32 [i_0] [i_0] [(unsigned short)10] [i_0] [i_11] [i_7] [i_7] = ((/* implicit */signed char) max((((unsigned long long int) arr_5 [i_0])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [i_7] [(unsigned short)8] [i_7] [i_8] [(unsigned short)8] [(unsigned short)8])))))));
                            arr_33 [i_3] [i_11] [i_3] [(short)2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45296)) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (short)10424)) != (((/* implicit */int) var_6))))), (var_6)))) : (((/* implicit */int) arr_7 [i_11] [i_3] [i_3]))));
                        }
                    }
                } 
            } 
            arr_34 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7582707567395955637ULL)) ? (((/* implicit */int) (short)-10425)) : (((/* implicit */int) (unsigned short)48651))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_0] [i_0])))), ((+(((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (0ULL)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_39 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_14 [i_13] [(unsigned char)4] [i_3] [i_3] [i_0]));
                    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_12 + 3] [i_12 + 3])) + (((/* implicit */int) arr_12 [i_12 - 2] [i_12 + 3]))));
                }
                for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    arr_44 [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                    arr_45 [i_14] [i_14] [i_14] [i_0] = ((/* implicit */unsigned int) (+(arr_28 [i_12 + 1] [i_12 + 3])));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [(unsigned short)11] [i_0] [i_12 + 3] [i_12])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)49898))));
                }
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 1 */
                for (long long int i_15 = 3; i_15 < 15; i_15 += 4) 
                {
                    var_27 ^= ((/* implicit */_Bool) ((7582707567395955637ULL) * (((/* implicit */unsigned long long int) ((arr_14 [i_15] [i_15] [i_12] [i_3] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0]))))))));
                    var_28 = ((/* implicit */unsigned long long int) arr_15 [i_0] [(signed char)5] [i_0] [4ULL] [i_12] [i_15] [i_15 + 1]);
                }
            }
        }
        var_29 = ((/* implicit */unsigned int) arr_42 [12ULL] [i_0] [i_0] [i_0] [(unsigned short)0]);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        for (unsigned short i_17 = 1; i_17 < 14; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                {
                    var_30 += ((/* implicit */signed char) ((((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_17 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-8002929131972328489LL) <= (-8002929131972328489LL))))) : ((-(0U)))));
                    var_31 = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1853541215U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_46 [i_16] [i_16] [i_16] [i_16] [i_18] [i_19])))));
                        var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)23)) ? (arr_28 [i_17 - 1] [i_18]) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) arr_15 [15ULL] [i_17 + 1] [(signed char)11] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) -5295227313667653585LL);
    /* LoopNest 3 */
    for (short i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        for (long long int i_21 = 0; i_21 < 14; i_21 += 3) 
        {
            for (short i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        for (long long int i_24 = 3; i_24 < 11; i_24 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_15 [i_20] [i_24 - 2] [i_24 - 2] [(signed char)8] [i_24 + 2] [i_20] [i_24])))));
                                var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_42 [i_23] [i_24] [i_24 + 3] [i_24] [i_23])), (arr_14 [i_24 + 2] [i_24] [i_24] [i_24] [i_24 + 3])))) * (18446744073709551610ULL))))));
                                var_38 = ((/* implicit */unsigned int) min((var_38), (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_14 [i_24] [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 2])) ? (arr_14 [i_20] [(_Bool)1] [i_24 + 1] [i_24 - 2] [i_24 - 2]) : (arr_14 [(unsigned short)3] [i_23] [i_24 - 2] [i_24 + 2] [i_24 - 2])))))));
                            }
                        } 
                    } 
                    var_39 = max((((/* implicit */unsigned long long int) (+((-(-3871651894997102964LL)))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_21] [13ULL] [i_21]))) ? (arr_52 [i_20] [i_21] [i_22]) : (((/* implicit */unsigned long long int) (+(arr_15 [i_22] [i_21] [i_22] [i_22] [i_22] [i_20] [i_20])))))));
                    var_40 = ((/* implicit */unsigned long long int) arr_37 [i_21] [i_22]);
                    var_41 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
            } 
        } 
    } 
}
