/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157833
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        arr_9 [i_1] = ((/* implicit */short) (+(var_0)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_10 = ((/* implicit */unsigned int) arr_10 [i_3] [i_1]);
                            arr_13 [i_1] [i_0 - 1] [3U] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65533))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_4])) ? (var_0) : (var_4))) : (((int) var_5))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
                        {
                            arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1] [i_1] [i_1]))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20779))) - (arr_5 [i_0 + 1] [(unsigned short)6] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_2)))) * ((~(((/* implicit */int) (signed char)-119)))))))));
                        }
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_6 [i_1] [i_2] [i_3 - 1])));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((((var_3) + (9223372036854775807LL))) << (((var_0) - (1098317216)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_1] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_6] [i_2] [i_1] [i_0]))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) 14537704058791977420ULL)) ? (var_3) : (var_6)))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_25 [i_1] [i_2] [0] [2LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13184)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) arr_22 [(signed char)10] [i_0] [i_1] [i_1] [i_7] [5ULL])) : ((+(var_8)))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) arr_23 [i_0 - 2] [i_0 - 1] [i_0 - 1])))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) ((var_8) + (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                        var_16 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3909040014917574199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534)))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        arr_31 [(signed char)2] [i_1] [i_1] = ((int) var_5);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
                        {
                            var_18 += ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                            arr_35 [i_10] [i_1] [(unsigned char)10] [(unsigned char)7] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) arr_20 [i_0] [i_9] [i_9] [i_1])) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1])) : (var_0));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1] [i_0])))) & (-601716041)));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            arr_40 [i_9] [(unsigned short)9] [i_1] [i_9] [i_9 - 2] [(_Bool)1] = ((/* implicit */short) (+(arr_32 [i_1])));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_11] [i_0 + 1] [i_9 - 1])) || (((/* implicit */_Bool) arr_4 [i_11] [i_0 - 2] [i_9 - 1])))))));
                            arr_41 [i_0] [i_1] [i_2] [3U] [(unsigned char)3] [i_1] = ((/* implicit */unsigned int) ((arr_24 [i_0]) && (((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)10] [(unsigned short)10]))));
                            arr_42 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_0 - 2] [i_1] [i_1] [i_1] [i_1]))));
                            arr_43 [i_0] [i_0] [i_0] [i_1] [i_9 + 1] = ((/* implicit */short) var_3);
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        var_21 = ((/* implicit */int) (signed char)-5);
                        arr_46 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) (signed char)-111);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (((unsigned long long int) var_4))));
                    }
                    for (short i_13 = 2; i_13 < 8; i_13 += 2) 
                    {
                        var_23 = (!(((arr_11 [i_0] [i_0 + 1] [i_0] [(short)8]) == (((/* implicit */int) arr_19 [i_13 + 3] [i_2] [i_0])))));
                        var_24 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_2] [i_13])) * (((/* implicit */int) (unsigned short)65518)))));
                    }
                }
            } 
        } 
        arr_50 [i_0] [i_0] = ((/* implicit */long long int) ((arr_37 [i_0] [4LL] [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))));
        arr_51 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (var_8)));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) ((((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)65527)))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    var_26 = ((/* implicit */unsigned char) -9LL);
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_27 = ((/* implicit */short) (_Bool)1);
        var_28 = ((/* implicit */long long int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))));
        arr_59 [i_16] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 12920276218860254756ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_16] [i_16]))) : (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)8)))), (((((/* implicit */_Bool) var_8)) || (arr_57 [i_16] [8]))))))) : (((((/* implicit */_Bool) max((var_3), (-7463950769583298646LL)))) ? (((/* implicit */unsigned int) var_4)) : (var_5))));
    }
    for (short i_17 = 1; i_17 < 9; i_17 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) ((-111435846) & ((+(((/* implicit */int) ((_Bool) var_6)))))));
        arr_64 [3] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) - (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_17])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((~(((/* implicit */int) arr_0 [i_17])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_45 [i_17] [i_17]))))))) : (((/* implicit */int) arr_54 [i_17] [6LL] [i_17] [i_17]))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_5)))))) & (((((/* implicit */_Bool) var_5)) ? (min((var_8), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((111435846) / (((/* implicit */int) var_7)))))))));
}
