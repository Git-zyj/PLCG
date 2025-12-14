/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153816
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
    var_20 = ((/* implicit */_Bool) (+((-(((((/* implicit */int) (signed char)87)) - (((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((short) var_19));
        var_22 = ((/* implicit */int) (-(486982126515122019LL)));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned int) var_12);
            arr_9 [i_1] [i_2] = ((/* implicit */short) arr_8 [(unsigned char)9] [(short)12] [i_2]);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((~(-1))) : (((max((((/* implicit */int) var_1)), (2147483647))) * ((+(((/* implicit */int) arr_1 [i_2]))))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_1] [i_3] [1LL] &= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [i_1 + 4])))), (max((((/* implicit */int) arr_0 [i_1 + 4])), (19)))));
                arr_13 [i_3 - 1] [(short)6] = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_14)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -11)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) (short)3))))) : (arr_5 [i_1])))));
                            var_26 = ((/* implicit */short) 4095U);
                            arr_18 [i_5] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */short) var_14);
                        }
                    } 
                } 
                var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (arr_15 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32762)) >= (((/* implicit */int) arr_3 [i_2] [i_2]))))) : (((/* implicit */int) max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)1)))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_1] [i_2] [i_6] [i_6] = min((((/* implicit */int) arr_4 [i_1 + 4])), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) (unsigned short)0)))));
                arr_22 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-2007500105) : (var_7)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((arr_7 [(unsigned char)2]) >= (((/* implicit */int) ((var_9) <= (((/* implicit */int) arr_19 [i_2] [i_2] [i_6])))))))) : (((/* implicit */int) var_4))));
            }
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_28 &= (~(((/* implicit */int) (_Bool)1)));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1909998993)) * (arr_28 [i_2 + 1] [i_2] [i_8] [i_8] [i_7 + 1] [i_2])));
                }
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) 3638039163U)) ? (3638039174U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))))))));
            }
        }
        for (long long int i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
        {
            arr_31 [i_1] [i_9 + 2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_1]))));
            arr_32 [i_1] &= ((/* implicit */unsigned char) var_12);
            arr_33 [i_9 - 1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)0)))));
        }
        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8665)))))) + (min((((/* implicit */unsigned int) (unsigned char)187)), (2294755256U)))));
        var_32 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-9068)) : (14693775)))) & (arr_17 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1)) == (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)84))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) | (4503598553628672LL)))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_11 = 4; i_11 < 13; i_11 += 4) 
            {
                var_34 -= ((/* implicit */unsigned long long int) (short)4096);
                var_35 = ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 4) 
            {
                var_36 -= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (14693794)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)11)), (var_19)))) + (var_7))))));
                var_37 -= ((/* implicit */_Bool) var_15);
            }
            /* vectorizable */
            for (short i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                var_38 *= ((/* implicit */unsigned char) (unsigned short)8191);
                var_39 = ((/* implicit */short) ((((/* implicit */int) ((var_9) >= (((/* implicit */int) (unsigned char)0))))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_40 [i_10])) : (((/* implicit */int) arr_34 [i_1 + 4]))))));
            }
            var_40 = ((/* implicit */unsigned char) 16777215);
            var_41 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
        }
    }
    for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_15 = 2; i_15 < 19; i_15 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), (var_18)))) == (((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned short)0)))))))));
            var_43 ^= ((/* implicit */long long int) (_Bool)1);
        }
        for (long long int i_16 = 2; i_16 < 19; i_16 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                var_44 = ((((/* implicit */int) arr_48 [i_16 - 1] [i_14] [i_14])) | (((/* implicit */int) ((unsigned short) (short)8))));
                arr_55 [i_17] [(short)8] [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_51 [i_17] [i_16] [(signed char)3]))))), (((((unsigned int) var_4)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_16] [i_16] [i_16] [i_14])))))));
            }
            for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                arr_58 [i_14] [i_14] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (var_7)));
                var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_13))))) >= ((((-(((/* implicit */int) var_11)))) + (((/* implicit */int) var_4))))));
                arr_59 [(_Bool)1] = (unsigned short)51787;
                arr_60 [i_14] [i_14] [(unsigned char)7] = arr_50 [i_14] [i_14];
            }
            for (int i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    var_46 = ((/* implicit */short) (_Bool)1);
                    var_47 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_57 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2])))) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_49 [i_20] [i_19])) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) var_0))))))));
                }
                arr_66 [i_16 - 1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) arr_44 [i_19])), (var_10)))))))));
            }
            var_48 = ((/* implicit */unsigned long long int) var_11);
            var_49 = ((((/* implicit */_Bool) 5400576441182316864LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_16] [i_16] [i_14] [i_14]))) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [(short)18] [i_14] [i_14] [i_16])))))) : ((-(((/* implicit */int) (_Bool)1))))))) : (4503598553628658LL));
        }
        var_50 = ((/* implicit */unsigned char) (-((+(arr_50 [i_14] [i_14])))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_14] [(short)9] [i_22] [i_23])) ? (max((var_12), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)1536))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 892479168297871556LL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)63977)))))));
                        var_52 += ((/* implicit */unsigned short) var_9);
                    }
                    var_53 = ((/* implicit */unsigned char) var_4);
                    arr_76 [i_21] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)-14609)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_16))))))));
                }
            } 
        } 
    }
}
