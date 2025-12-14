/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187723
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46052)))))));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    for (long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3] [4ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((unsigned int) arr_9 [i_0] [i_1] [i_2] [i_2]))))) ? ((~(arr_5 [9LL] [i_2] [i_3]))) : ((~(((/* implicit */int) arr_2 [i_0]))))));
                            var_21 -= ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) && (((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 1] [i_1 + 2])));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) arr_1 [i_4]);
                            var_22 *= (_Bool)1;
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((2017612633061982208LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))) / (((/* implicit */long long int) max((((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) arr_6 [i_0] [(unsigned short)9])))))))));
                        }
                    } 
                } 
                var_23 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) (unsigned short)19))))))) - (min((((/* implicit */long long int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_3 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))))));
                arr_14 [i_0] [i_0] [(unsigned char)7] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_1 - 3])) / (((/* implicit */int) arr_4 [i_0] [i_1 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])))))));
                arr_15 [4LL] [4LL] [i_2] |= arr_4 [i_1 - 3] [i_1 - 3];
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_24 = ((/* implicit */short) (~((-(((/* implicit */int) arr_17 [i_0]))))));
                var_25 = ((/* implicit */signed char) ((-1692595836) - (((/* implicit */int) (unsigned short)14991))));
                arr_18 [(unsigned char)8] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [i_5] [i_5] [i_1] [i_0]);
                arr_19 [i_0] [(short)1] [i_1 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_5] [i_0])) ^ (((/* implicit */int) arr_6 [i_5] [i_1]))))) ^ (arr_9 [(unsigned short)9] [(_Bool)1] [i_1 + 2] [i_5])));
            }
            arr_20 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_10 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0]))))));
            var_26 = ((/* implicit */unsigned char) (-(((int) arr_10 [i_0] [i_1 + 2]))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_10 [i_8 - 1] [i_8 - 2])) : (((/* implicit */int) arr_10 [i_8 - 2] [i_8 - 1]))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_28 [(signed char)4] [i_1] [i_1] [i_7] [i_8])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) arr_2 [i_0])) : (1692595835))))))) : (((((/* implicit */_Bool) ((arr_7 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) arr_16 [i_0] [(signed char)9] [i_1] [i_0]))))) ? (((/* implicit */int) ((arr_8 [i_1 - 3] [i_1] [i_6] [i_0]) && (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -3007539263547375171LL)))))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_1] [i_1]), (arr_24 [i_1 - 3] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1592841931)) && (arr_7 [i_8 - 2] [i_8 - 2] [i_1 - 3] [i_0] [(_Bool)1] [i_0]))))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (arr_24 [0LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21098)))))));
                            var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_2 [i_1 - 2]), (arr_2 [i_1 + 2]))))));
                            arr_29 [i_0] [i_1] [i_6] [i_0] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((arr_3 [i_8] [i_7] [i_0]) - (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)20)), ((short)2))))) : (((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (min((((/* implicit */unsigned long long int) arr_4 [i_8] [i_8])), (arr_24 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_0] [i_1] [i_6] [i_0])))))))));
                            arr_30 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((arr_27 [i_8] [i_8 - 2] [i_0] [i_8] [i_8]) ? (7787769358042577715LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4860)))))), (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_24 [i_1] [i_6]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [(unsigned short)9] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_0])) : (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [i_0] [2U] [(_Bool)1])))) * (((((/* implicit */int) arr_8 [(unsigned char)5] [(unsigned char)5] [i_6] [i_0])) * (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [1U])))))))));
                        }
                    } 
                } 
            } 
            arr_31 [9LL] [i_0] [(short)3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 2] [i_0])) * (((/* implicit */int) arr_8 [1] [i_1 + 2] [(unsigned short)1] [i_1]))))), (((7787769358042577715LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1 + 2] [i_1 + 2] [i_1])))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_0] [i_9] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_17 [(short)0]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (33554431U)))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(signed char)1] [i_9] [i_9] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_9] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))));
            arr_34 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [9U]))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_32 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)-8616)) : (((/* implicit */int) arr_37 [i_0] [i_9] [i_0])))))));
                arr_38 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_10])) << (((/* implicit */int) (_Bool)0))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_9])) ? (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_9] [i_9] [i_10])) - (((/* implicit */int) (short)6)))) : (((((/* implicit */int) (short)-9412)) / (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [(unsigned short)4] [i_11 - 1])))))));
                /* LoopSeq 2 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_11 - 1] [i_11 - 1])) || (arr_8 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1])));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_0]))) - (((unsigned int) arr_36 [i_12] [i_11] [(unsigned short)6] [i_0]))));
                    var_36 = ((/* implicit */unsigned char) ((((12236031473014828941ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12] [i_11 - 1] [i_9]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)63531)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(arr_42 [i_0] [2U] [i_11] [(_Bool)0] [i_9] [i_11]))))));
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)251);
                        var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_39 [i_0] [i_9] [(unsigned short)2])) >= (arr_42 [i_9] [i_9] [i_11 - 1] [i_0] [i_14] [i_13]))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_48 [(_Bool)1] [(_Bool)1] [i_11] [i_0] [i_14] [(_Bool)1] [(_Bool)1]))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (arr_0 [i_11] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_39 = ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [i_0]))));
                        arr_51 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)4] [i_9] [i_11 - 1] [i_13] [i_9] [i_13]))) / (arr_0 [i_9] [i_0])));
                    }
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_54 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_11 - 1] [i_11 - 1]))) + (((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_46 [i_0] [i_9] [i_11] [(short)9] [i_15] [i_13]) : (arr_28 [i_11] [i_11] [i_11 - 1] [(unsigned char)8] [i_11 - 1])))));
                        var_40 -= ((/* implicit */short) arr_7 [i_0] [i_9] [i_11] [i_0] [i_15] [i_0]);
                        arr_55 [i_15] |= (!(((/* implicit */_Bool) arr_40 [i_11 - 1] [i_11 - 1] [i_11 - 1])));
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_9] [i_13] [i_0])) >> (((((/* implicit */int) arr_39 [i_0] [i_9] [i_0])) - (199)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_9] [i_13] [i_0])) >> (((((((/* implicit */int) arr_39 [i_0] [i_9] [i_0])) - (199))) + (104))))));
                        var_41 = ((/* implicit */unsigned short) ((arr_28 [i_11 - 1] [i_9] [i_11] [i_13] [i_16]) & (arr_28 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_13] [i_16])));
                        var_42 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_40 [i_11 - 1] [i_11 - 1] [i_11]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_17 = 2; i_17 < 9; i_17 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_11] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */long long int) (!((((_Bool)1) && (((/* implicit */_Bool) 1692595835))))));
                        arr_64 [i_0] [4U] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_17 - 1] [i_11 - 1])) * (((/* implicit */int) arr_33 [i_17 + 1] [i_11 - 1]))));
                        arr_65 [i_0] [i_0] [i_0] [i_13] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_0] [i_11 - 1] [i_0])) - (((/* implicit */int) arr_39 [i_0] [i_11 - 1] [i_0]))));
                    }
                }
            }
            for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                arr_68 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (short)-29431)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)158)));
                arr_69 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) arr_52 [i_9] [i_9] [i_9] [i_9] [i_9]));
            }
        }
        var_43 = ((/* implicit */_Bool) (+(((unsigned int) (_Bool)1))));
        arr_70 [i_0] = ((/* implicit */unsigned char) ((((arr_46 [1ULL] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_46 [(signed char)6] [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0] [i_0]))))))));
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)0))))) ? (((long long int) (signed char)50)) : (((/* implicit */long long int) -1692595818)))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
    }
    var_45 ^= ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) ((unsigned char) var_2)))));
    var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (~(var_16))))));
}
