/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137253
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) 962522740006989058LL)), (arr_2 [i_0] [i_1]))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_0] [14U])), (arr_1 [i_0] [i_2 - 2]))))))) <= (arr_10 [i_1] [i_2] [i_1] [i_0])));
                            var_16 = ((/* implicit */unsigned int) (((+((~(arr_1 [i_0] [i_0]))))) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)175)) > (((/* implicit */int) arr_5 [i_3 - 1] [6U]))))), (arr_5 [i_0] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_17 -= arr_8 [i_0] [i_5] [i_0];
                            arr_16 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_4] [i_0])))) || (((/* implicit */_Bool) (unsigned char)223))))), (min((arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_5 [i_1] [i_1]))));
                                arr_25 [i_0] [14LL] [i_6] [10U] [14LL] [i_7] [i_8 - 3] = ((((/* implicit */_Bool) arr_17 [i_1] [(signed char)4] [i_7] [(signed char)4])) || (((/* implicit */_Bool) (+(max((arr_23 [i_0]), (((/* implicit */long long int) arr_20 [i_7]))))))));
                                arr_26 [i_0] [(unsigned short)5] [i_7] [i_0] = max((min((arr_21 [i_1]), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])), (arr_12 [(unsigned char)5] [i_7] [i_1] [i_1])))))), (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_6] [i_7])));
                                arr_27 [i_0] [i_1] [i_1] [i_6] [i_6] [i_1] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_8] [i_1]))))) <= (((((arr_3 [i_0] [i_6] [i_8 + 1]) / (((/* implicit */long long int) arr_18 [13ULL] [(_Bool)1] [(_Bool)1] [i_0])))) / ((+(arr_3 [i_0] [i_6] [i_8])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_42 [i_11] [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && ((!(((/* implicit */_Bool) arr_39 [i_12] [i_12] [i_12] [i_12] [16U])))))))));
                                arr_43 [i_11] [i_12] [13ULL] [13ULL] [i_11] = (-((~(arr_37 [i_9] [i_9]))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_34 [i_9] [i_9] [i_9])), ((unsigned short)28)))) ? (((/* implicit */int) arr_35 [(signed char)19] [i_13] [(signed char)19])) : (((((/* implicit */int) (signed char)-22)) % (((/* implicit */int) arr_31 [i_11] [i_12]))))))) && (((/* implicit */_Bool) min((arr_30 [i_10]), (arr_30 [i_9])))))))));
                                arr_44 [i_9] [i_10] [i_11] [i_12] [21] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_37 [i_9] [i_11])) || (((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_12] [i_11])))));
                                arr_45 [i_10] [i_10] [i_10] [i_10] [i_11] [i_11] [i_13] = ((/* implicit */unsigned char) (~((+(((((/* implicit */unsigned long long int) 2664801171U)) * (arr_33 [i_13] [16LL] [i_10])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned char) (-(((arr_50 [i_9] [i_9] [i_9] [i_11] [i_9] [i_10] [i_9]) * ((+(arr_32 [i_9])))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2664801180U)) && (((/* implicit */_Bool) arr_32 [i_9])))))) ? ((((~(arr_52 [i_15] [i_14] [i_11] [i_9] [i_9]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_9] [i_9] [11LL] [i_9] [i_15 + 1])))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)5)), (arr_29 [i_9]))))) ^ (arr_47 [i_15 + 1] [i_11] [i_11] [i_9])))));
                                arr_53 [i_11] [i_14] [i_11] [i_9] [i_9] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (((!((_Bool)1))) || (((/* implicit */_Bool) min((arr_48 [i_15 - 1] [i_9] [i_11] [i_10] [i_9]), (arr_35 [i_9] [i_9] [i_11]))))))), (arr_30 [i_9])));
                                var_22 = ((/* implicit */unsigned int) arr_31 [i_9] [i_9]);
                                arr_54 [i_11] [i_11] [i_10] [i_14] [9ULL] [i_11] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_10] [(unsigned char)4] [i_14])) << (((((/* implicit */int) arr_49 [i_14] [i_14])) - (58584)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_60 [i_11] = (~(((((/* implicit */_Bool) ((arr_59 [i_9] [i_9] [22LL] [22LL] [(_Bool)1]) % (((/* implicit */unsigned long long int) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (min((arr_56 [i_17] [i_17 + 3] [i_17 - 1] [i_17 - 1]), (((/* implicit */unsigned int) arr_34 [i_11] [i_11] [i_11])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_9] [i_10] [9LL] [i_9] [i_17]) <= (((/* implicit */long long int) arr_52 [10LL] [10LL] [i_11] [10LL] [10LL])))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [i_16] [i_17 + 3])) <= (((/* implicit */int) max((arr_48 [i_17 + 2] [i_17 + 3] [i_16 + 1] [i_16 - 1] [i_11]), (arr_48 [i_17 + 1] [i_17 + 3] [i_16] [i_16 + 1] [i_16]))))));
                                arr_61 [i_17 - 1] [i_11] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((int) arr_56 [i_9] [i_9] [i_9] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_18 = 0; i_18 < 25; i_18 += 3) 
    {
        for (int i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            for (int i_20 = 0; i_20 < 25; i_20 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */long long int) (-((+((-(((/* implicit */int) arr_68 [i_18] [i_20] [i_21]))))))));
                                var_25 += ((/* implicit */long long int) max(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_18]))) : (min((arr_71 [i_19] [i_20]), (((/* implicit */unsigned int) (_Bool)1)))))), ((+(min((arr_67 [i_18] [i_20]), (arr_75 [i_19] [i_19] [i_20] [i_21] [i_21])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        for (unsigned int i_24 = 1; i_24 < 23; i_24 += 2) 
                        {
                            {
                                arr_80 [i_18] [i_19] [i_19] [i_23] [(unsigned char)16] [(signed char)12] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_74 [19U] [19U] [i_20] [19U] [i_23] [i_24])))) ? (min((arr_78 [i_24 + 1] [23LL] [i_20] [i_19] [23LL]), (((/* implicit */unsigned int) arr_79 [i_23] [i_23] [i_23] [i_23] [i_24] [i_20])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_20] [i_20] [i_20])))));
                                arr_81 [i_23] [i_24] [i_19] [i_23] [i_18] [i_19] [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_71 [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_75 [i_24 + 1] [i_23] [i_20] [i_19] [i_18]))), (((/* implicit */unsigned int) (~(arr_65 [i_19] [i_20])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 0; i_25 < 25; i_25 += 2) 
                    {
                        for (unsigned int i_26 = 0; i_26 < 25; i_26 += 2) 
                        {
                            {
                                arr_86 [i_26] = ((/* implicit */int) ((((/* implicit */unsigned int) -168788585)) ^ (((((/* implicit */_Bool) arr_67 [i_19] [i_20])) ? (arr_67 [i_18] [i_26]) : (arr_67 [i_18] [i_20])))));
                                var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_62 [(unsigned short)0])) || (((/* implicit */_Bool) arr_68 [i_18] [i_18] [i_18])))))) <= (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) 4294967287U))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_19] [i_20])) && (((/* implicit */_Bool) arr_66 [i_18] [i_20] [4]))))), ((-(arr_70 [i_26] [i_20] [i_20] [5LL])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
