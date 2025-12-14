/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12697
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]);
                            arr_13 [i_0] [i_1] [i_4] [i_3] [(unsigned char)5] = ((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_1])))) != (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_1])))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [10U] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)63);
                arr_15 [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)36);
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)127)))))));
            }
            arr_16 [0LL] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_9 [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8]), (((/* implicit */short) arr_2 [(signed char)15]))))), ((~(((/* implicit */int) arr_2 [i_0]))))))), (var_0)));
            arr_17 [i_1] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0]);
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned long long int) -1LL)), (14813774156359768786ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) var_8)))))));
        }
        arr_18 [(signed char)12] [(short)6] = ((/* implicit */short) ((unsigned long long int) min((max((((/* implicit */long long int) arr_10 [(unsigned char)2] [(unsigned char)2] [i_0] [(unsigned char)2] [i_0])), (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)242))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    arr_24 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 1] [2ULL])) ? (((/* implicit */int) arr_23 [1] [i_5 - 1] [1])) : (((/* implicit */int) arr_23 [i_0] [i_5 - 1] [i_6]))))), (((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [(_Bool)1] [i_5 + 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [4LL] [4LL] [(_Bool)1] [4LL] [(unsigned char)10] [4LL] [i_5])) ? (((/* implicit */int) var_1)) : (arr_21 [i_0] [i_5] [(unsigned char)2])))) : (((((/* implicit */long long int) arr_21 [(_Bool)1] [(_Bool)1] [(unsigned char)3])) % (var_5)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_19 [i_7] [i_6]))));
                        var_16 = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)255))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(_Bool)1] [8LL] [(_Bool)1]))) : (arr_12 [i_0] [4LL] [i_5 + 1] [0LL] [i_0] [4U] [i_5]))))));
                        var_17 ^= ((/* implicit */short) (~(3931005760165277932ULL)));
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_30 [i_0] [i_5] [i_0] [i_0] [(short)15] = ((/* implicit */signed char) arr_4 [i_5 - 1] [i_5 - 1]);
                        arr_31 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_5 - 1] [i_5 - 1])))) ? ((-(((((/* implicit */_Bool) 0LL)) ? (arr_28 [2LL] [(short)11] [i_6] [i_5 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) == (25ULL)))))));
                        arr_32 [i_5] [i_5] [i_6] [8] = ((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1]);
                    }
                    arr_33 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_5] [i_5 - 1] [i_5 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (arr_27 [i_6] [i_5] [i_0])))) : (((/* implicit */int) (signed char)30))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                arr_38 [(short)8] [(short)8] [(short)8] [i_5] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) var_2)) - (3079)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) arr_27 [i_0] [(short)3] [(_Bool)1])), (var_4))), (((/* implicit */short) (_Bool)1)))))) : (arr_28 [i_5] [i_5 + 1] [i_5 + 1] [i_6] [i_6])));
                                var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [2ULL] [i_0] [(short)6])) ? ((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)60054)))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)0))) == ((((_Bool)1) ? (var_10) : (((/* implicit */int) arr_6 [i_5] [i_9] [i_10])))))))));
                                arr_39 [13ULL] [i_5] [4ULL] [4ULL] = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -8166312369598442539LL)) ? (-7207761248212607597LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))))));
                                arr_40 [i_5] [(unsigned short)4] [(_Bool)1] = ((/* implicit */signed char) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_11] [i_11 + 1] [i_11] [i_11 + 1]))))) % ((+(arr_12 [(short)6] [(short)6] [i_11 + 1] [i_11 + 1] [i_11 + 1] [(short)6] [i_0])))));
                    arr_46 [i_0] [i_11] [i_11] [i_0] = ((/* implicit */unsigned char) min((((arr_43 [i_11 + 1] [i_11 + 1]) + (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (unsigned char)1))));
                    arr_47 [i_11] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) -841673191)) != (4294967287U)))), (arr_26 [i_0] [i_11] [i_12] [i_0]))));
                    arr_48 [i_11] [i_11 + 1] [7LL] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_10 [(short)0] [i_11 + 1] [i_11] [i_11 + 1] [i_12]))) ? (((((/* implicit */int) arr_19 [i_0] [4ULL])) + (var_11))) : (((((/* implicit */_Bool) arr_19 [i_0] [9U])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [10LL] [10LL]))))))) / (((arr_5 [i_11] [i_11 + 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) 585972419579969519ULL)) ? (var_11) : (((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    arr_49 [i_11] = ((/* implicit */unsigned short) min((min((arr_20 [i_0] [i_11] [i_12]), (arr_20 [13LL] [i_11] [i_12]))), ((+(arr_20 [11U] [i_11] [i_11])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    arr_57 [12U] [(_Bool)1] [i_13] = ((int) (~(arr_12 [i_13] [1LL] [i_15 + 1] [13LL] [(short)8] [1LL] [i_13])));
                    arr_58 [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned char i_16 = 1; i_16 < 12; i_16 += 1) 
                {
                    arr_63 [i_13] [i_14] [(short)13] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (signed char)74))) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)7] [15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)11] [(short)11] [i_16 + 2]))) : (arr_12 [i_13] [i_14] [i_14] [i_13] [4ULL] [i_13] [i_13]))) : (((/* implicit */unsigned long long int) 0U))));
                    arr_64 [i_13] [i_13] [i_16 + 1] [i_13] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) -636614213)) != (7207761248212607589LL))));
                    arr_65 [i_13] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned char) arr_28 [i_13] [i_13] [i_13] [i_14] [(short)3]);
                    arr_66 [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_13] [(short)7])) == (var_11)));
                }
                arr_67 [(_Bool)1] [i_13] [(short)0] = ((/* implicit */short) arr_21 [i_13] [i_13] [11ULL]);
                arr_68 [i_13] = ((/* implicit */long long int) (-(((((arr_60 [(unsigned short)9] [i_13] [i_13] [i_13]) + (2147483647))) << (((((arr_60 [i_13] [i_14] [5U] [i_13]) + (651652883))) - (2)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_17 = 0; i_17 < 17; i_17 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (~(min((((((/* implicit */unsigned long long int) -1296236963)) & (13395055207040234238ULL))), (((/* implicit */unsigned long long int) arr_71 [i_17]))))));
        arr_72 [i_17] [(signed char)13] = ((/* implicit */short) var_9);
        var_21 -= ((/* implicit */signed char) var_7);
    }
}
