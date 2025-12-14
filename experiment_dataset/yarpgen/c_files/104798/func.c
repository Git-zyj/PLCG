/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104798
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
    var_13 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) var_2)) | (var_0))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (short)-4873))));
                    arr_8 [i_2] [i_1 + 1] = ((/* implicit */unsigned long long int) var_4);
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) (short)4873);
                }
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_12 [5LL] = ((/* implicit */_Bool) (short)-8174);
                    arr_13 [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) & (((/* implicit */int) arr_2 [i_3])))) & (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                arr_23 [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6 + 1] [i_6] [i_6])) & (((/* implicit */int) var_7))))) || (((((/* implicit */int) arr_7 [i_6 + 1] [(unsigned short)7] [(unsigned short)7])) < (((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1] [i_6]))))));
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    arr_28 [i_4] [i_5] [i_4] [i_6] = ((/* implicit */long long int) 1666832037668189659ULL);
                    var_15 = ((/* implicit */unsigned int) (short)-4873);
                    var_16 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)6139)), (1218752746U)));
                    arr_29 [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) ((unsigned char) (short)-8174))) << (((min((2139095040), (1667241310))) - (1667241308))))));
                    arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((((-407672237) + (2147483647))) >> (((((/* implicit */int) (signed char)43)) - (40)))))) % (3224458111U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 3616588393U))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_6] [i_6] = ((/* implicit */unsigned short) (_Bool)0);
                    var_17 = ((/* implicit */signed char) max((var_7), ((!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_6 + 1] [i_6 + 1]))))));
                    arr_34 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_11) + (9223372036854775807LL))) << (((var_2) - (1772893513)))))) ? ((-(arr_21 [i_8] [(unsigned char)9] [i_5] [i_4]))) : (((/* implicit */unsigned long long int) arr_17 [i_6 + 1] [i_6 - 1]))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_39 [i_5] [i_6] = ((/* implicit */_Bool) max((((arr_6 [i_4] [i_4] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), (var_5))))));
                    var_18 = ((/* implicit */_Bool) (signed char)-51);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        arr_43 [i_6] [i_6] [i_5] [i_9] [i_6] [i_6] [i_9] = arr_17 [i_6 + 2] [i_10 - 1];
                        arr_44 [i_4] [i_6] [i_4] [i_9] = ((/* implicit */_Bool) ((arr_38 [10U] [i_4] [i_6 + 1] [i_4]) ^ (((/* implicit */long long int) arr_19 [(unsigned short)6] [i_5] [i_6 - 2] [i_6]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(arr_21 [i_6 + 2] [i_10 - 1] [i_6 + 2] [i_6 - 1]))))));
                        arr_45 [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) * (var_11)));
                        arr_46 [i_4] [i_6] [i_4] [i_6] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51147)) & (((/* implicit */int) arr_2 [i_6 + 2]))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 6800492729307476525ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)256))))) || (((((/* implicit */int) (unsigned char)11)) > (((/* implicit */int) (_Bool)1)))))))));
                    var_21 = var_4;
                    arr_50 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) arr_15 [0LL]);
                    var_22 = ((/* implicit */unsigned int) ((unsigned short) -74422515387863670LL));
                    arr_51 [i_4] [(_Bool)1] [i_6] [i_4] = min((min((((/* implicit */long long int) ((_Bool) arr_48 [i_4] [i_4] [i_4] [i_11]))), (arr_25 [i_4] [i_4] [i_5] [i_5] [i_11]))), (((/* implicit */long long int) 215847350)));
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_12 = 3; i_12 < 16; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */short) ((((((/* implicit */long long int) 1086758762)) | (2859260103665806515LL))) << ((((-(((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(short)11] [i_5]))) : (arr_21 [i_13] [i_12] [i_5] [(short)14]))))) - (18446744073709542035ULL)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))) & ((~(((/* implicit */int) arr_55 [i_12 + 1] [i_12 + 1]))))));
                    }
                } 
            } 
            arr_58 [i_4] = ((/* implicit */_Bool) arr_0 [i_5]);
            /* LoopNest 3 */
            for (unsigned char i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (unsigned int i_16 = 1; i_16 < 13; i_16 += 3) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned short) var_3);
                            var_26 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_37 [i_14] [i_14 + 1] [i_14 - 1] [i_14])) ^ (((/* implicit */int) var_6)))));
                            arr_71 [i_5] [i_14] = ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) arr_55 [i_4] [i_17]);
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        {
                            arr_84 [i_4] [i_4] [i_4] [i_17] = ((/* implicit */unsigned short) var_8);
                            arr_85 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22363)) % (((/* implicit */int) arr_26 [i_17] [i_4]))));
                            arr_86 [i_17] [i_17] [i_19] [i_18] [i_17] [i_17] = ((/* implicit */signed char) ((arr_61 [i_17] [i_19]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    var_28 += ((/* implicit */_Bool) 1065353216U);
                    var_29 = ((/* implicit */long long int) var_12);
                    var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_21] [i_21] [i_21 + 1] [(signed char)16])) ? (((((/* implicit */int) (unsigned short)51147)) ^ (((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) var_7))));
                    var_31 = ((/* implicit */long long int) ((((var_3) ? (((/* implicit */int) (unsigned short)46962)) : ((-2147483647 - 1)))) ^ (((-1432019463) & (((/* implicit */int) (signed char)-64))))));
                    var_32 = ((/* implicit */int) (unsigned char)110);
                }
                arr_91 [i_4] [i_4] [i_17] [i_18] = ((/* implicit */short) ((var_0) & (((/* implicit */unsigned long long int) (-(4294967295U))))));
            }
        }
        arr_92 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)119), (var_10))))))) << (((832872076U) - (832872072U)))));
        arr_93 [i_4] &= arr_26 [(signed char)2] [i_4];
    }
    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (unsigned short)65535))));
}
