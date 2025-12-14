/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171540
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) (-(69837258))))))));
        var_18 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) / (max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_19 = ((/* implicit */int) ((long long int) min((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0]))), (((arr_0 [13U]) ^ (arr_1 [5ULL]))))));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_1]) > (arr_2 [(unsigned short)6])))) - ((+(var_13)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_3 [i_1])))) != (((((/* implicit */_Bool) arr_0 [1ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [7U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_23 = ((/* implicit */int) arr_2 [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                var_24 += ((/* implicit */int) ((unsigned short) 1099720102));
                arr_10 [0U] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_1] [11ULL] [i_3 - 1] [i_3]))) ? (((/* implicit */int) arr_4 [i_3 + 1])) : ((+(((/* implicit */int) arr_4 [i_3 + 1]))))));
                arr_11 [(unsigned char)11] [i_2] [i_2] [i_3] = ((/* implicit */int) arr_2 [i_3]);
            }
            var_25 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((arr_7 [i_1] [12]) != (((/* implicit */unsigned long long int) arr_6 [4LL] [10] [i_1] [i_1]))))), (arr_1 [i_1]))), (((/* implicit */unsigned long long int) arr_3 [i_2]))));
        }
        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 3; i_5 < 12; i_5 += 3) 
            {
                arr_16 [i_1] [i_5] [7ULL] [i_1] = ((/* implicit */unsigned long long int) ((long long int) 1250465137));
                arr_17 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53134)) || (((/* implicit */_Bool) var_16))));
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                for (int i_7 = 4; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_24 [i_7] [(_Bool)1] [i_4] [11LL] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_15 [i_1]) : (arr_23 [(unsigned short)7] [i_6 + 2]))), (arr_8 [i_1] [i_7 + 1] [i_6 - 1] [i_1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_8] [6ULL] [2LL] [7U] = ((/* implicit */unsigned char) (unsigned short)53127);
                            arr_28 [i_8] [i_6] [12U] [2U] [i_6] = arr_23 [i_1] [(unsigned char)11];
                            var_26 ^= ((/* implicit */unsigned int) 13739104102976202290ULL);
                            var_27 = max((((/* implicit */int) ((((/* implicit */int) arr_25 [8] [i_1] [i_4 + 1] [i_7 + 1])) < (((/* implicit */int) arr_25 [i_1] [i_4 + 3] [i_4 + 1] [i_7 - 3]))))), ((+(((/* implicit */int) var_10)))));
                        }
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_28 = ((_Bool) 13739104102976202290ULL);
                            arr_31 [i_1] [6ULL] [12U] [i_1] [12ULL] [(unsigned short)8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_19 [i_6 + 1] [i_7 - 1])), (max((((/* implicit */unsigned long long int) 2147483647)), (2992425277143062588ULL)))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            arr_34 [i_10] [i_10] = ((/* implicit */unsigned int) arr_1 [i_1]);
            arr_35 [i_10] [i_10] [i_1] = ((/* implicit */int) arr_4 [i_1]);
            var_29 = ((/* implicit */short) arr_2 [i_1]);
            var_30 ^= ((/* implicit */unsigned long long int) arr_15 [i_1]);
        }
    }
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) ((arr_33 [(short)12]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_39 [i_11] [i_11] = arr_5 [i_11] [i_11];
        var_32 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)12409)), (((((/* implicit */_Bool) (unsigned short)7366)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_22 [3U] [(unsigned char)8] [i_11] [i_11] [9LL] [i_11])), (var_2)))) : (min((((/* implicit */unsigned long long int) arr_25 [i_11] [(unsigned char)3] [4] [12LL])), (arr_5 [i_11] [7LL])))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                arr_49 [i_12] [i_12] [(unsigned char)11] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 0)))));
                var_33 = ((/* implicit */unsigned int) (+(arr_37 [i_14])));
            }
            var_34 ^= ((/* implicit */unsigned short) (+(arr_43 [i_13])));
            arr_50 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_13])) * ((-(((/* implicit */int) (unsigned short)28729))))));
            arr_51 [i_12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_30 [i_12] [i_12] [i_12] [i_12] [i_13])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            var_35 ^= ((/* implicit */long long int) arr_26 [i_12] [i_12] [i_12] [i_12] [i_12]);
        }
    }
    var_36 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        var_37 += ((/* implicit */_Bool) (+(arr_52 [i_15])));
        var_38 = arr_52 [(unsigned char)7];
        arr_54 [i_15] = ((/* implicit */unsigned short) arr_53 [i_15]);
    }
    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
    {
        var_39 = (unsigned short)53127;
        var_40 &= (!(((/* implicit */_Bool) 1522884431)));
        arr_57 [i_16] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_56 [i_16] [i_16])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_16] [21U])) || (((/* implicit */_Bool) 1522884434))))))));
        arr_58 [i_16] [i_16] = ((/* implicit */unsigned short) 2777864595U);
    }
    for (long long int i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (+(arr_59 [i_17] [i_17]))))));
        arr_63 [(_Bool)1] [0] = ((/* implicit */int) ((_Bool) arr_59 [i_17] [(unsigned short)19]));
        arr_64 [i_17] [i_17] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)53127))))));
        arr_65 [i_17] = ((/* implicit */int) var_3);
    }
}
