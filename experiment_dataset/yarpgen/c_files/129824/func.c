/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129824
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */int) min((var_14), (min(((~((+(((/* implicit */int) var_2)))))), ((-(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_10)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))))) ? (var_4) : (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) (unsigned short)2)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) arr_2 [i_1]);
                    var_17 += ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) 2147483647)) % (16352U)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) ((216029803U) ^ (arr_1 [i_0] [i_1 + 2])));
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 16550513369238676612ULL)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1 + 2] [i_2] [i_4] = ((((/* implicit */_Bool) ((-116655118) % (var_6)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (var_1))));
                        var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_1 + 3]));
                        var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)65535)));
                    }
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (~(1115418868514602258ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) / (arr_2 [i_0])))) : (((unsigned int) arr_9 [13]))));
                            arr_15 [i_0] [i_5] [i_2] [i_0] [i_6] = ((/* implicit */signed char) var_0);
                            var_23 = ((/* implicit */unsigned int) arr_2 [i_0]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            var_24 |= arr_5 [i_0] [i_0] [i_0];
                            arr_19 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1 + 2] [i_7] [i_1 + 2] [i_1] [i_1 + 1]))));
                        }
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3] [i_1]))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_8 [23] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5])) | (((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1 - 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_29 += ((/* implicit */signed char) ((((/* implicit */int) var_10)) << (((((int) (signed char)-118)) + (149)))));
                            var_30 = ((/* implicit */unsigned short) 16968929838133014581ULL);
                        }
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_31 = min((3564712536U), (((/* implicit */unsigned int) arr_25 [1] [i_1] [i_10] [i_10])));
                    var_32 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((0), (((/* implicit */int) min((var_11), (arr_7 [i_0] [i_1] [i_10])))))))));
                }
                arr_27 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (67108736U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) % (arr_23 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))), ((-(arr_3 [i_1 + 3]))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned int) var_7)), (2547596764U))) % (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)16741), (((/* implicit */unsigned short) var_11)))))))))))));
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(var_4)))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 1; i_12 < 23; i_12 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 4; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) (signed char)-101);
                        arr_36 [i_0] [i_1] [i_12] [i_12] = ((/* implicit */signed char) arr_13 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12] [(signed char)7]);
                        var_35 = (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) (unsigned short)6098))))));
                    }
                    for (int i_14 = 4; i_14 < 22; i_14 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_9)));
                        arr_42 [15U] [i_1] [i_14 - 4] [i_14] [i_12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))))) == ((~(var_9)))));
                        var_36 = ((/* implicit */unsigned short) var_1);
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_14 + 1] [i_14] [15U] [i_14] [i_14 + 2] [i_14 + 2]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned short)0))));
                    }
                    for (int i_15 = 4; i_15 < 22; i_15 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) ((unsigned short) arr_35 [i_1 - 1] [i_12 - 1]));
                        arr_46 [i_12] = ((/* implicit */unsigned int) arr_32 [(unsigned short)19] [i_1 + 2] [i_1 + 2] [i_15 - 4]);
                        arr_47 [i_0] [i_12] [i_12] [i_12] [i_0] = ((((/* implicit */_Bool) (~(-1891583415)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [20ULL] [(unsigned short)22] [i_12] [20ULL] [i_0])) ? (((/* implicit */int) arr_39 [i_15 - 3] [i_15] [(_Bool)1] [i_12 + 1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) var_6)) : (3289399897U))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 1; i_16 < 22; i_16 += 4) 
                        {
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_9))));
                            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_12] [i_12]))));
                        }
                    }
                    var_41 = ((/* implicit */unsigned short) 1863788400905760745ULL);
                    arr_51 [i_12] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)114))))));
                    var_42 += ((/* implicit */unsigned short) var_7);
                }
            }
        } 
    } 
}
