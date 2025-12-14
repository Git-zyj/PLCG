/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163696
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) min((var_16), (var_12)));
        arr_2 [i_0] = (short)31051;
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(short)3])) >> (((((/* implicit */int) var_11)) - (8499)))))) : (var_5)));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4 + 1])) | (((/* implicit */int) var_15))));
                    var_19 = ((((/* implicit */int) arr_14 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 2])) ^ (((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2])));
                    var_20 = ((/* implicit */short) max((var_20), (arr_1 [i_1] [i_2])));
                    arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3984254108U)) ? (((/* implicit */int) arr_1 [i_4 + 2] [i_4 + 3])) : (12288)));
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_21 = (((+(arr_18 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
                        var_22 = (+(427544062U));
                    }
                    var_23 = ((/* implicit */short) 163383473U);
                    var_24 = ((/* implicit */short) min((var_24), (arr_8 [2U])));
                }
                for (short i_7 = 2; i_7 < 10; i_7 += 4) 
                {
                    arr_24 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_2])) < (((/* implicit */int) (short)20247))));
                    var_25 = arr_5 [i_3];
                    var_26 = ((/* implicit */unsigned int) -1841953569);
                }
                var_27 = ((/* implicit */short) ((-1841953569) > (var_1)));
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-31051))));
            }
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                arr_27 [i_1] [i_2] [i_2] [i_8] = ((/* implicit */short) ((arr_11 [i_1] [i_2] [i_2] [i_1]) * (((6) & (((/* implicit */int) (short)0))))));
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_29 &= ((/* implicit */short) arr_11 [i_1] [i_2] [i_8] [i_9]);
                    var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)26628)) ? (var_1) : (((/* implicit */int) var_4))));
                    arr_30 [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)23849)) ? ((-(0U))) : (4137284333U)));
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(163383472U)))) ? (((unsigned int) 163383492U)) : (((/* implicit */unsigned int) var_1))));
                    var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_9])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_2] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))));
                }
                for (short i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    var_33 = ((/* implicit */short) arr_15 [i_1] [i_10 + 2] [i_10 + 1] [i_10 + 2]);
                    /* LoopSeq 1 */
                    for (short i_11 = 4; i_11 < 10; i_11 += 2) 
                    {
                        var_34 = ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) arr_34 [i_1] [i_2] [i_8] [i_1])));
                        var_35 = ((/* implicit */short) min((var_35), (arr_1 [i_8] [i_8])));
                    }
                    var_36 ^= ((short) var_7);
                }
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_37 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) 268433408))));
                        var_38 ^= ((((/* implicit */_Bool) arr_23 [i_1] [i_13] [(short)5] [i_12])) ? (arr_40 [i_1] [i_8] [i_8] [i_12] [i_13]) : (((/* implicit */unsigned int) var_1)));
                        var_39 = ((/* implicit */short) ((unsigned int) var_7));
                    }
                    var_40 ^= ((/* implicit */short) (-((~(1005686259U)))));
                    /* LoopSeq 1 */
                    for (short i_14 = 2; i_14 < 8; i_14 += 1) 
                    {
                        var_41 ^= ((/* implicit */short) arr_11 [i_1] [i_2] [i_2] [i_8]);
                        arr_45 [(short)1] [i_2] [i_14] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) 3717257654U);
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (-(0U))))));
                        var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 2]))));
                    }
                    var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)21782)) ? (((/* implicit */int) (short)-21637)) : (1595172775)));
                }
                var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_8] [10U] [i_8] [i_8])) : (-1232787316)))));
            }
            var_46 = ((short) (short)-10102);
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            var_47 ^= arr_42 [i_1] [i_1] [i_1] [i_1] [i_1];
            var_48 = ((/* implicit */int) (~(arr_40 [i_1] [i_1] [i_1] [i_1] [i_15])));
            var_49 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (3950275504U) : (var_0))) << (((((/* implicit */int) ((short) var_13))) + (4257)))));
        }
        var_50 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-32468)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_10))));
    }
    for (short i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        arr_51 [i_16] = var_1;
        var_51 = ((/* implicit */short) max((max(((+((-2147483647 - 1)))), ((~(((/* implicit */int) (short)(-32767 - 1))))))), (((int) (short)-18838))));
        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (short)4636)) ? (((/* implicit */int) (short)19968)) : (-1181138445)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_17 = 0; i_17 < 17; i_17 += 4) 
    {
        var_53 = ((/* implicit */short) (((+(3101546922U))) != (((/* implicit */unsigned int) arr_49 [i_17]))));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
        {
            arr_56 [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_18] [i_17])) ? (((/* implicit */int) (short)14062)) : (((/* implicit */int) (short)480))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4))))) : (((unsigned int) arr_54 [i_18] [i_18])));
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (~((-2147483647 - 1)))))));
            var_55 *= ((/* implicit */short) ((3101546922U) >= (((/* implicit */unsigned int) arr_50 [i_17]))));
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                arr_60 [i_17] [i_18] [i_19] = ((/* implicit */short) arr_57 [i_18] [i_18] [i_19]);
                arr_61 [i_18] [i_19] [i_19] = ((/* implicit */short) (~(((/* implicit */int) arr_55 [i_18]))));
                var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1126054772U)) ? (435935980U) : (0U)))))));
                var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14062)) - (((((/* implicit */int) var_4)) << (((((/* implicit */int) (short)-31239)) + (31240))))))))));
            }
            var_58 = 2898650504U;
        }
        for (int i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_21 = 3; i_21 < 16; i_21 += 1) 
            {
                for (short i_22 = 3; i_22 < 14; i_22 += 1) 
                {
                    {
                        arr_72 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_21] [i_21])) ? (((/* implicit */int) arr_69 [i_21] [i_21 - 1] [i_21 - 3] [i_21 - 3] [i_21] [i_21])) : (((/* implicit */int) ((short) arr_49 [i_21])))));
                        var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_22 + 2] [i_20] [i_20] [i_21 - 2] [0U] [0U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_17] [i_17]))))) : (((/* implicit */int) var_12)))))));
                        var_60 = ((/* implicit */short) max((var_60), (((short) arr_66 [i_22 + 3] [i_21 + 1] [i_22 + 3] [i_21 + 1]))));
                    }
                } 
            } 
            var_61 = ((/* implicit */short) max((var_61), (((short) arr_70 [i_17] [i_20] [i_20] [i_20] [i_20] [i_17]))));
            var_62 = ((/* implicit */short) ((((/* implicit */_Bool) (short)10916)) ? (879619182U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3114)))));
        }
        var_63 ^= ((/* implicit */unsigned int) var_15);
        var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) var_5))));
        arr_73 [i_17] &= ((/* implicit */short) ((unsigned int) arr_58 [i_17] [i_17]));
    }
}
