/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123366
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((unsigned long long int) min((arr_3 [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_0 - 1])));
                arr_6 [i_0] [(unsigned char)10] [i_0] = 14655414212458580920ULL;
                arr_7 [(unsigned short)3] [(unsigned short)3] |= ((/* implicit */unsigned char) (_Bool)0);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11403)))), (((((/* implicit */_Bool) arr_9 [0])) ? (var_8) : (((/* implicit */int) arr_3 [i_1] [i_1])))))) : (((/* implicit */int) var_0))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_1 [i_0] [i_0])));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) min((arr_4 [i_0 + 1] [6U]), (((/* implicit */short) var_19))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 2] [i_3 - 4]))) != (min((((/* implicit */unsigned long long int) (unsigned short)4274)), (((((/* implicit */_Bool) arr_10 [9ULL] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2])) : (arr_2 [i_3])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                            var_26 = ((/* implicit */unsigned long long int) var_7);
                        }
                        var_27 = ((/* implicit */short) ((unsigned long long int) -3618065421252978982LL));
                    }
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (+(((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) 1951243646)))) ^ ((((_Bool)1) ? (6216229314845341344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)10]))))))))))));
                        var_29 = ((/* implicit */_Bool) var_0);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        arr_21 [i_0] [(_Bool)1] [(unsigned short)1] [i_5] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_11 [(unsigned char)6] [i_0 - 1] [i_0 - 1] [i_0 + 1])) * (((/* implicit */int) (unsigned short)2819))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 2] [i_7 + 1]))) : (((long long int) arr_1 [(_Bool)1] [i_1]))));
                    }
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_12))));
                    arr_22 [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)1529)) : (((/* implicit */int) (unsigned char)29))))), (((((/* implicit */unsigned long long int) var_17)) - (arr_10 [(unsigned short)0] [i_1]))))));
                }
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_32 = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned char) arr_23 [8ULL] [6ULL] [(unsigned char)8])), (((unsigned char) arr_5 [i_1] [i_1]))))))));
                    arr_26 [i_0] [(unsigned short)3] [i_8] = ((/* implicit */long long int) var_7);
                    arr_27 [(unsigned char)10] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_1] [i_0 - 1])))));
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_5 [i_1] [i_9])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 - 2])), (arr_20 [(unsigned char)9] [i_1] [i_1] [(unsigned char)9])))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_17 [i_0 - 2] [(unsigned char)7] [10ULL] [i_1] [(unsigned short)2])) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) << (((arr_25 [i_0] [i_1] [i_1] [(_Bool)1]) - (1027646620U))))))))) ? (((((/* implicit */int) (unsigned short)4096)) * (((/* implicit */int) (unsigned short)4271)))) : (((/* implicit */int) arr_24 [(_Bool)1] [i_1] [i_9]))));
                    arr_30 [i_0] [i_0] = min((((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0])), (arr_9 [i_9]))) : ((~(9184179902374165710ULL))))), (((unsigned long long int) arr_8 [i_0 + 2] [i_0 - 2] [i_0 + 2])));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1125040836)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) min((var_1), (var_17)))) ? (9463856559321688772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) (~(arr_32 [i_10 - 1])));
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 3; i_12 < 15; i_12 += 1) 
            {
                {
                    arr_40 [i_11] [i_11] [i_12] = ((/* implicit */long long int) (_Bool)0);
                    var_37 |= ((/* implicit */unsigned char) (unsigned short)61260);
                    arr_41 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11])) || (((/* implicit */_Bool) arr_39 [i_12 + 1])))))))) ? (((min((var_14), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) ((270541112408072187LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71)))))))) : ((-(((((/* implicit */_Bool) arr_31 [3ULL])) ? (arr_39 [i_12]) : (arr_39 [i_11])))))));
                    arr_42 [i_11] = ((/* implicit */unsigned long long int) arr_32 [(unsigned char)4]);
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_55 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) >> (((var_17) - (3187336468507725747LL)))));
                        arr_56 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) 264452058U)) - (8982887514387862841ULL))) >> (((((/* implicit */int) (short)-23965)) + (23982)))))));
                    }
                    arr_57 [i_13] [i_13] [i_15] [i_13] = ((/* implicit */_Bool) min((min((18446744073709551604ULL), (arr_49 [i_15] [i_15] [i_15] [i_15]))), (((arr_49 [i_13] [i_13] [i_14] [22ULL]) ^ (((/* implicit */unsigned long long int) 264452031U))))));
                }
            } 
        } 
        arr_58 [i_13] = ((/* implicit */unsigned char) ((((var_8) + (2147483647))) >> (((((unsigned long long int) arr_47 [i_13])) - (4365180811277471346ULL)))));
        arr_59 [i_13] = ((/* implicit */unsigned long long int) min((min(((~(((/* implicit */int) arr_54 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */int) var_2)))), (((/* implicit */int) arr_43 [i_13]))));
        var_38 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((arr_50 [i_13] [(_Bool)1] [(short)4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned long long int) arr_47 [i_13])))));
    }
    var_39 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((var_15) || (var_19))) ? (min((var_17), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((((((/* implicit */_Bool) (unsigned short)61270)) || (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_7)) : (8982887514387862841ULL))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_0)))))))));
}
