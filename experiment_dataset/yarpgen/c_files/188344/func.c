/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188344
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((unsigned int) max((arr_9 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_4 [i_3] [i_2]))))) >> (((long long int) ((((/* implicit */int) (short)2)) & (((/* implicit */int) (unsigned char)144))))))))));
                        var_15 ^= ((/* implicit */unsigned short) (unsigned char)97);
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)153)))), (((/* implicit */int) arr_1 [2])))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        var_17 -= ((/* implicit */unsigned short) ((((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)126)))) - ((+(((/* implicit */int) var_4))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 += arr_15 [i_0] [i_0] [i_2] [i_2] [i_0];
                            arr_16 [i_2] [(signed char)8] [i_2 + 1] [(signed char)8] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] [i_4])))) != (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_4] [i_5] [i_0 - 3] [i_0 - 3]))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_13 [i_5] [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 - 3]))));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_2]))));
                            arr_19 [(unsigned char)3] [i_2] [i_2] [i_2] [(short)4] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        }
                        arr_20 [i_0 - 4] [i_0] [i_0 - 4] |= ((/* implicit */unsigned int) arr_1 [i_1]);
                        var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 4398046248960LL)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0])))));
                    }
                    for (int i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */int) var_7)) : (((int) (_Bool)0))))) ? (((/* implicit */int) min(((unsigned char)111), (((/* implicit */unsigned char) max(((signed char)-101), ((signed char)-1))))))) : (((/* implicit */int) (signed char)0))));
                        arr_24 [i_0] [i_0] |= ((/* implicit */unsigned char) (signed char)52);
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_10)) ? (arr_18 [i_0] [i_0] [(signed char)9] [i_7 + 1] [(short)3] [i_0 - 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)0]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-1)), (arr_12 [i_0] [i_1 - 2] [i_2] [i_7] [i_0] [i_2 - 1])))))) <= (arr_18 [i_7] [i_2] [i_2] [i_1 + 2] [i_1 - 2] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [(short)8])) ? (min((-4278223598698541781LL), (((/* implicit */long long int) (unsigned char)167)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 4])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) max(((signed char)-1), ((signed char)100)))), (arr_22 [i_0])))) : (((/* implicit */int) (unsigned short)5072))));
                                var_24 = ((/* implicit */signed char) arr_13 [i_9] [i_2] [i_2] [i_2] [i_1 + 1] [i_2] [i_0]);
                                var_25 = ((/* implicit */unsigned short) arr_17 [i_2 - 1] [i_1] [i_1] [(short)1] [i_1 + 1]);
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                    var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)27349)) : (((/* implicit */int) (signed char)0)))), ((+(((/* implicit */int) ((unsigned short) (signed char)-6)))))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((_Bool) var_10));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_28 = (!(((/* implicit */_Bool) arr_5 [i_10] [(signed char)7] [i_10])));
        arr_33 [i_10] [(unsigned short)10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_10])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_22 [i_10]))));
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_10]))));
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10]))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_31 = max((((unsigned int) arr_42 [i_11 - 1] [i_11 - 1] [i_12] [i_11 - 1] [i_12] [i_13])), (((/* implicit */unsigned int) ((unsigned short) arr_42 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(signed char)2] [i_12] [i_11 - 1]))));
                            var_32 = ((/* implicit */unsigned long long int) (short)0);
                            var_33 = ((/* implicit */unsigned char) arr_36 [i_11] [i_12] [i_12]);
                        }
                    } 
                } 
            } 
            arr_45 [i_12] [i_12] = ((/* implicit */unsigned int) arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]);
            var_34 ^= ((/* implicit */signed char) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned short) var_0);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) arr_40 [i_11] [i_11 - 1] [i_11 - 1] [i_11]))));
            }
            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_18 = 2; i_18 < 18; i_18 += 3) 
                {
                    var_37 += ((/* implicit */unsigned int) ((int) ((short) arr_51 [i_11 - 1] [i_17])));
                    var_38 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_43 [i_12] [i_12] [i_12] [i_12] [i_18 + 3])) ? (arr_35 [i_18 - 1]) : (((/* implicit */int) (unsigned char)115))))));
                    var_39 = ((/* implicit */unsigned int) arr_41 [i_11 - 1] [i_11] [i_11 - 1] [i_12] [i_18 + 1]);
                }
                var_40 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)190)) ? (arr_35 [i_11]) : (((/* implicit */int) arr_41 [(short)7] [(short)7] [i_12] [i_12] [i_17])))), (((/* implicit */int) (_Bool)0)))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (short)28193))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)65)), ((unsigned char)117))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_17] [i_17] [i_17] [i_17] [i_17])) & (((/* implicit */int) arr_47 [19ULL] [19ULL] [(short)16] [i_17]))))), (((((/* implicit */_Bool) arr_54 [i_11] [i_12] [i_17])) ? (arr_40 [i_11] [i_12] [i_12] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            }
            var_42 = ((((/* implicit */_Bool) max((arr_39 [19U] [i_12] [i_12]), (((/* implicit */unsigned short) arr_52 [5LL] [i_12] [i_12] [i_11 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_12] [(signed char)19])) ? (((/* implicit */int) min((arr_53 [i_11] [i_11] [i_11] [i_12]), (((/* implicit */short) arr_44 [i_11] [i_11] [i_12] [i_12] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
        }
        var_43 = ((/* implicit */unsigned short) (unsigned char)144);
    }
    /* LoopSeq 1 */
    for (signed char i_19 = 2; i_19 < 16; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                for (unsigned int i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    {
                        var_44 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_26 [i_19] [(short)13] [i_21])) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (short)-24331)))))), ((-(((/* implicit */int) (unsigned char)121))))));
                        var_45 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)28193)) ? (((/* implicit */unsigned long long int) arr_0 [i_19])) : (arr_50 [(signed char)9] [i_20] [(unsigned char)19] [i_20])))))));
                        arr_66 [i_22] [i_19] [(unsigned short)11] [(unsigned short)11] [i_19] = ((/* implicit */long long int) ((signed char) arr_39 [i_19] [i_21] [i_22]));
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)46897)) ? (((/* implicit */int) (short)28193)) : (((/* implicit */int) (unsigned char)0)))), ((-(((/* implicit */int) arr_14 [i_19 - 2] [i_19] [i_19 - 2] [i_19 - 2] [i_19]))))));
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_61 [i_19] [i_19] [i_19] [i_19]), (((/* implicit */long long int) max((((/* implicit */signed char) arr_52 [i_19] [i_19] [i_19] [(short)20])), (arr_59 [2ULL] [i_19] [i_19] [i_19]))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) ((unsigned char) var_0))) - (((/* implicit */int) ((signed char) arr_62 [i_19] [(signed char)15] [5] [i_19] [(unsigned char)11])))))));
        arr_67 [i_19] [i_19] = ((/* implicit */signed char) var_12);
        arr_68 [i_19] = (((_Bool)0) ? (((/* implicit */int) (short)-20491)) : (((/* implicit */int) (short)22885)));
    }
}
