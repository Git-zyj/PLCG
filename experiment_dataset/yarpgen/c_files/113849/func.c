/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113849
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    arr_8 [(_Bool)1] [i_1] [(_Bool)1] [i_2] = ((/* implicit */signed char) min((max((arr_4 [i_2 + 3] [i_2] [i_2 + 2]), (min((arr_4 [i_0] [i_0] [1LL]), (((/* implicit */unsigned int) arr_1 [4])))))), (((/* implicit */unsigned int) (-((-(arr_3 [i_0] [i_1] [i_2 + 1]))))))));
                    var_16 *= ((/* implicit */unsigned long long int) max((((arr_7 [i_2 + 3] [i_2 + 3] [i_2 + 1]) % (arr_7 [i_2] [i_2 + 3] [i_2 + 1]))), (((/* implicit */unsigned int) min((arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 3]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]))))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((7469049048157328157LL) ^ (-7469049048157328158LL)));
                    arr_11 [i_0] [i_1] [i_3] = ((/* implicit */long long int) max((min((arr_2 [i_0] [i_3]), (arr_2 [i_3] [i_1]))), ((+(arr_2 [i_0] [i_1])))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_0] [i_1] [i_3])), (max((arr_3 [i_3] [i_3] [i_3]), (arr_2 [i_3] [i_1])))))), (((arr_4 [i_0] [i_1] [i_3]) - ((-(arr_7 [i_0] [i_1] [(_Bool)1])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (13595136861364009673ULL)))))));
                        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((13595136861364009687ULL) >> (((-1893872304) + (1893872317)))))));
                        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 7469049048157328157LL))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3] [i_4])))))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_3] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17020551005644958411ULL)) ? (7469049048157328165LL) : (((/* implicit */long long int) -1432252674))))), (arr_18 [i_6])));
                            var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_5]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_7] [i_5] [i_3] [i_1] [i_0])) >> (((arr_2 [(short)5] [i_3]) - (1066686630)))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_5] [i_7])) > (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_5] [i_7]))));
                            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_7]))));
                            arr_27 [i_0] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(4222362867U)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_32 [i_0] [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_5] [i_8]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((17020551005644958418ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (-7469049048157328157LL))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_19 [i_5] [9ULL] [i_3] [i_5] [i_8]))))))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_8]))))))))));
                        }
                        var_28 = ((/* implicit */signed char) min((var_28), (((signed char) min((arr_10 [i_3]), (((/* implicit */long long int) arr_6 [i_5] [i_5] [i_5] [i_5])))))));
                        var_29 = ((/* implicit */short) arr_9 [i_0] [i_3] [i_5]);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (-(13U)));
                            arr_36 [i_1] [i_1] = ((/* implicit */short) min((arr_0 [i_9] [i_5]), (min((arr_0 [i_0] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                            arr_37 [i_0] [i_1] [i_5] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-19016)) >= (((/* implicit */int) ((_Bool) (short)-22650)))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_43 [i_3] [i_1] [i_3] [i_10] = ((/* implicit */unsigned short) max((min((arr_19 [i_0] [i_0] [i_0] [i_10] [i_3]), (arr_2 [i_11] [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_3]), (arr_41 [i_0] [3U] [i_3] [i_10] [i_11])))))))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -2147483632))))) & (max((arr_13 [i_0]), (arr_3 [i_10] [(short)3] [i_0])))));
                            arr_44 [i_0] [i_1] [i_3] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) + (min((((((/* implicit */_Bool) arr_26 [i_0] [i_3])) ? (arr_13 [5LL]) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_3] [i_0] [i_11] [i_11])))), (((/* implicit */int) arr_17 [i_1] [i_10]))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_39 [i_0] [9] [i_1] [i_3] [i_10] [i_0]) : ((~(arr_15 [i_12] [i_12] [i_12] [i_1] [i_12] [i_10])))))) ? (((/* implicit */unsigned long long int) ((int) arr_24 [i_12] [i_10] [i_3] [1ULL] [i_0]))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_0] [i_1] [(unsigned short)7] [i_10] [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_1] [i_1]) : (arr_16 [i_0] [(unsigned short)6] [i_1] [i_1] [i_0] [3]))))))))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((arr_18 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_12]))))) ? (((((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_3] [i_10] [i_10]), (((/* implicit */unsigned int) arr_26 [i_3] [(unsigned short)4]))))) ? ((~(arr_12 [i_0] [i_1] [i_3] [i_10] [i_12]))) : (((/* implicit */unsigned int) arr_6 [i_0] [i_10] [i_3] [i_10])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [(unsigned short)7] [i_1] [i_3] [i_3] [i_12]))))))))));
                        }
                        for (long long int i_13 = 3; i_13 < 9; i_13 += 3) 
                        {
                            arr_52 [i_0] [i_13] [i_0] [i_10] [i_13 + 1] = ((/* implicit */signed char) (!(min((arr_24 [i_13 - 3] [i_13] [i_13] [i_13] [i_13 - 3]), (arr_24 [i_13 - 3] [i_13] [i_13 - 3] [i_13 + 2] [i_13 - 3])))));
                            var_34 = (((+(((((/* implicit */_Bool) arr_51 [i_13] [i_10] [i_13] [(unsigned short)9] [i_13] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_1] [i_3] [i_13])) : (((/* implicit */int) arr_23 [i_1] [i_1] [(unsigned char)2] [i_0])))))) != (((/* implicit */int) (!(((((/* implicit */int) arr_29 [i_0] [i_0] [i_0])) > (arr_19 [i_0] [i_0] [i_3] [i_10] [i_13])))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_35 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_46 [i_0] [i_0])) / (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))) != (((/* implicit */int) arr_55 [i_0] [i_14] [i_10] [i_3] [i_1] [i_0]))));
                            var_36 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (-2147483632))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_10]))) * (arr_51 [i_14] [i_1] [i_1] [i_10] [6ULL] [i_1] [i_1])))));
                            var_37 = ((/* implicit */signed char) (-(arr_53 [i_0] [i_0] [i_0] [i_1] [i_14])));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_0] [i_1] [i_3] [i_10] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))) : (((unsigned long long int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_3] [i_10] [i_14])))))));
                        }
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        arr_60 [(short)2] [i_1] [i_3] [i_3] [i_15] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_1] [i_3] [i_3] [i_15])) || (((/* implicit */_Bool) arr_59 [i_0] [i_1] [i_0] [i_3] [i_3] [i_15]))))));
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                        {
                            var_39 = min(((~(((/* implicit */int) arr_54 [i_0] [i_3] [i_0])))), (((/* implicit */int) max((arr_54 [i_0] [i_1] [i_3]), (arr_54 [i_0] [i_1] [i_15])))));
                            arr_63 [i_16] [10] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_16 [(unsigned short)7] [i_0] [i_1] [i_3] [i_15] [i_1]), (arr_16 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0]))))));
                            var_40 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_0])), (arr_6 [i_0] [i_1] [i_3] [i_15])))) ^ (min((arr_12 [i_0] [i_1] [i_3] [i_0] [i_16]), (((/* implicit */unsigned int) arr_17 [i_15] [(unsigned short)9]))))))));
                        }
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                        {
                            var_41 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) ((arr_56 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [4ULL] [(unsigned short)3] [i_3] [i_1] [i_17]))))))))), (((long long int) ((((/* implicit */_Bool) arr_66 [i_17] [i_15] [(short)2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [(signed char)8] [i_3] [i_3] [i_0] [i_15] [i_15]))) : (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            arr_67 [1] [1] [i_3] [i_3] = ((/* implicit */unsigned char) max((((min((arr_59 [i_0] [i_1] [i_0] [i_15] [i_17] [i_0]), (((/* implicit */long long int) arr_41 [i_0] [i_1] [i_3] [(_Bool)0] [i_17])))) & (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_17] [i_15] [i_1] [i_3] [i_1] [i_1] [i_0]))))), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_42 [i_17] [i_15] [i_3] [i_1] [i_0]))), (((arr_15 [i_0] [i_1] [3ULL] [i_3] [i_15] [i_17]) & (((/* implicit */int) arr_23 [i_0] [i_1] [i_15] [i_17])))))))));
                            var_42 -= ((/* implicit */unsigned int) (+((~(((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) & (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_18 - 2] [i_3] [i_1] [i_0] [i_0])), (arr_53 [i_0] [i_0] [i_0] [i_0] [i_18])))))), (((((/* implicit */_Bool) arr_41 [i_18 + 1] [i_18] [i_18 + 1] [i_18 - 2] [i_1])) && (((/* implicit */_Bool) arr_15 [i_3] [i_1] [i_3] [i_3] [i_3] [i_18 - 1]))))));
                        arr_70 [i_3] [i_3] [i_18] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_18] [i_18 - 1] [i_18] [i_18 + 1] [i_18 - 1] [1])))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_20 = 2; i_20 < 7; i_20 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_34 [i_20 + 1] [i_20 + 4] [i_20 - 1] [i_20 - 1] [i_20 + 2] [i_0] [i_0])), ((-(min((((/* implicit */long long int) arr_24 [i_0] [1ULL] [i_0] [i_0] [i_0])), (arr_31 [i_0] [i_0] [i_0] [i_19])))))));
                            arr_75 [i_0] [i_1] [i_3] [(signed char)3] [i_20] = ((/* implicit */int) (((~(4906949949317777997ULL))) <= (((/* implicit */unsigned long long int) 349764376))));
                        }
                        var_45 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned short)7] [i_19] [(unsigned short)6])))), (((/* implicit */int) min((arr_5 [i_19]), (arr_5 [i_1]))))));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_69 [i_0] [i_1] [i_1] [i_3] [i_19]))))) - (min((((((/* implicit */unsigned long long int) arr_39 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3])) % (arr_16 [i_19] [i_19] [i_3] [i_19] [i_0] [(short)1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) arr_71 [i_0] [i_1] [i_0] [i_19])))))))));
                    }
                }
            }
        } 
    } 
    var_47 = ((/* implicit */long long int) var_1);
    var_48 = ((/* implicit */short) var_10);
}
