/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171476
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
    var_15 = ((/* implicit */signed char) var_14);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_0 [i_0 + 1]), (var_13))))));
        arr_2 [i_0 + 2] = ((/* implicit */signed char) -7055180977007544719LL);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) -9060037963209409643LL);
            arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) min((arr_0 [i_0]), (var_4)))), ((unsigned short)7288)))));
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min(((+(-1LL))), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) arr_8 [(short)11] [i_1 - 1] [i_1 - 1] [i_1 + 3])))))));
                            var_18 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_1 [i_0]))))) == (((long long int) (unsigned char)255)))))));
                            var_19 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) min((((/* implicit */signed char) var_3)), (arr_0 [i_3])))), (min((4294967295U), (10U)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_5 + 1]))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_0] [6ULL] [i_0 + 4] [i_0] [i_5] [i_5])) : (996757196))), (((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)7288))))))) ? (arr_10 [5]) : (((/* implicit */long long int) 996757196))));
            arr_19 [i_5] [i_0] [i_5] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 996757202)) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) (unsigned char)46)) - (46))))) : (((/* implicit */int) ((arr_9 [4ULL]) || (((/* implicit */_Bool) arr_10 [i_0 + 3]))))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_26 [i_7 - 1] [i_6] [i_0 + 1] = ((/* implicit */unsigned int) (_Bool)1);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 1]))) / (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_6] [i_6] [i_6]))) % (var_0)))));
                /* LoopSeq 1 */
                for (signed char i_8 = 3; i_8 < 12; i_8 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (var_7) : (((/* implicit */unsigned long long int) (+(arr_4 [i_0 + 4] [i_8]))))));
                    arr_31 [i_8 - 2] [i_8] [i_7] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_0 + 2] [i_7 - 1] [i_8 + 1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7 - 1] [i_0 + 2] [i_7] [i_7 - 1])))));
                    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [(unsigned short)11] [(unsigned short)11] [i_0 + 4] [i_8]))));
                }
                arr_32 [(short)8] [(unsigned char)9] [i_7] = ((/* implicit */unsigned short) (+(((arr_9 [i_0]) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (_Bool)1))))));
                arr_33 [i_6] [(unsigned char)9] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_3))))));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_6] [i_9 - 1])) == (((/* implicit */int) arr_3 [i_0 + 3]))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((28672) <= (((/* implicit */int) (signed char)120))))) | (((/* implicit */int) arr_16 [i_9 - 1] [i_6] [i_0 + 3]))));
                            var_27 = arr_9 [i_10];
                            arr_40 [i_11] [i_9] [(unsigned short)1] [i_9] [i_0] = ((/* implicit */unsigned long long int) -1802901355);
                            arr_41 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((2002839821729805399ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_12 [i_9 - 1] [i_9 - 1] [i_9 - 1] [(unsigned char)5] [i_9] [i_9]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))));
                        var_29 = ((/* implicit */short) var_5);
                        var_30 = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_0 + 4] [i_0 + 2] [i_0 + 2])) | ((-(((/* implicit */int) arr_43 [i_14] [i_14] [i_14] [i_14]))))));
                        var_32 = ((/* implicit */long long int) (signed char)16);
                        var_33 = ((/* implicit */unsigned int) ((short) arr_4 [i_0 + 2] [i_6]));
                    }
                    for (unsigned short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (4695872503971826498ULL))))));
                        arr_52 [i_0 + 1] [i_0 + 1] [i_6] [i_9 - 1] [i_12] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_15 [i_0 + 2] [i_9 - 1] [i_15 + 1])) - (47)))));
                    }
                    var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_50 [i_0 + 2] [i_12]))));
                    arr_53 [i_0] [i_9] [i_0] [i_9] = ((/* implicit */_Bool) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_0] [i_6] [i_6] [i_12])) && (arr_28 [i_6] [i_0] [i_6] [i_0])))) : (((/* implicit */int) arr_14 [i_0 + 2] [i_6] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_6]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    var_36 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_45 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1]))));
                    arr_56 [i_16] [i_9] [i_9] [i_0 + 1] = ((/* implicit */short) var_14);
                    var_37 ^= ((/* implicit */short) var_11);
                }
                for (short i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    arr_59 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) ((var_14) == (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                    var_38 = ((/* implicit */int) var_14);
                }
                arr_60 [i_0] [i_0] [i_6] [i_9] = ((((/* implicit */_Bool) (short)-8177)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))));
            }
            var_39 = ((/* implicit */long long int) (signed char)-17);
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_0 + 3]) : (var_14)));
        }
        for (int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    {
                        arr_68 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) (_Bool)1)))))));
                        var_41 = var_1;
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned char) min((min((arr_58 [i_0 + 2] [i_18]), (arr_58 [i_0 + 3] [i_18]))), (((/* implicit */unsigned int) ((_Bool) arr_58 [i_0 + 3] [i_18])))));
            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_11)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_49 [i_0] [i_0 + 3] [(_Bool)1] [(_Bool)1] [i_18] [8U])))))))) == (min((((/* implicit */unsigned long long int) 1U)), (14968310458865719009ULL))))))));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned char) min((var_44), (arr_70 [i_21] [i_21])));
        arr_71 [i_21] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((arr_69 [i_21]), ((signed char)6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_69 [i_21]))))))) <= (((/* implicit */int) min((min((var_6), (arr_69 [i_21]))), (((/* implicit */signed char) ((((/* implicit */int) arr_70 [i_21] [i_21])) == (((/* implicit */int) arr_69 [i_21]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 4) /* same iter space */
    {
        arr_75 [i_22] [i_22] = ((/* implicit */unsigned int) arr_70 [i_22] [i_22]);
        /* LoopSeq 1 */
        for (unsigned int i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [(unsigned char)15] [10U])) ? (var_5) : (((/* implicit */int) arr_78 [i_22] [i_23])))))));
            arr_80 [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_78 [i_22] [i_23])) & (((/* implicit */int) var_10))));
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_3))))))))));
            var_47 = ((/* implicit */_Bool) var_13);
            arr_81 [i_22] [i_23] = ((/* implicit */long long int) var_2);
        }
        /* LoopSeq 1 */
        for (long long int i_24 = 0; i_24 < 21; i_24 += 4) 
        {
            var_48 = ((/* implicit */unsigned char) arr_74 [i_22]);
            var_49 ^= ((/* implicit */signed char) var_12);
        }
        var_50 = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned int i_25 = 2; i_25 < 19; i_25 += 1) 
    {
        arr_88 [i_25 - 1] = (!(((/* implicit */_Bool) 1713528616U)));
        var_51 = ((/* implicit */unsigned long long int) var_1);
    }
}
