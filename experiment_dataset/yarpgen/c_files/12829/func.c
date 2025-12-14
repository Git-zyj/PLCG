/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12829
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0 + 2] [i_0] [i_2] [i_3] [i_4] [2U] = ((/* implicit */int) arr_6 [i_1] [i_1]);
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned short) (unsigned char)166)))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [i_4])))) >= (((/* implicit */int) ((signed char) (signed char)102))))))));
                            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_2]))));
                            arr_15 [i_0] [i_3] [i_2] [i_3] [(unsigned short)9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_4] [i_4 - 2]))));
                        }
                        for (signed char i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [(unsigned char)6] [3LL] [i_3] [(unsigned short)9] [i_3] |= ((/* implicit */unsigned char) ((int) arr_11 [i_0]));
                            arr_21 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(short)8] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_7 [(_Bool)1] [i_1] [i_5]));
                            var_22 = ((/* implicit */unsigned short) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1]);
                        }
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_16 [i_0] [i_1] [i_1] [i_1] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [(signed char)15])))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)73)) != (((/* implicit */int) (signed char)-103))))))) : (max((var_0), (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (signed char)42)) : (-517341564)))))));
                        var_24 = ((/* implicit */unsigned char) (((~((-(arr_0 [i_0] [i_0]))))) == (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_3]))) : (max((var_17), (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_2] [i_2])))))))));
                        arr_22 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_17 [i_0 + 1] [i_1] [i_1] [i_3] [i_3]);
                        arr_23 [(unsigned short)19] [10LL] = ((/* implicit */unsigned short) var_0);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((unsigned short) (((((_Bool)1) ? (-4306615984035548953LL) : (4306615984035548942LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))));
                        arr_26 [(signed char)5] [i_1] [i_2] [i_6] = (+(((/* implicit */int) (signed char)0)));
                        arr_27 [i_2] [(unsigned char)2] [i_2] [i_6] [i_0] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) var_17)) : (arr_0 [i_1] [i_2])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_7 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_7 - 2])) : (((((/* implicit */_Bool) 4306615984035548952LL)) ? (((/* implicit */int) (signed char)102)) : (-1705658712)))));
                            arr_30 [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                            var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_6]))));
                            arr_31 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)57)) >= (((/* implicit */int) (signed char)34))));
                        }
                    }
                    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        arr_36 [(unsigned short)19] [19LL] [i_1] [i_1] [i_2] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_25 [i_0] [i_1] [i_8 + 2] [i_0 - 1])))) : (((((/* implicit */int) (signed char)64)) >> (((((((/* implicit */_Bool) arr_7 [i_8] [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_11 [i_1])))) - (198)))))));
                        var_28 = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0 - 1] [i_0]);
                    }
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        arr_40 [i_9] = ((/* implicit */unsigned short) var_9);
                        arr_41 [(unsigned short)2] [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0 + 2]))))) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [13LL] [i_9 + 3] [i_9])) : ((~(((/* implicit */int) arr_9 [i_0 + 1])))));
                        arr_42 [i_0] [i_0] [i_9 - 1] |= ((/* implicit */signed char) (unsigned short)56066);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        arr_45 [i_0] [(unsigned short)18] [(unsigned short)3] = ((/* implicit */unsigned short) arr_25 [i_0] [i_1] [i_2] [i_10]);
                        arr_46 [0LL] [i_2] [i_0] [i_0] [0LL] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [13] [12])) && (var_5)))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)185))));
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */int) arr_16 [i_11] [i_2] [i_2] [i_0] [i_0])) > (((/* implicit */int) arr_9 [i_2]))))))), (((((/* implicit */_Bool) 63)) ? (((/* implicit */int) (signed char)102)) : (660891490)))));
                        arr_50 [i_11] [(signed char)15] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_11])) + (((/* implicit */int) (unsigned short)52804))));
                    }
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        arr_54 [(unsigned short)14] [i_1] [(signed char)20] |= ((/* implicit */unsigned char) var_12);
                        arr_55 [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) 4139143595U)), (arr_8 [i_0] [i_1] [i_2] [i_12]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (arr_8 [i_12] [i_2] [i_1] [(signed char)13])));
                        arr_56 [i_0] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_1] [i_0 - 2] [3LL] [i_1] [(unsigned short)5]))) : (arr_0 [i_0 + 2] [i_0 + 2])))) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)145)))))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? (var_17) : (((((/* implicit */int) arr_3 [i_0] [i_0 - 2])) / (((/* implicit */int) arr_3 [i_0] [i_0 - 2]))))));
                    }
                    var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        for (short i_14 = 1; i_14 < 8; i_14 += 3) 
        {
            {
                var_32 = ((/* implicit */long long int) (+(2743258393U)));
                var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_13] [i_14 + 1] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [(signed char)9] [i_14 + 1])))))) ? (min((((/* implicit */int) arr_9 [i_13])), (((((/* implicit */_Bool) (unsigned short)19823)) ? (var_6) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193)))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54541)) && (((/* implicit */_Bool) 1181846271U))));
                arr_62 [i_13] = ((short) ((unsigned char) 1455098454));
            }
        } 
    } 
}
