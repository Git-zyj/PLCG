/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161536
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max(((signed char)58), ((signed char)-59))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)58))))))) : (var_0)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_5);
                    var_17 = ((/* implicit */short) arr_5 [i_0]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1] [(unsigned short)0] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_7 [i_0])) - (-1883649658)))));
                        arr_13 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)28898)) <= (((/* implicit */int) arr_7 [i_1]))))) % (((/* implicit */int) arr_1 [i_2] [i_0]))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0])) << (((((/* implicit */int) arr_5 [i_0])) - (6120)))));
                        arr_14 [i_2] [i_1] = ((/* implicit */unsigned short) ((var_8) << (((((/* implicit */int) arr_2 [5] [i_1])) - (50426)))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_1 - 2] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
                        arr_18 [i_1] [i_1] [i_2] [i_4] [i_0] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (((arr_8 [i_0] [i_1 - 2] [(short)8]) >> (((arr_8 [i_4] [i_4] [i_4]) - (8801238874221991626LL)))))))) ? ((((-(((/* implicit */int) arr_7 [i_1 + 1])))) ^ (arr_3 [i_1 - 3] [i_1]))) : (((/* implicit */int) (unsigned short)42219))));
                        var_19 ^= ((/* implicit */short) (((-(((/* implicit */int) arr_10 [i_2] [i_1 - 1] [i_2] [(_Bool)1] [4ULL] [i_2])))) ^ (((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1 + 1] [i_1])))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((((long long int) arr_6 [(short)9] [i_1] [i_0] [i_5])) >= (((/* implicit */long long int) ((-1883649641) & (((/* implicit */int) (_Bool)0)))))))));
                            var_21 = ((/* implicit */_Bool) arr_15 [i_0] [i_1 - 3] [i_2] [i_2]);
                        }
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_9 [i_1 - 2] [i_1 - 2] [i_2]) + (9223372036854775807LL))) << (((max((((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_0] [i_1] [i_1])), (var_3))) - (1020941923)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_3)))) || (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_1 + 1] [i_0])))))) : ((((~(arr_6 [i_0] [i_1 - 2] [i_1 - 2] [(unsigned short)7]))) - (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_0))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 4; i_8 < 8; i_8 += 2) /* same iter space */
                    {
                        arr_30 [i_7] [i_6] [i_7] [i_8 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (((((/* implicit */int) arr_2 [i_8 + 1] [i_0])) & (((/* implicit */int) arr_2 [i_6] [i_7])))) : ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((arr_19 [i_0] [i_0] [i_7] [i_7] [i_0]) & (var_8))) - (3010832312218977537ULL)))))));
                        var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_8 - 2] [i_8] [i_7] [i_6] [i_6]))) : (arr_21 [i_8] [i_8 + 2] [i_8] [i_8 + 2] [i_8])))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) var_9))), (max((max((var_13), (((/* implicit */unsigned long long int) (unsigned char)3)))), (((/* implicit */unsigned long long int) max((var_7), (arr_1 [i_0] [i_0])))))))))));
                    }
                    for (long long int i_9 = 4; i_9 < 8; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_6)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))) != (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_7] [i_7] [i_0] [i_7])))))))));
                        var_27 = ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [i_9] [i_9 - 3] [i_9 + 1])))) ? (((((/* implicit */_Bool) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9 + 1])) ? (((/* implicit */int) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [i_7] [i_9 - 3] [i_9 + 1])) : (((/* implicit */int) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [(_Bool)1] [i_9 - 3] [i_9 + 1])))) : (((((((/* implicit */int) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [i_9 - 4] [i_9 - 3] [i_9 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_31 [i_9 - 4] [i_7] [i_9 - 2] [i_9] [i_9 - 3] [i_9 + 1])) + (29))) - (8))))));
                    }
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) var_4);
                        arr_35 [i_0] [6ULL] [i_7] [(_Bool)1] = var_6;
                        arr_36 [i_0] [i_6] [i_7] [i_10] = ((/* implicit */short) arr_4 [i_10] [i_0]);
                    }
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (short)27141)), (var_5))))))))));
                }
            } 
        } 
        arr_37 [i_0] [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_0] [i_0]))))) | ((-(var_11))));
    }
    for (unsigned int i_11 = 4; i_11 < 16; i_11 += 3) 
    {
        arr_40 [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_11])) ^ (-803289793)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1098917391454690914LL)) ? (((/* implicit */int) (unsigned short)12788)) : (10)))) : (((((((/* implicit */int) (signed char)3)) > (-1883649661))) ? (((/* implicit */unsigned long long int) arr_38 [i_11 - 2])) : (((((/* implicit */_Bool) arr_39 [i_11 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) var_11))))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_11 - 3]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))), (max((1379569802U), (arr_38 [(unsigned short)6])))))) : (((max((281472829227008ULL), (((/* implicit */unsigned long long int) (short)28888)))) | (((/* implicit */unsigned long long int) arr_38 [i_11]))))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            for (int i_13 = 3; i_13 < 17; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) var_0);
                        var_32 = ((/* implicit */short) max((var_4), ((+(var_4)))));
                        arr_48 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((max((arr_44 [i_12] [i_12] [i_14]), (((/* implicit */unsigned int) arr_46 [i_13 + 1] [(unsigned char)12] [(unsigned char)12] [i_14])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_13 - 1] [i_13 - 3] [i_13 - 1] [i_13 - 1] [15U] [i_13 - 3])))))) == ((+(arr_43 [i_11] [i_11 + 2] [i_11] [i_11 - 2])))));
                        var_33 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) -1509407591)) ? (arr_38 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62299))))), (((/* implicit */unsigned int) (short)29501)))) << (((((/* implicit */int) (short)32753)) - (32727)))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned short) arr_46 [i_11] [i_11 - 1] [i_11] [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (max((((/* implicit */unsigned int) arr_39 [i_11])), (arr_41 [i_11] [(unsigned char)1])))))));
    }
    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
    {
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((11900667701527769101ULL) & (arr_49 [(unsigned char)9] [i_15 + 3])))));
        arr_51 [i_15] = ((/* implicit */signed char) max((max((((((/* implicit */unsigned long long int) var_6)) + (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)23034), (arr_50 [i_15]))))) : (max((arr_49 [i_15 + 2] [i_15]), (arr_49 [i_15] [i_15])))))));
    }
}
