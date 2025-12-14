/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187796
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [(_Bool)1] [i_0] [i_2] = arr_6 [i_0] [i_0] [i_0];
                            arr_11 [i_3] [20LL] [i_2] [20LL] [i_0] = ((/* implicit */short) var_11);
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)1] [i_3])))) ? (((var_10) ? (((/* implicit */int) arr_8 [i_3] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])))))))));
                            arr_13 [0ULL] [i_2] [i_1] [i_1] [i_2] [0ULL] = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(var_11)))) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] = ((/* implicit */int) (-((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [18U]))) | (arr_17 [i_0] [i_5])))))));
                                arr_24 [i_6] [i_5] [i_4 - 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [14U] [(_Bool)1] [i_5] [i_4 + 1] [i_1] [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14)));
                                arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((-((+(((/* implicit */int) var_13)))))), (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_32 [i_0] [i_7] [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_13) ? (var_2) : (var_11)))) ? (((((/* implicit */int) var_17)) * (arr_1 [i_0]))) : ((-(var_1))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0] [(signed char)0] [i_0]))))) ? (((((/* implicit */_Bool) arr_18 [0] [i_1] [i_7] [i_8])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_7] [i_7])) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_8]))))))));
                            arr_33 [i_0] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_28 [i_7])))))) * (((((/* implicit */int) ((signed char) arr_3 [i_0] [i_1] [i_1]))) * (((/* implicit */int) max((arr_16 [(unsigned short)16] [i_1] [i_1]), (arr_29 [i_7] [i_7] [(_Bool)1] [i_1] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_38 [i_0] [i_1] [i_9] [i_10])) % ((-(arr_15 [3] [i_9] [i_1] [11ULL])))))));
                            arr_41 [i_0] [i_9] [i_9] [i_10] [i_1] [i_10] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_16 [(_Bool)1] [i_1] [i_9]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 3; i_11 < 8; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_51 [i_11] [i_11] = ((/* implicit */int) ((unsigned char) ((((arr_8 [i_11] [i_11] [i_13]) ? (((/* implicit */unsigned long long int) var_1)) : (arr_48 [i_11 + 1]))) * (((/* implicit */unsigned long long int) ((arr_8 [i_11 + 2] [i_11] [18ULL]) ? (((/* implicit */int) var_5)) : (arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])))))));
                    arr_52 [i_11] [i_11] [i_13 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_27 [i_12] [(unsigned short)14]) / (((/* implicit */int) arr_50 [i_13] [i_13] [i_13])))) * (((/* implicit */int) ((_Bool) var_16)))))) ? ((~(var_1))) : (((/* implicit */int) var_13))));
                    arr_53 [i_11] [(short)9] [i_13 - 1] [i_11 - 3] = ((unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_16))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 2; i_14 < 7; i_14 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_58 [i_13] [i_14] [i_15] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_54 [i_11] [i_12] [i_15])) ? ((+(arr_43 [i_15] [i_12]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))));
                            arr_59 [i_11] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)5903)) * (((/* implicit */int) (unsigned short)5903)))) | (((((((/* implicit */int) arr_44 [i_11 + 2] [i_11 + 1])) * (((/* implicit */int) arr_39 [i_11] [i_11] [i_11] [i_11] [i_11])))) / (((/* implicit */int) ((_Bool) var_1)))))));
                        }
                        for (short i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            arr_64 [i_11] [i_12] [i_13 - 1] [3ULL] [i_16] = ((arr_60 [i_12]) ? (((((/* implicit */_Bool) arr_34 [i_11] [0ULL] [0ULL] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((+(arr_20 [i_11] [i_13] [i_11] [i_16]))))) : (((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11] [i_12] [i_13 - 1] [i_14] [i_16]))) * (var_11))))));
                            arr_65 [i_11] [i_13 - 1] [i_11] [i_11] = ((/* implicit */_Bool) (+(min((((unsigned long long int) (unsigned short)59632)), (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) arr_8 [i_11 - 2] [i_11] [8ULL])) : (((/* implicit */int) var_5)))))))));
                            arr_66 [i_11 - 1] [i_11] [i_13] [i_14] [6] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)59632))))));
                        }
                        arr_67 [i_11] [i_14] [i_13] [i_13 - 1] |= ((/* implicit */unsigned long long int) arr_7 [6] [6] [i_13] [i_14]);
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 2; i_17 < 8; i_17 += 4) 
                        {
                            arr_70 [i_11 + 2] [i_11] [i_11] [i_11 - 3] [i_11 + 2] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [12ULL] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_28 [i_12]))))) * (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                            arr_71 [i_17] [i_11] [i_12] = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) ((short) var_11))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            arr_76 [i_11] [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) ((arr_6 [i_11] [i_12] [i_13]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2ULL] [i_11 + 2] [i_12] [i_13 - 1] [i_13 - 1] [i_18 + 1])))))))));
                            arr_77 [i_14] [i_14] [i_12] &= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_11])) / (((/* implicit */int) var_7))))))));
                            arr_78 [i_11] [i_14] [i_11] [i_12] [4] = ((/* implicit */unsigned short) var_12);
                            arr_79 [i_11] [6U] [i_13 - 1] [i_11] [i_14 + 1] [i_18] = (~((~((+(((/* implicit */int) (unsigned short)5903)))))));
                            arr_80 [i_11] [i_12] [i_11] [i_13 - 1] [i_18 + 1] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_47 [i_11] [i_12]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (int i_20 = 3; i_20 < 9; i_20 += 3) 
                    {
                        {
                            arr_88 [i_11] [i_19] [i_11] [i_19] [i_12] [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59632))))) * (var_4)))));
                            arr_89 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)59633)) & (((/* implicit */int) (unsigned short)59632)))) & (((/* implicit */int) (unsigned short)5903)))))));
                            arr_90 [i_11] [i_11 - 3] [6] [6] [6] [i_11 - 1] = ((/* implicit */signed char) ((arr_85 [i_11 - 1] [i_12] [i_12] [(unsigned char)8] [i_20] [i_12]) ^ (((/* implicit */int) var_16))));
                            arr_91 [i_11 - 2] [0] [(_Bool)1] [i_11] [(_Bool)0] [(_Bool)1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_19] [i_20]))) ^ (arr_17 [i_11 - 3] [i_11 - 3])))) ? (((/* implicit */int) max((var_17), (arr_8 [(_Bool)1] [(short)0] [16ULL])))) : (((/* implicit */int) ((_Bool) arr_27 [i_12] [i_12])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 3; i_21 < 8; i_21 += 4) 
                {
                    for (int i_22 = 1; i_22 < 9; i_22 += 4) 
                    {
                        {
                            arr_97 [i_11] [i_11 + 2] [1U] [i_11] [i_11] = ((/* implicit */_Bool) max(((((+(((/* implicit */int) var_7)))) + (((((/* implicit */int) arr_68 [i_11 - 3] [i_12] [i_11 - 3] [i_21 - 3] [(unsigned char)7] [i_22 - 1])) + (((/* implicit */int) var_13)))))), (((/* implicit */int) ((unsigned short) ((int) var_3))))));
                            arr_98 [i_11] [i_11] = ((/* implicit */int) max(((unsigned short)5903), ((unsigned short)5903)));
                            arr_99 [i_11] = ((/* implicit */short) ((arr_84 [i_12]) % (((/* implicit */int) arr_30 [i_11] [i_11] [i_21 + 2] [i_22 + 1]))));
                            arr_100 [i_11] [i_12] [i_21] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (((unsigned long long int) (+(var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) var_6))))))));
    var_19 = ((/* implicit */unsigned char) var_13);
}
