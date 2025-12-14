/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151982
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_8))))))), (var_11)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_10 [i_0] [i_1] [i_2] [i_3] [20ULL]))) % (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) var_9))))))));
                            var_19 = ((/* implicit */unsigned short) ((arr_0 [i_1 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6654)))));
                            arr_14 [i_0 - 1] [i_1 - 1] [i_0] [i_3] [i_0] [i_0 - 1] = ((short) var_14);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
        {
            arr_19 [i_5] |= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_22 [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_7))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                var_20 ^= ((/* implicit */short) arr_9 [i_0] [i_5] [i_0] [i_0]);
                arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) var_11))));
            }
            for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_30 [i_8] [i_5] [i_0] [i_8] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_0] [(unsigned short)6] [i_0] [i_8] [i_9]))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_25 [i_0] [i_5] [2U])))))));
                            arr_31 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_15);
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_0 - 3] [i_7 - 1] [i_7 + 1]))))))));
            }
            for (signed char i_10 = 3; i_10 < 21; i_10 += 2) 
            {
                var_23 -= ((/* implicit */unsigned int) arr_27 [i_0] [i_0] [20LL] [i_5]);
                var_24 = ((arr_2 [i_0] [i_10 - 3] [i_10 - 2]) ^ (arr_2 [i_0] [i_10 - 2] [i_10 + 1]));
            }
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (signed char i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (var_15)));
                            arr_43 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_27 [i_0 - 1] [i_5] [i_11] [i_0]))));
                            var_27 = ((/* implicit */_Bool) var_3);
                            var_28 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_12 - 1] [i_11]))));
                            var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10)))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))))))));
                        }
                        for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            arr_51 [i_15] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */long long int) ((/* implicit */int) var_3))) != (var_4)))));
                            arr_52 [i_0] [i_5] [i_11] [i_12] [i_0] [(unsigned short)16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_42 [i_11] [(short)6] [i_11] [i_12 - 3] [i_11]))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            arr_55 [i_0] [i_5] = ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
                            var_31 ^= ((/* implicit */long long int) (+(var_14)));
                        }
                        arr_56 [i_12] [i_5] [i_0] [i_12] [i_0 - 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (12454815745952952684ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 2; i_17 < 20; i_17 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_3))));
                            arr_59 [i_0] [i_0] [0ULL] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 - 3])) >> (((var_7) - (2243814730U)))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
        {
            var_33 &= ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_8))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0])))))));
            arr_62 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_0] [12LL] [12LL])) ? (((/* implicit */int) arr_54 [i_0 - 1] [(signed char)19] [i_0] [(signed char)14] [i_0 - 1])) : (((/* implicit */int) arr_54 [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 2] [i_18]))));
            arr_63 [i_0] [i_0 - 2] [i_0] = 5991928327756598945ULL;
            arr_64 [i_0 + 1] [i_18] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) != (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        }
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                for (signed char i_21 = 3; i_21 < 20; i_21 += 3) 
                {
                    for (long long int i_22 = 2; i_22 < 21; i_22 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) var_11);
                            arr_74 [i_0] [i_19] [i_20] [i_22 - 2] [i_22] [(short)12] [i_22] = ((/* implicit */unsigned long long int) ((arr_9 [i_21 - 3] [6U] [i_0 + 1] [i_22 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            arr_75 [i_0] = ((/* implicit */unsigned long long int) ((((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_0] [i_0 + 2]))))) % (var_7)));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            } 
            arr_76 [i_0] = ((/* implicit */unsigned long long int) var_1);
        }
        var_36 += ((/* implicit */unsigned int) ((var_4) == (arr_37 [i_0] [i_0] [i_0 - 2] [i_0 + 1])));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((((/* implicit */int) var_1)) | (((/* implicit */int) var_11))))));
        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_0] [i_0]))) >= (arr_20 [i_0]))))) + (var_14)));
    }
}
