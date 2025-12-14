/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187155
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
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_3 [(unsigned char)13] [i_0 + 3] = ((/* implicit */unsigned char) arr_2 [i_0 + 3] [i_0 - 1]);
        var_18 = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))) == (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))));
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            arr_10 [(signed char)0] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((min((((/* implicit */unsigned int) -2102338619)), (4294967295U))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) arr_4 [i_1] [i_2]))))))), (((/* implicit */unsigned int) arr_4 [i_2 - 2] [i_1]))));
            arr_11 [(unsigned char)10] [i_2] |= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_2 + 1] [i_1]) & (((/* implicit */long long int) arr_7 [18U]))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_3))) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_16 [i_1] [i_3] [i_4] = ((/* implicit */short) var_14);
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    arr_19 [i_5] = ((((arr_12 [i_1]) ? (arr_17 [i_1] [14] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) % (((/* implicit */long long int) arr_9 [i_1] [(short)17])));
                    var_20 *= ((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1] [i_1]) / (((/* implicit */long long int) arr_2 [i_1] [i_4]))));
                    arr_20 [i_1] [i_5] [(short)6] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)19))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10849))));
                    arr_21 [i_1] [i_4] [i_4] [i_5] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_4]))) : (var_11)));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_14 [i_5]) ? (((/* implicit */int) arr_14 [i_3])) : (var_15))))));
                }
                for (signed char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    arr_24 [i_6] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-32765)) ? (arr_9 [i_3] [i_6]) : (((/* implicit */int) var_4)))) * (((((/* implicit */int) (_Bool)0)) >> (((2009203872) - (2009203856)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 1])) ? (arr_22 [i_7] [i_6 + 4] [i_4] [i_3] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32765)) && (((/* implicit */_Bool) arr_26 [i_1])))))));
                        arr_28 [i_1] [i_3] [i_3] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((arr_17 [i_1] [i_3] [i_4] [i_4]) == (arr_15 [(unsigned short)5] [i_6 - 1] [i_4] [i_3])));
                    }
                    arr_29 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_15 [i_1] [i_3] [(signed char)2] [i_6 + 4]));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (((/* implicit */int) ((-9072731071077498063LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))) : (((/* implicit */int) (signed char)38)))))));
                }
                var_24 = ((/* implicit */unsigned short) var_3);
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (short)-23878)) < (((/* implicit */int) (signed char)-101)))))));
            }
            for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(((var_3) * (((/* implicit */unsigned long long int) arr_15 [i_1] [10ULL] [i_3] [i_8])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    arr_34 [i_9] [i_8] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (arr_2 [i_9 - 1] [i_9])));
                    var_27 = ((/* implicit */int) var_2);
                    var_28 = ((/* implicit */short) arr_23 [i_9]);
                    arr_35 [i_1] [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)0));
                }
                for (signed char i_10 = 4; i_10 < 18; i_10 += 3) 
                {
                    arr_38 [i_10] [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) ((var_11) / (((/* implicit */long long int) (-(arr_23 [i_8]))))));
                    arr_39 [i_8] [i_1] [i_3] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_10 - 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((arr_12 [i_1]) || (((/* implicit */_Bool) arr_26 [i_10])))))));
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_22 [i_10 + 2] [i_10] [i_10] [i_10 + 1] [i_3])) ^ (arr_17 [i_8] [i_3] [i_10 + 2] [i_10]))))));
                    var_30 *= ((/* implicit */short) (_Bool)1);
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_43 [i_11] [i_11] = ((/* implicit */unsigned char) ((arr_9 [i_3] [i_11]) / (arr_9 [i_11] [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            arr_50 [(unsigned char)2] [i_1] [i_12] [i_12] [i_13] &= ((/* implicit */unsigned short) var_12);
                            arr_51 [i_11] [i_13] [i_1] [16] [i_11] [16] [i_11] = ((arr_17 [i_12 - 1] [i_12 + 2] [i_12] [i_12]) <= (arr_17 [i_12] [i_12 + 1] [i_12] [i_12]));
                        }
                    } 
                } 
                var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_3])) ? (((/* implicit */int) arr_40 [i_3])) : (((/* implicit */int) arr_40 [i_1]))));
                var_32 = ((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_1] [i_11]);
            }
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((arr_36 [i_1] [i_3] [i_3]) | (arr_36 [i_3] [i_3] [i_1]))))));
            var_34 += ((/* implicit */unsigned short) ((int) arr_9 [i_1] [i_3]));
        }
        for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_5))))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_13))))))))));
                        var_36 |= ((unsigned char) (+((~(((/* implicit */int) (unsigned char)0))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_57 [i_1] [(signed char)14] [i_1] [i_1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_14] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) var_15))))) : (((/* implicit */int) arr_12 [i_1])))) : (((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_1] [i_14] [i_14]))));
        }
        var_38 *= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                var_39 = ((/* implicit */unsigned long long int) arr_17 [i_17] [i_17] [(short)4] [i_17]);
                /* LoopSeq 1 */
                for (long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_17] [i_17] [(_Bool)1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (var_13)))) ? (((/* implicit */int) ((_Bool) (short)2))) : (((/* implicit */int) arr_48 [i_17] [i_18] [i_18] [i_19 - 1] [i_19] [i_19]))))) ? (((/* implicit */int) arr_60 [i_19] [i_17])) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)20)), ((unsigned short)54672))))));
                    arr_67 [i_17] [i_17] [i_18] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_18]))));
                    var_41 *= ((/* implicit */short) arr_52 [i_17] [i_18] [i_17]);
                }
                var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_6))));
            }
        } 
    } 
}
