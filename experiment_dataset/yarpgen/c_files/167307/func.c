/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167307
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((signed char) (unsigned short)65535)));
        var_11 = ((/* implicit */signed char) (_Bool)0);
        arr_3 [i_0] = ((var_10) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1968278362)) >= (6751080690869723573LL))))));
    }
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_6 [2ULL] = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)0))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))) ? (arr_5 [i_1]) : (((/* implicit */int) (unsigned char)127)))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned char)202))));
        var_15 *= ((/* implicit */unsigned char) (((_Bool)1) ? (var_1) : (((/* implicit */int) arr_1 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_9 [(unsigned short)2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [i_2]))));
        arr_10 [i_2] = ((/* implicit */long long int) min((var_2), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (unsigned char)75)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_4))), ((+(((/* implicit */int) (unsigned char)225))))))) ? ((-((+(((/* implicit */int) (signed char)85)))))) : (((((/* implicit */_Bool) ((short) (_Bool)0))) ? ((+(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_4 [i_2]))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)8), ((unsigned char)239)))) - (((/* implicit */int) (signed char)31))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */unsigned short) ((unsigned char) max(((+(((/* implicit */int) (unsigned char)202)))), (((/* implicit */int) ((short) 18446744073709551615ULL))))));
                            arr_27 [i_2] [i_6 - 1] = ((/* implicit */unsigned long long int) var_8);
                            var_16 ^= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 934489909)) && (((/* implicit */_Bool) (unsigned short)52198))))), (var_0))), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
            } 
            arr_28 [i_2] [i_3] = 17940437277359580686ULL;
            arr_29 [(_Bool)1] [i_3 - 1] &= ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_38 [i_2] [i_3] [i_2] [i_8] = ((/* implicit */int) (((+(var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
                        var_17 = ((/* implicit */short) var_4);
                        arr_39 [(unsigned char)4] [(unsigned char)4] [i_2] [i_7] = ((/* implicit */short) ((var_4) <= (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_8))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 7; i_9 += 1) /* same iter space */
    {
        arr_43 [i_9 + 3] = ((/* implicit */unsigned short) var_2);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_9 + 2] [(unsigned short)2])) / (((/* implicit */int) arr_17 [i_9 - 1] [(signed char)4])))))));
    }
    for (unsigned char i_10 = 1; i_10 < 7; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_48 [(unsigned short)2] [i_11 - 2] [i_11 + 1])) & (((/* implicit */int) arr_48 [(short)8] [i_11 - 3] [i_11 - 3]))))));
            var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_10] [i_10] [i_11 - 1] [i_11 + 1])) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_11] [i_11])))))) / (((((/* implicit */_Bool) 1503702145)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */int) var_9)) & (var_7)))))));
            arr_50 [i_10] [1LL] [1LL] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) arr_13 [i_10 - 1] [8U])) / (var_1)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_40 [i_10] [i_11])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_10] [i_10] [i_10] [i_10])))))));
        }
        /* vectorizable */
        for (signed char i_12 = 3; i_12 < 9; i_12 += 1) /* same iter space */
        {
            arr_54 [i_10] = ((/* implicit */unsigned char) var_4);
            /* LoopSeq 3 */
            for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [(unsigned short)6] [i_12 - 1] [i_13 - 1] [(unsigned short)6]))) >= (var_0)));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (-((-(var_0)))));
                    arr_62 [i_14] |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_10 - 1]))));
                    arr_63 [(signed char)2] [i_10] [i_14] [(signed char)2] [i_14] [i_14] = ((/* implicit */short) var_6);
                }
                for (unsigned long long int i_15 = 3; i_15 < 8; i_15 += 3) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((signed char) (_Bool)1)))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13] [i_15]))) : (var_0)))) ? (((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10])) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_10 + 1] [i_10] [2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_57 [i_15] [i_15]))))))))));
                }
                arr_67 [(signed char)2] [i_12] [i_12] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31116))));
                var_24 ^= ((short) arr_49 [i_10] [4LL] [4LL]);
                /* LoopNest 2 */
                for (unsigned char i_16 = 3; i_16 < 6; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned char) arr_65 [i_16] [i_16] [i_16] [i_16]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)247)) : (-1))))));
                            arr_74 [i_10 + 2] [i_10] [i_10 + 2] = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
            }
            for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) ((var_1) >= (arr_45 [i_10 + 1])));
                arr_79 [i_10] = ((((/* implicit */_Bool) arr_71 [i_10] [i_10 - 1] [i_10] [i_10 + 3] [i_10] [i_10])) ? (((/* implicit */int) arr_22 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_10] [i_12 + 1] [i_12] [i_18])) || (((/* implicit */_Bool) var_10))))));
            }
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                arr_82 [i_10] [i_10] [i_10] = ((/* implicit */signed char) (unsigned short)57030);
                arr_83 [i_10] [i_12 - 1] [i_19] [i_19] = var_0;
            }
            arr_84 [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_10] [i_12] [i_12]))) : (2908395752U)))) ? (var_4) : (((/* implicit */int) arr_48 [i_10] [i_10 - 1] [i_10 + 2]))));
            arr_85 [i_10] = ((/* implicit */signed char) arr_7 [i_10]);
            arr_86 [i_10] [i_10] = ((/* implicit */unsigned char) (-(var_2)));
        }
        arr_87 [i_10] = ((/* implicit */short) (((+(var_10))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) * (max((3769809830U), (((/* implicit */unsigned int) var_9)))))))));
        var_28 = ((/* implicit */_Bool) (signed char)79);
    }
    var_29 = ((/* implicit */int) ((unsigned short) (_Bool)0));
    var_30 = ((/* implicit */unsigned char) var_9);
}
