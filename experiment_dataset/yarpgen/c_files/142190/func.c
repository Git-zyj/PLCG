/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142190
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [5] [i_0] = ((/* implicit */short) 1792);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = arr_7 [i_2] [i_2];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned char) var_0);
                                var_12 |= ((/* implicit */int) ((unsigned long long int) ((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55403))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55403))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_13 = ((1407878827) <= (1407878827));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_8 [0U] [9] [i_5]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_25 [i_0] [9ULL] [i_6] [i_7 + 1] [i_7] [i_8] = ((/* implicit */unsigned short) min((-1793), (((/* implicit */int) arr_5 [i_0 + 1] [i_7 - 3]))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_21 [i_6] [i_6] [i_6]))));
                        arr_26 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_0)));
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) ((1090779390645412870ULL) / (1090779390645412893ULL)));
        }
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            arr_29 [i_9] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1090779390645412870ULL)) ? (arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            arr_30 [i_9] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((arr_13 [i_0 + 1] [i_0] [i_0 + 1]) / (var_0))) : (((/* implicit */unsigned long long int) (+(((var_6) % (((/* implicit */int) (_Bool)1))))))));
            arr_31 [i_0] [i_9] [(_Bool)1] = ((/* implicit */short) min((((unsigned long long int) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (((/* implicit */unsigned long long int) ((arr_15 [i_0 + 1]) ? (((/* implicit */int) arr_15 [i_0 + 1])) : (((/* implicit */int) arr_15 [i_0 + 1])))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_35 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) arr_18 [i_0 + 1]))) + (2147483647))) >> ((((~(((/* implicit */int) arr_18 [i_0 + 1])))) - (41)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_38 [i_11 + 1] [i_11] [i_11] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) min((min((arr_2 [i_11] [i_10]), (15183629532959804270ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_36 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (short)32761))))))));
                var_17 = ((/* implicit */_Bool) ((signed char) max((min((((/* implicit */int) (short)8191)), (var_9))), (((/* implicit */int) arr_16 [i_0 + 1])))));
                var_18 -= ((/* implicit */unsigned long long int) max((arr_7 [(short)4] [i_11 - 1]), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 15183629532959804276ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_11] [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 4) /* same iter space */
            {
                arr_41 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_10])) ? (arr_20 [(short)10] [i_12]) : (((/* implicit */int) (_Bool)1)))) / (((int) arr_6 [i_12] [i_10] [i_0]))));
                arr_42 [i_0] [i_10] [(unsigned short)11] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) / (var_8))) / (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)84)) >> (((/* implicit */int) var_5)))))));
            }
            var_20 = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-774))))), (min((6862385466297174289ULL), (((/* implicit */unsigned long long int) var_1)))))));
        }
        arr_43 [i_0] [8] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32761)) * (-30)));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 8; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                {
                    arr_50 [i_13] [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-1)), ((short)-1)));
                    arr_51 [i_13] [i_14 + 2] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -241435515)), (var_7)))))))) : (var_7)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((_Bool) arr_11 [(short)2] [(unsigned short)10] [i_13] [(_Bool)1] [i_13] [i_13])))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 1; i_19 < 8; i_19 += 3) 
                {
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_57 [(signed char)4])) : (1073741823)))) - (var_8))) : (((/* implicit */unsigned int) ((arr_6 [(signed char)0] [i_18] [i_19]) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) var_3)))))));
                    var_23 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_5 [i_19 + 2] [i_17 - 1])), (arr_56 [i_19 + 1] [i_19 + 2] [i_19])))));
                }
                var_24 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_16]))) : (arr_27 [i_18] [i_17 - 1] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (min((var_0), (((/* implicit */unsigned long long int) 2044687435)))))), (((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) var_6))))) + (((unsigned long long int) var_7)))));
                var_25 = ((/* implicit */int) min((arr_27 [i_17 - 1] [i_17 + 1] [i_17 - 1]), (min((arr_44 [i_17 - 1] [i_17 - 1]), (arr_44 [i_17 + 1] [i_17 - 1])))));
                var_26 ^= ((((/* implicit */_Bool) (signed char)125)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-25318)));
            }
            arr_62 [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_16] [i_17])))))) ? (((/* implicit */int) arr_8 [i_17 + 1] [i_17 + 1] [i_17 + 1])) : (((/* implicit */int) var_5)))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                arr_67 [i_16] [i_20] [4ULL] [i_20] = ((/* implicit */unsigned long long int) var_4);
                arr_68 [5ULL] [i_16] [i_16] = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) ((2305843009213693951ULL) >= (14150715698986495459ULL)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_21])))))))), ((signed char)76)));
                var_27 = ((((/* implicit */int) ((arr_36 [i_21] [i_20] [8] [i_16]) <= (arr_36 [i_16] [i_16] [7ULL] [i_16])))) * (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_2)))))));
                arr_69 [i_16] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_53 [i_21]))));
                arr_70 [i_16] = ((/* implicit */int) (-(((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191)))))));
            }
            arr_71 [i_16] [i_20] = min((((/* implicit */unsigned long long int) arr_65 [i_16] [i_16] [i_20] [(_Bool)1])), (((((/* implicit */unsigned long long int) 2433833543U)) - (18446744073709551615ULL))));
            var_28 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_16] [i_16]))))) % (((((/* implicit */_Bool) arr_14 [i_20] [i_20])) ? (((/* implicit */int) arr_14 [i_16] [i_16])) : (((/* implicit */int) arr_14 [i_20] [i_16]))))));
            arr_72 [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_49 [(signed char)4] [(signed char)2] [i_20] [7ULL]);
        }
        arr_73 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 64512ULL)) ? (arr_45 [i_16] [i_16]) : (((/* implicit */unsigned long long int) var_8)))))) ? (((((arr_61 [i_16] [8U] [i_16]) + (3263114540749747340ULL))) >> (((1407878827) - (1407878806))))) : (((((/* implicit */_Bool) arr_64 [i_16])) ? (max((arr_28 [i_16] [i_16]), (((/* implicit */unsigned long long int) (signed char)-52)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_16] [i_16] [i_16] [i_16]))) : (var_8))))))));
    }
    var_29 = ((/* implicit */short) min((((/* implicit */unsigned int) (short)8196)), (1861133727U)));
    var_30 = ((/* implicit */unsigned char) var_6);
}
