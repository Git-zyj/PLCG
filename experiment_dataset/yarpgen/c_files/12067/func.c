/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12067
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (var_2)))) : (var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_14);
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1]), (arr_5 [i_1])))))))));
        var_22 += ((/* implicit */short) arr_4 [2LL]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */unsigned long long int) arr_7 [i_2])) & (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_10)))))));
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_24 = (~(arr_6 [i_3 - 1]));
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_9 [i_3] [i_2] [(short)2])))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) var_4))));
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_26 = var_18;
            /* LoopSeq 1 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_27 &= arr_14 [i_2] [i_2];
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        arr_22 [i_2] [i_4] [i_5 + 1] [i_6] [i_7] = ((/* implicit */short) var_7);
                        var_28 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_0)))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((int) var_8)))))));
                        arr_27 [i_4] [i_4] [(short)5] [i_6] [i_8 + 3] = ((/* implicit */signed char) ((arr_15 [i_8 + 1] [i_5 - 2]) == (((/* implicit */unsigned long long int) arr_6 [i_5 - 2]))));
                        var_30 = ((/* implicit */short) ((unsigned long long int) arr_16 [i_2] [i_8 - 2] [i_5] [i_5 - 2] [i_8]));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (3746673867U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                    }
                }
                for (short i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2858))) : (2019629783U)));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_33 *= ((arr_6 [i_5 - 1]) >> (((arr_19 [i_2] [i_5 - 2] [i_5] [(unsigned char)15] [i_9] [i_10]) + (1550093716198905307LL))));
                        var_34 -= ((/* implicit */signed char) var_4);
                    }
                    for (unsigned int i_11 = 2; i_11 < 22; i_11 += 2) 
                    {
                        var_35 |= ((/* implicit */unsigned short) ((short) var_6));
                        arr_35 [(unsigned char)9] [i_4] [16] [i_9] [i_11 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_11 - 1] [i_11] [i_11 + 1] [i_11] [i_11 - 1]))));
                        arr_36 [i_4] = ((/* implicit */unsigned long long int) var_19);
                    }
                    for (long long int i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) - (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_13)))));
                        var_37 = ((/* implicit */unsigned short) ((arr_10 [i_4] [i_12 - 2] [i_4]) / (((/* implicit */int) ((arr_25 [i_9 - 1] [i_4] [i_4] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 3; i_13 < 21; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (+(arr_32 [i_2] [i_4] [i_5] [i_9] [i_2])));
                        var_39 = ((/* implicit */unsigned int) var_7);
                    }
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        var_40 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5] [i_5 - 1] [i_9 - 1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (arr_40 [i_2] [i_2] [i_5 + 1] [i_5 - 2] [i_9 + 1])));
                        var_41 = ((/* implicit */unsigned long long int) ((long long int) var_19));
                        var_42 = ((/* implicit */unsigned short) arr_17 [i_2] [i_9 - 1] [i_4] [i_4]);
                        var_43 = ((/* implicit */long long int) max((var_43), (((long long int) (!(((/* implicit */_Bool) var_2)))))));
                        arr_46 [i_4] [i_4] [i_5] [19U] [i_9] [(unsigned char)15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5 - 2]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))));
                    }
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((unsigned long long int) arr_8 [i_5 - 2]))));
                    var_45 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_2])) ? (((/* implicit */int) arr_34 [i_2])) : (((/* implicit */int) arr_34 [i_2]))));
                }
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_43 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 22; i_16 += 4) 
                    {
                        arr_53 [i_4] [i_4] [i_5] [i_5] [i_15] [(short)2] [i_16] = arr_48 [(unsigned short)7] [i_4] [i_4];
                        arr_54 [i_2] [i_4] [i_2] [11U] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_2] [(short)11] [i_2] [i_16 + 1] [i_16 - 1]))));
                        arr_55 [i_2] [i_4] [i_5] [(_Bool)1] [i_4] [i_5] = ((/* implicit */long long int) ((int) arr_50 [i_5 - 2] [i_5 - 2] [i_15] [i_16] [i_16]));
                        arr_56 [i_2] [i_2] [i_2] [i_5] [(unsigned char)18] [i_15] [i_16] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_40 [i_2] [i_5 - 2] [i_5] [i_15] [i_15])) && (((/* implicit */_Bool) arr_52 [i_2] [i_15] [i_5 - 2] [i_4] [i_2] [i_2])))) ? (((/* implicit */long long int) (+(arr_51 [i_15])))) : (arr_32 [i_2] [i_2] [i_5] [i_16 - 2] [i_16])));
                    }
                    for (long long int i_17 = 4; i_17 < 22; i_17 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) arr_32 [i_17 - 4] [i_4] [i_5 - 1] [i_4] [i_2]);
                        arr_59 [10ULL] [i_4] [i_4] [10ULL] [10ULL] = ((/* implicit */int) var_4);
                    }
                    var_48 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                }
                for (int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_49 += ((/* implicit */unsigned char) ((unsigned int) 9223372036854775807LL));
                    var_50 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
                    var_51 += ((((/* implicit */_Bool) arr_23 [15LL] [i_5 - 1] [i_5 - 1])) ? (arr_51 [i_2]) : (arr_23 [i_5] [i_5 + 1] [i_5]));
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((unsigned long long int) 18209696821458280496ULL)))));
                }
                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)))) ? (var_7) : ((+(((/* implicit */int) arr_61 [i_2] [i_2] [i_2] [i_2])))))))));
                var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) arr_11 [i_5] [i_2]))));
                arr_62 [(unsigned short)2] [i_4] [11ULL] [16ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_34 [i_4])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_4])))))));
            }
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                for (unsigned char i_20 = 1; i_20 < 22; i_20 += 3) 
                {
                    {
                        arr_70 [i_4] [i_4] [i_4] [16LL] = ((/* implicit */int) var_17);
                        var_55 = ((/* implicit */unsigned long long int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((15941205141032736426ULL) - (15941205141032736426ULL)))));
                    }
                } 
            } 
            arr_71 [i_4] [i_4] = ((/* implicit */unsigned int) (((+(var_13))) & (((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned short)16] [i_4])))));
        }
        for (unsigned int i_21 = 4; i_21 < 20; i_21 += 4) 
        {
            var_56 = ((/* implicit */long long int) var_18);
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    {
                        arr_81 [16ULL] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_21 [i_21] [i_2] [i_22] [i_21] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_15)))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) arr_26 [i_2] [(unsigned char)3] [i_23] [i_2] [i_22] [i_23]))))));
                        var_57 &= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_74 [i_2] [i_2] [i_2])))) ^ (var_2)));
                        arr_82 [i_2] [i_21] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_23])) ? (arr_51 [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        }
        var_58 = ((/* implicit */long long int) var_7);
    }
}
