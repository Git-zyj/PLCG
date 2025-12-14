/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165504
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((3451936279U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_13 = var_4;
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (var_7))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_1 [i_0]))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_6))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (unsigned char)138)))))));
            arr_5 [(unsigned char)21] [i_0] = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_6))));
            var_17 = ((/* implicit */unsigned short) (~(((arr_2 [(unsigned char)15] [i_0] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        }
        var_18 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) 199890579)) | (18446744073709551613ULL)));
        var_19 = ((/* implicit */unsigned int) var_2);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */int) var_8)) ^ (var_3))) : (((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_8 [i_3])) - (10423))))))) | (((((((var_3) + (2147483647))) << (((((((/* implicit */int) var_0)) + (32351))) - (24))))) << (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))));
        arr_11 [i_3] = min((arr_1 [i_3]), (((/* implicit */signed char) var_11)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_20 = ((/* implicit */int) var_10);
            var_21 = ((/* implicit */unsigned short) ((-1) - (((/* implicit */int) var_6))));
        }
        for (short i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            arr_20 [i_4] = var_9;
            var_22 = ((arr_19 [i_6 - 2] [i_6 - 1]) + (((/* implicit */unsigned int) var_3)));
            var_23 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) (short)-23627)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_6]))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 16; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_28 [i_4] = ((/* implicit */_Bool) arr_2 [10ULL] [i_9] [i_9]);
                            var_24 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                            arr_29 [i_4] [i_4] [i_6] [i_4] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_4))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])))));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(arr_30 [i_6 - 1] [(_Bool)1] [i_6 + 1] [(short)8] [3U] [i_6 - 2])));
                            var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) var_8)))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4])) || (var_1))))));
                            var_26 -= arr_22 [i_4] [i_7] [i_8 - 3];
                            var_27 += ((/* implicit */unsigned int) (signed char)92);
                        }
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                        var_29 *= ((arr_31 [i_4] [i_4] [i_6 - 2] [i_7 - 1] [i_6 - 2] [i_8 + 2] [5]) && (((/* implicit */_Bool) (short)31935)));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            arr_35 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_33 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            /* LoopSeq 3 */
            for (int i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_6 [i_4] [i_4]))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                var_31 |= ((/* implicit */_Bool) ((arr_25 [i_12 - 1] [i_12 + 2] [i_11] [i_11] [i_4] [(short)18] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                arr_39 [i_12] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_4] [i_4]))))) ? (var_3) : (((/* implicit */int) arr_13 [i_12 + 2] [i_11]))));
                var_32 = ((/* implicit */unsigned char) var_9);
            }
            for (int i_13 = 2; i_13 < 17; i_13 += 4) /* same iter space */
            {
                arr_43 [i_4] [i_4] [(unsigned char)10] [i_13] = ((/* implicit */unsigned long long int) ((arr_38 [i_11] [i_11] [i_13 - 2] [i_13 - 1]) > (arr_38 [i_11] [i_11] [i_13 - 2] [0ULL])));
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) var_4)) ? (arr_33 [15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 32ULL)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_36 [i_4] [i_11] [i_11] [i_13 - 1]))));
            }
            for (int i_14 = 2; i_14 < 17; i_14 += 4) /* same iter space */
            {
                var_35 += (+(1089486760U));
                /* LoopSeq 2 */
                for (signed char i_15 = 1; i_15 < 18; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 4; i_16 < 18; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)30972)) > (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) (unsigned short)34072)))))));
                        arr_52 [i_4] [i_4] [i_15 + 1] [i_14] [i_16] [i_14] [(short)16] = ((/* implicit */unsigned short) arr_30 [i_4] [i_15] [i_15 - 1] [i_14 - 1] [i_4] [i_4]);
                    }
                    var_37 = ((((/* implicit */int) arr_31 [i_14 - 2] [i_11] [i_15 - 1] [i_15 - 1] [i_14] [i_14 - 2] [i_15 - 1])) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (arr_21 [i_4]))));
                }
                for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (+(arr_47 [i_4] [i_4] [i_4] [13ULL] [i_4] [i_4]))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_10))));
                        arr_58 [i_4] = ((/* implicit */unsigned char) ((((var_3) + (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_7))))));
                        var_40 = arr_1 [i_17 + 1];
                    }
                    arr_59 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [(signed char)13] [8] [i_14 + 1]))) > (var_7)));
                    arr_60 [i_4] [i_4] [i_11] [i_11] [i_17 + 2] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) % (2811104252U)))) % (var_10)));
                    var_41 = arr_42 [i_4] [i_4] [i_4];
                }
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_14] [i_14 + 1] [i_14 + 2] [i_14 - 1])) ? (arr_17 [i_4] [i_11] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            }
            var_43 = ((/* implicit */unsigned long long int) var_2);
            arr_61 [i_4] [i_11] [(_Bool)1] |= ((/* implicit */unsigned int) var_8);
        }
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            var_44 = ((/* implicit */signed char) arr_30 [i_4] [i_19] [i_4] [i_4] [i_4] [i_4]);
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (-1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [8LL] [8LL]))))) : (4558589672319274992LL)));
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 2; i_20 < 17; i_20 += 4) 
            {
                for (short i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) ((arr_47 [i_4] [(signed char)11] [(signed char)11] [i_20] [17] [i_21]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_51 [i_4] [i_4] [i_4] [i_4] [i_4])) == (arr_17 [i_4] [i_4] [i_4])))))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_68 [i_4] [i_20 + 2] [15ULL] [i_21]))) > (var_7)));
                    }
                } 
            } 
        }
        var_48 |= ((arr_57 [i_4] [i_4] [i_4] [i_4] [i_4]) / (arr_57 [i_4] [i_4] [i_4] [i_4] [i_4]));
        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) var_8))));
    }
}
