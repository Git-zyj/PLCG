/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100607
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((-1499572750967681905LL) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) >= (arr_7 [i_0] [i_0] [i_0] [i_0]))))))) == (((((-4189878474547820018LL) + (4189878474547820014LL))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0] [(signed char)2] [i_0]))))))));
                        arr_9 [i_1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) 2130706432)) : (arr_3 [i_0] [i_1] [i_2])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((((_Bool) 5726521773211364928ULL)) ? (((arr_10 [5ULL] [(unsigned short)0] [i_2] [i_2] [i_2] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (-8237684073071742237LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3] [8LL]))))))));
                            var_18 = ((/* implicit */unsigned char) ((((arr_7 [4U] [i_1] [3] [4ULL]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)6] [(unsigned char)6]))))) ? (((arr_2 [i_4] [i_2] [9LL]) << (((18446744073709551615ULL) - (18446744073709551613ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9479)))));
                            arr_14 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_1] [i_2])) == (((/* implicit */int) arr_8 [i_4] [i_1]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [(short)1] [i_0])))))));
                            arr_18 [i_0] [i_1] [i_1] [i_1] [9ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [8] [i_5])))))) < (((arr_16 [i_0] [i_3]) ^ (arr_16 [i_3] [i_0])))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_2 [1ULL] [i_1] [1ULL]) > ((-(arr_4 [i_1] [3LL] [i_2]))))));
                            var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_2 [i_5] [(_Bool)1] [(_Bool)1])), (11763985296696524226ULL))) == (((arr_3 [1] [i_1] [i_1]) - (15508173950782925229ULL)))));
                            arr_20 [i_0] = ((/* implicit */short) max((((arr_10 [i_5] [6ULL] [i_3] [i_2] [i_1] [i_0] [i_0]) % (5ULL))), (arr_10 [i_0] [0ULL] [i_2] [i_2] [(_Bool)1] [i_5] [i_5])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) -4189878474547820018LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [4] [i_3])) <= (arr_21 [i_0] [i_3] [i_0] [i_0]))))) : (70368475742208ULL))) + (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_6])))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0] [i_0]))), (arr_16 [i_0] [i_1])))) ? (((int) (unsigned short)2047)) : (arr_12 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])));
                            var_23 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                        }
                    }
                    var_24 = ((/* implicit */unsigned long long int) arr_22 [2] [i_1]);
                    var_25 = ((/* implicit */int) max(((signed char)25), (((/* implicit */signed char) ((_Bool) max((arr_15 [i_0] [i_0] [4ULL] [i_0] [(unsigned char)8]), (arr_23 [4] [i_0] [i_1] [i_2] [i_2])))))));
                    arr_24 [7U] [i_1] [6ULL] = arr_17 [i_2] [i_0] [i_1] [(_Bool)1] [i_0] [i_0] [i_0];
                }
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_26 = ((/* implicit */int) min((var_26), ((~(((((/* implicit */_Bool) arr_11 [9ULL] [i_1] [9ULL] [i_7])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_0] [i_0] [i_7])) > (arr_21 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (signed char)25))))))));
                    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)3))))) % (((/* implicit */int) (unsigned short)32946))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 2) 
                        {
                            var_28 = max((((int) ((arr_4 [i_7] [i_8] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)169))))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(1783489811684554510LL))))));
                            var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)32589))), (min((arr_10 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 - 2] [i_9] [i_9 + 1]), (arr_10 [i_9 - 2] [i_9 + 1] [1ULL] [i_9] [i_9 - 2] [i_9] [i_9 + 1])))));
                            arr_32 [3LL] [0] [0] [i_8] [i_9 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_8] [i_9])) & (max((15508173950782925229ULL), (((/* implicit */unsigned long long int) -1783489811684554497LL))))));
                            var_31 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)4548))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) * (0LL))));
                        }
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_8] [7ULL])) / (arr_28 [(unsigned char)0] [(unsigned char)0] [i_7] [i_7])));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_36 [i_0] [(short)5] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) != (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_7] [i_10])), (((unsigned short) (_Bool)1)))))));
                        arr_37 [i_0] [i_1] [i_7] [i_10] = ((/* implicit */short) ((_Bool) (unsigned short)63489));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_7] [i_11])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_31 [i_11] [i_1] [i_1] [i_0]))));
                        arr_40 [(unsigned short)3] [i_11] [i_7] [i_7] [4U] [i_7] = ((_Bool) arr_0 [i_0] [i_11]);
                        var_34 = ((/* implicit */unsigned short) 18446744073709551611ULL);
                    }
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_7] [i_7] [i_12] [(signed char)9] = ((/* implicit */short) (~(((/* implicit */int) arr_33 [i_7] [i_0]))));
                        var_35 *= ((/* implicit */signed char) (-(min((arr_28 [i_1] [i_7] [i_7] [i_12]), (arr_28 [i_0] [8] [0LL] [i_12])))));
                        var_36 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_6 [i_12] [i_7] [i_0] [i_0])))) - (max((((((/* implicit */int) arr_41 [2ULL] [i_1] [i_7] [2ULL])) | (((/* implicit */int) (unsigned short)63489)))), ((~(((/* implicit */int) arr_1 [i_0]))))))));
                    }
                    var_37 = ((/* implicit */unsigned short) ((5ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16454)))));
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            arr_49 [i_0] [i_0] [i_1] [(short)8] [4LL] [i_14] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) arr_1 [i_13])) | (((/* implicit */int) (_Bool)1))))));
                            arr_50 [8ULL] [2ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(1783489811684554504LL)))), (arr_42 [i_0] [i_1] [i_1] [i_13] [i_14] [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(signed char)7] [(unsigned char)3]))) : (-4189878474547820018LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_15) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (2395515314114735260LL)))))))), (var_0)));
    var_39 = ((((/* implicit */unsigned long long int) min((max((-1783489811684554497LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((short) var_4)))))) | ((((~(var_0))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (var_4)))))));
    var_40 = ((/* implicit */unsigned long long int) var_7);
}
