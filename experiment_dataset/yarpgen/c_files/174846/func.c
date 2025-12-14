/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174846
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
    var_17 = (!(((/* implicit */_Bool) ((unsigned int) max((var_3), (((/* implicit */long long int) var_11)))))));
    var_18 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))))));
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) max(((-(((long long int) arr_1 [i_0] [i_0])))), (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) max((arr_2 [i_0]), (arr_2 [i_0]))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? ((~(351283965))) : (((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0] [i_0] [i_1])), (arr_3 [i_0] [12LL] [i_1]))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((((unsigned int) ((((/* implicit */_Bool) arr_0 [(short)13])) ? (arr_0 [12ULL]) : (arr_0 [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)6]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1] [12]), (arr_6 [5LL])))) : (((/* implicit */int) (!(arr_5 [14LL] [i_1] [i_0])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_22 = ((/* implicit */long long int) (~((~(arr_0 [(unsigned char)7])))));
                arr_11 [i_0] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) (~((~(arr_0 [i_1])))));
            }
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) (+((-((+(((/* implicit */int) arr_2 [0]))))))));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_18 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((int) min((((((/* implicit */_Bool) arr_2 [(short)11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)6] [(unsigned short)15]))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) arr_3 [i_0] [i_3] [3])))));
                arr_19 [i_3] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [11ULL]);
                arr_20 [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1] [i_4]);
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)98))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_28 [i_0] = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (-8911078034381540009LL) : (13194139533312LL)))) ? (((long long int) arr_13 [i_6] [i_3])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_31 [i_0] [0] [13] [i_5] [i_6] [i_5]), (((/* implicit */unsigned int) arr_17 [i_0] [i_5])))))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_24 = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0]);
                    }
                }
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (signed char)89)) ? (arr_15 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [8LL] [i_3] [i_0]))))), (3146877918U)))));
            }
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) arr_34 [i_8] [2U] [i_8]);
                var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((_Bool) arr_23 [i_0])), (arr_34 [(short)3] [i_0] [i_8])))), (arr_22 [i_8] [i_3] [i_0])));
            }
            var_27 = arr_5 [i_0] [i_3] [i_3];
            arr_35 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) 534030842851282168LL))))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_28 ^= arr_15 [(unsigned char)15];
            arr_39 [i_0] = ((/* implicit */unsigned char) max((10326416831404895483ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)6157)))))));
        }
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            arr_42 [i_10] [(unsigned char)14] = ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_0]))));
            var_29 = ((/* implicit */long long int) arr_31 [15LL] [6] [6ULL] [12LL] [i_0] [i_0]);
            arr_43 [9] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) arr_36 [12] [i_10]))))) ? (arr_4 [i_0] [i_10]) : (max((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_26 [6U] [i_10])))))));
            var_30 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0]);
            /* LoopSeq 4 */
            for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                arr_46 [i_0] [i_0] [i_0] [(unsigned char)12] = ((/* implicit */int) arr_8 [(short)7] [i_11] [i_11]);
                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_21 [(unsigned char)10])))), (((/* implicit */int) (!(((/* implicit */_Bool) 973654236))))))))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))))));
                arr_49 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (unsigned char)248))))))));
                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_10] [6U])))))))) ? (arr_29 [i_0] [i_10] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
                arr_50 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [(signed char)13] [(signed char)13])))))));
            }
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_15 [i_10])), (max((arr_1 [i_0] [i_10]), (((/* implicit */long long int) arr_24 [i_0] [i_10] [(unsigned short)2] [i_10]))))))));
                var_34 = ((/* implicit */_Bool) arr_38 [i_0]);
                var_35 *= ((/* implicit */unsigned int) max((arr_8 [i_0] [i_10] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(short)4] [i_13]))))))))));
                arr_54 [i_0] [i_0] [3U] = ((/* implicit */unsigned short) (~(max(((~(arr_45 [6U] [i_10] [i_13] [14U]))), (((/* implicit */unsigned long long int) (~(-8759204201028516962LL))))))));
            }
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                var_36 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [(short)2]);
                var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_51 [i_0] [i_10]))));
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_38 -= ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (~(arr_47 [i_14] [i_15])))));
                    var_39 *= ((/* implicit */unsigned char) ((arr_34 [14] [i_10] [i_10]) ? (min((min((((/* implicit */long long int) (_Bool)0)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 453259703)))) : (((((/* implicit */_Bool) arr_33 [i_10])) ? (((long long int) arr_30 [(short)6] [i_10] [i_10] [(short)6] [i_14] [(short)6] [6])) : (((/* implicit */long long int) arr_22 [i_15] [(unsigned short)10] [i_15]))))));
                }
            }
        }
        var_40 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_37 [14U] [0LL] [6ULL])), (((((/* implicit */_Bool) max((13355401431461261557ULL), (((/* implicit */unsigned long long int) (signed char)63))))) ? (max((((/* implicit */unsigned long long int) 3916532735U)), (arr_59 [i_0] [i_0] [i_0] [i_0] [15] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
    {
        arr_62 [i_16] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_16] [i_16] [i_16])) ? (((long long int) arr_17 [i_16] [(unsigned char)9])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_16] [i_16] [i_16] [1ULL])))))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 514048486U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (378434561U)))))));
        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_16]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            arr_65 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 130023424U)) ? (((/* implicit */int) (short)2561)) : (((/* implicit */int) (short)-41)))))));
            arr_66 [i_17] [8] [i_17] = ((/* implicit */unsigned char) arr_51 [11U] [i_17]);
        }
    }
    for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
    {
        var_42 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) (~(arr_67 [i_18])))));
        var_43 = ((/* implicit */unsigned short) arr_68 [i_18]);
    }
}
