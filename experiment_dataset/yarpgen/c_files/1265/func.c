/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1265
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (7421662164824633181ULL))))))) + (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((-3578279635379828204LL) <= (var_10))))));
                var_13 = arr_4 [i_0 + 1];
                var_14 *= ((/* implicit */unsigned char) (-(2763612266U)));
            }
            for (int i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10)))))) - (var_10)));
                var_16 = ((/* implicit */long long int) var_7);
                var_17 = ((/* implicit */unsigned char) ((int) arr_8 [i_0] [i_1] [8LL]));
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_3 - 2] [i_3 + 1] [i_3]))));
            }
            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19397)) ? (((/* implicit */int) arr_1 [(signed char)10] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_0 - 1]))));
            var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 960385894U))));
        }
        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_6 [i_0 + 2]))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) 9223372036854775805LL))))) ? (max((arr_11 [i_4] [(signed char)8] [i_4]), (arr_11 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) < (18446744073709551612ULL)))))));
        var_23 &= ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)46138)))))))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_4 [i_4]) : (arr_4 [i_4]))));
        var_24 &= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_4] [i_4]), (((/* implicit */unsigned char) arr_5 [9LL] [i_4] [i_4])))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3846466180U))))) % (((/* implicit */unsigned int) ((int) max((var_2), (var_2)))))));
        var_25 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46139))) > (arr_12 [i_4] [2U] [i_4] [i_4]))))) & (12288U))) << (((min(((+(3578279635379828204LL))), (((((/* implicit */_Bool) 3578279635379828192LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL))))) - (27LL)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_26 |= ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)203)) - (((/* implicit */int) var_3))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((-1152240436) / (((/* implicit */int) var_7)))))))));
                var_28 = ((/* implicit */_Bool) var_10);
                var_29 = arr_17 [i_6];
            }
            var_30 = ((/* implicit */int) ((signed char) arr_16 [i_4] [i_4] [i_4]));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 4170464659U)) / (9214364837600034816LL)));
            var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_4])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_15 [5] [6] [5]))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (long long int i_9 = 3; i_9 < 7; i_9 += 3) 
                {
                    {
                        var_33 |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) -2680118655017835658LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (3334581402U))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_6))));
                        var_35 |= ((/* implicit */unsigned long long int) ((arr_29 [i_9] [(_Bool)1] [i_9 - 1] [i_9 + 2]) > (arr_29 [i_9] [i_9] [i_9 + 3] [i_9 + 1])));
                        var_36 = var_10;
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */long long int) -1960045268)) : (-6619686068618159639LL)));
            /* LoopNest 3 */
            for (long long int i_10 = 3; i_10 < 8; i_10 += 4) 
            {
                for (long long int i_11 = 1; i_11 < 8; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4))));
                            var_39 = ((/* implicit */_Bool) (~(arr_22 [i_11])));
                            var_40 = ((/* implicit */unsigned char) ((((_Bool) (unsigned short)62880)) ? (var_1) : (arr_28 [i_10 + 1] [i_10 + 1])));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            var_41 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_13] [(unsigned char)8] [(unsigned char)8] [i_4] [i_4] [i_4])) < (((/* implicit */int) arr_39 [i_4] [i_4] [i_4])))))));
            var_42 = (~(max((var_1), (arr_29 [i_4] [i_4] [i_13] [i_13]))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_15] [i_15 + 1] [(_Bool)1]))) - (((unsigned int) (signed char)0))));
                var_44 = ((/* implicit */long long int) (~(arr_35 [i_4] [(_Bool)1])));
                var_45 = ((/* implicit */unsigned short) 3058803912151614752LL);
                var_46 = arr_32 [i_4] [i_14] [i_15];
            }
            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) max((-9LL), (((/* implicit */long long int) 1889037055U))))) ? ((-((-(-6329161631672304891LL))))) : (((arr_11 [i_4] [i_14] [i_4]) + (((/* implicit */long long int) arr_26 [(signed char)6] [i_4] [i_4] [i_4] [i_14] [i_14]))))));
            var_48 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228)))))));
        }
    }
    for (signed char i_16 = 3; i_16 < 19; i_16 += 3) 
    {
        var_49 = (((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 0U))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))));
        /* LoopSeq 2 */
        for (int i_17 = 2; i_17 < 19; i_17 += 3) 
        {
            var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */_Bool) arr_46 [i_17 + 1])) ? ((+(((/* implicit */int) arr_46 [i_17 - 2])))) : ((~(((/* implicit */int) (_Bool)1))))))));
            var_51 = ((((((/* implicit */_Bool) min((-8631091270997004491LL), (((/* implicit */long long int) var_6))))) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0U)))))) / (((/* implicit */long long int) ((((4194303U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) - (((4005132486U) - (((/* implicit */unsigned int) arr_48 [i_17]))))))));
            var_52 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_46 [i_17 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_46 [(unsigned char)17]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_17]))))) : (((((/* implicit */_Bool) arr_47 [i_16] [i_16])) ? (var_1) : (((/* implicit */long long int) 4050336578U))))))) : (((arr_50 [i_16 - 3] [i_16] [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551612ULL)))));
        }
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            var_53 = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1008U))) ? ((-(((arr_47 [i_16 - 2] [i_18]) / (((/* implicit */int) arr_51 [i_18])))))) : (((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_52 [i_18]))))) - (((/* implicit */int) arr_50 [i_16 - 2] [i_18] [i_18])))));
            /* LoopSeq 1 */
            for (int i_19 = 3; i_19 < 19; i_19 += 1) 
            {
                var_54 &= ((/* implicit */long long int) min(((+(((/* implicit */int) ((unsigned short) var_9))))), (((/* implicit */int) (unsigned short)13856))));
                var_55 = ((/* implicit */int) var_0);
            }
            var_56 |= ((/* implicit */_Bool) ((int) (+(min((arr_55 [8U] [i_18]), (((/* implicit */long long int) var_0)))))));
            var_57 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_16 - 1])) << (((((/* implicit */int) min((arr_54 [i_16 - 3]), (arr_54 [i_16 - 2])))) - (184)))));
        }
    }
    var_58 |= ((/* implicit */unsigned int) min((var_7), (max((var_3), (var_9)))));
    /* LoopNest 2 */
    for (long long int i_20 = 2; i_20 < 9; i_20 += 4) 
    {
        for (unsigned char i_21 = 2; i_21 < 8; i_21 += 1) 
        {
            {
                var_59 += ((/* implicit */unsigned int) var_6);
                var_60 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_20])) << ((((+(((/* implicit */int) var_7)))) - (223)))))), (min((((/* implicit */long long int) (+(2147483647)))), (var_5)))));
            }
        } 
    } 
}
