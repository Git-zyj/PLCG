/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166959
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        var_19 |= ((/* implicit */unsigned short) min((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0 + 3] [i_0] [i_3 + 1] [i_3 - 2])), ((((_Bool)1) ? (arr_2 [i_2] [i_1]) : (arr_0 [i_3 - 2] [i_1]))))))));
                        arr_8 [i_0] [i_0] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned long long int) arr_5 [i_0 + 2]);
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))) >= (var_1))) ? (((/* implicit */int) ((_Bool) 8308065891152039685LL))) : (((/* implicit */int) (signed char)3))))))));
                        arr_9 [i_1] [i_1] [i_3 + 1] = ((/* implicit */long long int) arr_6 [(signed char)17] [i_1] [i_0] [i_3 + 2]);
                        arr_10 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */short) (_Bool)0);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] &= -8308065891152039685LL;
                        arr_14 [i_0] [6LL] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_0] [i_0 - 2]))));
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-8308065891152039713LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_12 [i_0] [13LL] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                        arr_15 [i_0] [(signed char)10] [i_0] [(signed char)10] [i_1] [i_4] = ((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 2]);
                        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) ((((/* implicit */_Bool) 8308065891152039685LL)) && (((/* implicit */_Bool) var_16))))) | (((/* implicit */int) (!(((/* implicit */_Bool) -8308065891152039685LL)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        arr_19 [(_Bool)1] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) / (arr_1 [i_0 + 2])));
                        arr_20 [i_1] = ((/* implicit */_Bool) ((short) arr_1 [i_0 - 1]));
                        arr_21 [i_1] [9] [9] = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [7] [4ULL] [4ULL] [i_1] [8U])) >> (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0 + 4])) + (71)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [7] [4ULL] [4ULL] [i_1] [8U])) >> (((((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0 + 4])) + (71))) + (38))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_23 [i_6] [i_1] [i_1] [i_0 - 1]) >> (((((/* implicit */int) arr_11 [i_0] [i_0 + 3] [i_6 + 1] [i_1] [i_6 + 1])) - (8723)))))) : (((/* implicit */unsigned int) ((arr_23 [i_6] [i_1] [i_1] [i_0 - 1]) >> (((((((/* implicit */int) arr_11 [i_0] [i_0 + 3] [i_6 + 1] [i_1] [i_6 + 1])) - (8723))) - (38017))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((int) arr_18 [i_0 - 2] [i_0 - 2] [14LL] [i_0 + 1] [i_0 - 2])))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6 - 1] [i_1])) ? (arr_2 [i_2] [i_1]) : (((/* implicit */int) var_17))));
                    }
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (-8308065891152039678LL)))) % (var_18)));
                            arr_29 [i_1] [i_1] [i_2] [i_1] [(unsigned short)7] = (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_7 + 1])));
                            arr_30 [i_1] [i_1] [i_2] [i_2] [i_7] [i_7 - 1] [i_8] = ((/* implicit */_Bool) var_4);
                        }
                        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_0] [i_2] [i_1] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */short) var_2)), ((short)20602)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) + (var_18)))) ? (arr_12 [i_1] [i_7 - 1] [0U]) : (((/* implicit */unsigned long long int) arr_26 [17LL] [i_1] [i_1] [i_7 - 1])))) : (max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_7))))));
                            arr_34 [i_0] |= ((/* implicit */int) var_4);
                            arr_35 [(short)14] [i_1] [(_Bool)1] [1] [6LL] [i_1] [(short)14] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_2] [i_1] [i_9 + 1]);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_38 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_0 - 2] [i_1] [i_10 - 1] [i_10 - 1]);
                            arr_39 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            arr_42 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_31 [i_0 + 2] [(_Bool)1] [i_0] [i_0 - 2])))))), (min((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))), (min((arr_12 [i_7] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [i_1]))))))));
                            arr_43 [i_0 - 1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
                        {
                            arr_46 [i_1] [i_1] [i_2] [i_7 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [(short)6] [i_12])), ((~(arr_44 [i_1])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)193)) & (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)15] [i_1] [(signed char)15] [i_1] [(signed char)13]))) | (var_4)))))));
                            arr_47 [i_0] [(signed char)9] [i_1] [i_2] [i_0] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (long long int i_15 = 2; i_15 < 21; i_15 += 2) 
            {
                {
                    arr_56 [i_13] [20LL] [i_15] [i_15 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))))) : (((/* implicit */unsigned long long int) var_8))))) ? (8824128456574185934ULL) : ((-(((arr_54 [i_15 + 2] [18ULL] [18ULL]) % (arr_51 [i_15 - 1])))))));
                    arr_57 [i_15] = ((/* implicit */signed char) var_4);
                    arr_58 [i_15] [i_13] [i_13] [i_13] = ((((((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_55 [i_15] [i_14] [i_13] [i_13]))))) % ((~(-8308065891152039678LL))))) >> (((min((((/* implicit */unsigned long long int) arr_50 [(unsigned short)13])), (min((((/* implicit */unsigned long long int) var_16)), (8824128456574185937ULL))))) - (3673522388831589074ULL))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (unsigned char)99))));
                }
            } 
        } 
    } 
}
