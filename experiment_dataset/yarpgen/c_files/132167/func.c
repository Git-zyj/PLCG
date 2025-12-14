/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132167
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(min((1806316752U), (var_2)))))), (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)0)), (arr_0 [i_1])))) : (14268300086759675512ULL)))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_2])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (11745180267613556913ULL))))) - (((/* implicit */unsigned long long int) ((22139850515820751LL) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                    var_20 = ((/* implicit */int) (_Bool)0);
                    arr_7 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                    var_21 = ((/* implicit */short) max((min((arr_1 [14]), (arr_1 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36509)) == (((/* implicit */int) (unsigned char)204)))))));
                    var_22 = ((((/* implicit */_Bool) var_15)) ? (var_4) : (max((((/* implicit */long long int) (!((_Bool)1)))), (arr_6 [i_0]))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    arr_11 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -5784542860740301783LL)) ? (((/* implicit */long long int) 2761894843U)) : (7193884588538061676LL)));
                    var_23 = ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3])) ? (arr_10 [(short)2] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_3])));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_1] [7U] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2761894842U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))));
                        var_24 |= ((/* implicit */_Bool) ((arr_10 [9ULL] [i_1] [i_3] [(_Bool)1]) % (arr_10 [i_4] [i_3] [i_1] [1LL])));
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_5]);
                        var_26 = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((arr_0 [i_0]) >> (((arr_12 [i_3] [i_3]) + (4877555843163086929LL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)12]))))))))) : (((/* implicit */signed char) ((((arr_0 [i_0]) >> (((((arr_12 [i_3] [i_3]) + (4877555843163086929LL))) + (3056248301728980829LL))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)12])))))))));
                        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_10 [i_5] [i_1] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_1] [i_0])))));
                        arr_20 [(short)16] [(short)16] [(_Bool)1] [i_1] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 1937523255U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_0))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_6])))))));
                        arr_24 [i_0] [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) ((_Bool) var_7));
                    }
                    for (signed char i_7 = 4; i_7 < 20; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_7] [i_3] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((/* implicit */int) (unsigned char)80)) - (73)))))) ? (arr_18 [i_1] [i_1] [17LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))));
                        var_29 = ((/* implicit */signed char) ((unsigned int) arr_8 [i_0] [i_0] [i_0]));
                        var_30 = ((/* implicit */unsigned long long int) (~(-92553929)));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7 + 1] [i_7] [0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)20] [i_1] [i_1] [i_7])))))) : (arr_1 [i_0])));
                    }
                    var_32 = ((/* implicit */unsigned int) ((624354284) << (((2761894843U) - (2761894842U)))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_33 = (!((_Bool)1));
                                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2415891618448893285LL)) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)20)))) : (793736638)));
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    var_35 = ((/* implicit */signed char) (-((+(3580197066329320679LL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        var_36 |= ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_28 [9U] [i_1] [i_10] [i_11] [i_0]))))) * (var_10)))));
                        var_37 = ((/* implicit */short) arr_13 [i_11 + 1] [i_10 - 3] [i_1] [i_11]);
                    }
                    var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_10])) : (((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)34562))))))));
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_12]))));
                    var_40 = ((/* implicit */unsigned int) ((short) arr_37 [14] [1U]));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((5268796099157246969LL), (((/* implicit */long long int) (_Bool)1))))))))));
    var_42 = ((/* implicit */signed char) min((var_42), (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_13 = 1; i_13 < 19; i_13 += 4) 
    {
        var_43 |= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3339695613855935170LL)) ? (1496798128U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_13 + 1] [15LL] [i_13 + 1]))) : (-6397429900741264961LL)))));
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30965)) * (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) 1322293038)) : ((((_Bool)1) ? (arr_29 [i_13] [i_13] [i_13 - 1]) : (arr_29 [i_13] [i_13] [i_13 - 1])))));
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 20; i_14 += 2) 
    {
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_44 [i_14] [i_14])))))))));
        var_46 = (~(((/* implicit */int) arr_44 [i_14 - 1] [(_Bool)1])));
    }
}
