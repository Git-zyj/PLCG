/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131014
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) 8641347248495533896LL)))))))));
    var_14 = ((/* implicit */_Bool) ((var_3) % (((((((/* implicit */_Bool) 8641347248495533896LL)) ? (var_3) : (var_3))) | ((~(((/* implicit */int) (unsigned short)32243))))))));
    var_15 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((-8641347248495533897LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (((800229184504049804ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            arr_6 [21] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) arr_3 [i_1] [i_1 - 3]));
            arr_7 [i_1] [i_0] [i_1 + 1] = ((/* implicit */long long int) (unsigned short)63);
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_17 += (~(((/* implicit */int) ((short) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) -8641347248495533896LL))))))));
                        var_19 += ((/* implicit */unsigned char) 17646514889205501827ULL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_20 = ((/* implicit */int) ((long long int) (short)-32752));
            arr_16 [i_0] [i_4] = ((/* implicit */_Bool) ((short) arr_8 [i_0]));
            var_21 ^= (+((~(17646514889205501818ULL))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            arr_19 [i_5] = ((/* implicit */long long int) (((+(((/* implicit */int) ((_Bool) (unsigned short)35420))))) >= (((int) 8641347248495533925LL))));
            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((-8641347248495533896LL), (max((((/* implicit */long long int) (_Bool)1)), (4499264840011007814LL)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5 + 2])) ? (280950028U) : (280950017U)))) ? (max((((/* implicit */unsigned long long int) arr_14 [i_0] [(short)9])), (17646514889205501827ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 1])) ? (((/* implicit */int) arr_17 [i_5 + 3] [i_5 + 3])) : (((/* implicit */int) arr_10 [i_5] [i_5 + 4] [i_0] [i_5 + 4])))))))));
            arr_20 [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_8 [i_0]) ? (((unsigned int) arr_9 [i_5 + 1] [i_5] [i_5 - 2] [i_5 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_5 + 4])))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_23 ^= ((/* implicit */_Bool) (unsigned short)30111);
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            arr_28 [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_24 [i_6] [i_7] [i_7]), (arr_24 [i_7] [i_6] [i_6]))))));
            arr_29 [i_6] [i_6] [i_7] = var_0;
        }
        arr_30 [i_6] = ((/* implicit */signed char) ((unsigned long long int) arr_4 [11] [i_6]));
        /* LoopSeq 4 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_25 [i_6] [i_8])) ? (arr_25 [i_6] [i_8]) : (593006560U))) / (((((/* implicit */_Bool) arr_25 [i_6] [i_8])) ? (arr_25 [i_6] [i_6]) : (arr_25 [i_6] [i_8])))));
            var_25 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)3))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_14 [i_10 + 1] [i_9 + 2])))));
                        var_27 ^= (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((max((17887428266962239441ULL), (((/* implicit */unsigned long long int) (signed char)-55)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_10] [i_9] [i_8] [(unsigned short)11])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) arr_22 [(unsigned char)6])))))));
                        arr_41 [i_6] [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_9 + 2]))) : (arr_5 [i_10 + 2]))));
                    }
                } 
            } 
            var_30 ^= ((/* implicit */short) (+(15134962600623410959ULL)));
        }
        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            arr_45 [i_11] = ((/* implicit */_Bool) ((signed char) (!(arr_35 [i_6] [i_11] [i_6] [i_6]))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (_Bool)1))));
        }
        for (short i_12 = 2; i_12 < 15; i_12 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_13 = 3; i_13 < 13; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) arr_11 [i_13 + 2] [i_13 + 1] [i_13 - 1] [i_13 - 3] [i_13 + 2]))), (min((((((/* implicit */_Bool) arr_33 [i_13])) ? (arr_38 [i_6] [i_13] [i_13] [i_14] [i_13 - 3] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_12 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30126)) ? (((/* implicit */unsigned int) 1849375315)) : (127U))))))));
                            arr_55 [i_15] [i_15] [i_13 + 3] [i_13] [i_14] [i_14] [i_13 + 3] = ((/* implicit */short) max(((!(((var_1) != (((/* implicit */long long int) 2047)))))), (arr_51 [i_6] [i_14])));
                        }
                    } 
                } 
            } 
            arr_56 [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))) * (var_11)));
            var_33 += ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 18446744073709551615ULL)))));
        }
        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_17 = 1; i_17 < 13; i_17 += 2) 
            {
                var_34 += ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_50 [i_6] [i_6] [i_16] [(unsigned short)12])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_17 + 1])))))));
                var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)76)), (17646514889205501839ULL)));
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        {
                            var_36 ^= ((/* implicit */short) 127U);
                            arr_66 [i_19] [i_16] [i_17] [i_16] [i_19] = ((((/* implicit */_Bool) arr_24 [i_19] [i_18 + 1] [i_17 + 1])) || ((!(((/* implicit */_Bool) arr_62 [i_6])))));
                        }
                    } 
                } 
                arr_67 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_61 [i_17 - 1])) ? (arr_61 [i_17 + 2]) : (arr_61 [i_17 - 1]))), (arr_61 [i_17 + 2])));
                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) 2047))));
            }
            arr_68 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (1ULL)))))) ? (max((arr_5 [i_16]), (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) arr_34 [i_6] [i_6]))))))) : (18446744073709551615ULL)));
            arr_69 [i_6] [i_6] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_8 [i_16]) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_54 [i_6] [i_16])))))));
        }
    }
}
