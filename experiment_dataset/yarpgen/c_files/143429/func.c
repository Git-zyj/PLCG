/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143429
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) var_8);
            arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_1 - 2]);
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) max((arr_1 [i_0 + 1] [i_0 + 1]), (((((((arr_1 [i_2] [i_0]) + (2147483647))) << (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_0)))))))));
            var_18 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(arr_1 [i_2] [i_0 - 1])))), (min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_2])) ? (arr_2 [i_0 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (min((arr_2 [i_2] [i_0 + 1]), (((/* implicit */unsigned long long int) 3906994686U))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 += ((/* implicit */unsigned int) ((((arr_13 [i_3] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) + (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_10)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_17 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((3564581859U), (((/* implicit */unsigned int) arr_15 [i_0 + 1] [i_3] [i_3] [i_4]))))) % (var_10)))) ? ((+(arr_2 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_0 - 1])) : (((/* implicit */int) max(((unsigned short)2047), (arr_14 [i_4])))))))));
                arr_18 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) var_6);
                var_20 = ((/* implicit */signed char) arr_13 [i_0] [i_0 + 1] [i_0]);
            }
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_21 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967290U)) && (((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1])))))) == (((((/* implicit */_Bool) var_11)) ? (arr_13 [i_5] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_14)))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_5] [i_5] [i_6] [i_7] [i_6] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */int) var_0)))) % (((/* implicit */int) (short)-32762))));
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_14)))));
                            var_23 = ((/* implicit */unsigned short) arr_22 [i_6] [i_0 + 1] [i_8]);
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_5] [i_5] [i_5] [5U])) ? (arr_2 [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0])))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) var_8);
                        var_26 = ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_34 [i_10] [i_5] [i_10] [i_10] [i_9] [i_9])) - (116))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) ^ (var_15)));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned short) var_8);
                    }
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_11] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_28 [i_11]))));
                }
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-76))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 1; i_15 < 15; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    for (long long int i_17 = 4; i_17 < 15; i_17 += 1) 
                    {
                        {
                            arr_52 [i_15] [i_14] [9LL] [i_16] [i_16] [i_0 + 1] [i_17 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2306353745714839576LL)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_50 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 - 1] [i_15] [i_0 - 1]))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) var_12)))))))));
                            var_32 = ((((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) arr_41 [i_17 - 2] [i_17 - 1] [i_16] [(_Bool)1] [i_14] [i_14] [i_0 - 1])) ? (arr_12 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_36 [i_16] [i_14] [i_15])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_16] [i_14] [i_15 + 1] [i_16]))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [i_0] [i_14] [i_15])))) ? (((/* implicit */int) arr_46 [i_0] [i_16])) : (((/* implicit */int) max((arr_21 [i_0 + 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_53 [i_0] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_15 - 1] [i_0 + 1]))))) < (((((/* implicit */int) arr_0 [i_15 - 1] [i_0 - 1])) & (((/* implicit */int) arr_0 [i_15 - 1] [i_0 + 1]))))));
                arr_54 [i_0 + 1] [i_0 + 1] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 730385435U)) ? (-2306353745714839556LL) : (((/* implicit */long long int) 730385435U))))))) ? (arr_49 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((0LL) > (((/* implicit */long long int) var_1))))) : (((/* implicit */int) (_Bool)0)))))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 1) 
            {
                var_34 = ((/* implicit */int) arr_38 [i_0] [i_14] [15LL] [i_14]);
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (arr_44 [i_0] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) var_5))))) ? (arr_44 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 982813484U))))))));
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    var_36 = ((/* implicit */long long int) var_2);
                    arr_61 [i_0] [15U] [7] [i_19] = ((/* implicit */signed char) var_14);
                    var_37 = ((/* implicit */long long int) arr_14 [i_0]);
                }
            }
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((4762869907131911610ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33483))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                arr_64 [i_14] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)35663))));
                arr_65 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) arr_38 [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
            }
            /* vectorizable */
            for (signed char i_21 = 0; i_21 < 16; i_21 += 1) 
            {
                arr_68 [i_21] = ((/* implicit */long long int) arr_15 [i_0] [i_14] [i_21] [i_0 - 1]);
                var_39 = ((/* implicit */unsigned char) arr_9 [i_21] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)40138)))));
                            arr_73 [i_14] [i_14] [i_21] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) arr_15 [i_23] [i_21] [i_14] [i_0]))));
                            arr_74 [i_0 + 1] [i_14] [i_21] [i_22] [i_21] = ((/* implicit */_Bool) var_11);
                            arr_75 [i_0] [i_14] [i_21] [i_21] [i_23] = (!(((/* implicit */_Bool) ((unsigned int) var_12))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 1) 
            {
                for (long long int i_25 = 1; i_25 < 13; i_25 += 3) 
                {
                    for (unsigned int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_14] [i_24] [i_25] [i_26])) ? (var_10) : (11829480076839722477ULL)))) ? (var_7) : (((/* implicit */int) ((((/* implicit */_Bool) arr_78 [i_0] [i_24] [i_25] [i_26])) || (((/* implicit */_Bool) (unsigned short)7009)))))))) ? (((/* implicit */int) arr_58 [i_0 - 1] [i_14] [i_25] [4])) : (((/* implicit */int) (unsigned char)170))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6990)) ^ (((/* implicit */int) (signed char)-86))));
                            arr_84 [i_0 - 1] [i_25] [i_25] [i_25] [i_26] [i_24] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (((((/* implicit */_Bool) arr_40 [i_0 - 1] [i_14] [i_24])) ? (13683874166577640006ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 730385435U)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_0 + 1] [i_14] [i_14] [i_24] [12LL] [i_26] [i_26]))))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_27 = 0; i_27 < 16; i_27 += 1) 
        {
            arr_87 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((4762869907131911607ULL), (((/* implicit */unsigned long long int) (unsigned short)55030))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [10ULL] [i_27] [i_0]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10504)) ? (((/* implicit */int) arr_67 [(signed char)0] [(signed char)0])) : (((/* implicit */int) arr_45 [i_27] [i_27] [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) 3026094208U)), (2ULL)))))));
            var_43 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_26 [i_0] [(_Bool)0] [14ULL] [i_27] [i_27] [i_27] [i_27])), (max((arr_44 [i_0] [i_27] [i_27]), (((/* implicit */unsigned long long int) var_15))))))));
        }
        var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_14)))) + (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
        arr_88 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [8U] [i_0 - 1] [i_0 - 1] [i_0 + 1] [(unsigned short)2]))))) || (((/* implicit */_Bool) arr_33 [i_0 - 1] [(signed char)12] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
    }
}
