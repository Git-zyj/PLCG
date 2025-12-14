/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150408
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_13)) | (((/* implicit */int) (short)-17180))))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)7109))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((unsigned int) (short)-8163)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 148974200U))))))));
        var_18 |= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 4128273778U)))));
        arr_7 [3U] [i_0] = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [(signed char)8] [i_0])))));
    }
    for (int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) var_3)))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_22 [i_2] [i_3] [i_4] = ((/* implicit */int) (!((_Bool)1)));
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2 + 2])))) || (((/* implicit */_Bool) ((unsigned short) arr_20 [i_3] [i_4])))));
                        var_21 |= ((/* implicit */signed char) (+(((((/* implicit */int) arr_19 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_4 - 1])) + (((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 2] [i_4 - 3]))))));
                        arr_23 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) (signed char)-125))))) ? ((+(((/* implicit */int) ((_Bool) arr_17 [i_3]))))) : ((-(((/* implicit */int) arr_21 [i_2 - 1]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_33 [i_2 + 3] [i_3] [i_2 + 3] [i_8] [i_3] [i_2 + 3] [i_8] = ((/* implicit */long long int) var_5);
                            arr_34 [i_8] [i_3] [i_6] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_19 [0ULL] [(signed char)19] [i_6] [i_2]);
                            var_22 &= ((/* implicit */unsigned char) ((arr_8 [i_6]) / (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_3] [i_7] [i_8])) + (((/* implicit */int) (_Bool)1))))), (arr_32 [i_2 + 1] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_6] [13ULL]))))));
                            arr_35 [i_3] [i_3] [i_6] [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                        }
                        arr_36 [i_3] [i_6] [i_3] = (unsigned short)65522;
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */_Bool) (unsigned char)72);
    }
    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9])) ? (arr_38 [i_9]) : (arr_38 [i_9])))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_38 [i_9])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_25 = ((/* implicit */int) var_6);
            arr_42 [i_9] [(short)16] [i_10] = ((/* implicit */unsigned short) var_1);
            var_26 = ((long long int) var_8);
            arr_43 [i_10] = ((/* implicit */signed char) var_1);
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2159454223U)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48456))))) ? (((-1008370349649494981LL) / (arr_40 [15U]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 0ULL)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)26051)))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_46 [i_11] [i_14])))), (min((4629434814270298840ULL), (((/* implicit */unsigned long long int) arr_37 [i_9] [i_13]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((4294967276U), (((((/* implicit */_Bool) arr_44 [i_12] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_14)))))));
                            var_29 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_12] [i_9]))))), (((((/* implicit */_Bool) 3555323051U)) ? (((/* implicit */unsigned long long int) arr_38 [i_9])) : (var_15)))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_9] [i_9] [i_9])) ? (min((((/* implicit */unsigned long long int) (+(-161910369799264159LL)))), (var_15))) : (((/* implicit */unsigned long long int) ((long long int) arr_49 [i_9] [i_9] [i_11] [i_11]))))))));
            arr_56 [i_9] [i_9] [i_11] = ((/* implicit */int) (short)32767);
            arr_57 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_50 [i_9] [i_9] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) ((short) arr_41 [i_11] [i_9]))) : (((/* implicit */int) ((unsigned short) var_3)))));
        }
        var_31 = ((/* implicit */long long int) ((unsigned short) ((arr_41 [i_9] [i_9]) >> (((arr_46 [i_9] [i_9]) - (4051233918U))))));
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29551))) : (var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_9]))) + (var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6885))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 620589288U)) ? (0U) : (arr_41 [i_9] [(short)0])))), (10557130292852852640ULL)))));
        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_54 [14U] [i_9] [i_9] [i_9] [12U] [i_9] [i_9]), (arr_54 [i_9] [i_9] [i_9] [21U] [i_9] [i_9] [i_9]))))));
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        var_34 = ((/* implicit */unsigned int) max((var_34), ((~(1413760977U)))));
        arr_61 [i_15] [(unsigned short)0] &= ((/* implicit */short) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */_Bool) (short)23633)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    /* LoopNest 3 */
    for (signed char i_16 = 3; i_16 < 18; i_16 += 4) 
    {
        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_65 [i_16]), (arr_65 [i_16])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_18]))) != (0U)))))));
                    var_36 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_28 [i_16] [i_16] [i_16 + 2] [15U] [i_18])) ? (((/* implicit */int) arr_29 [(unsigned short)12] [i_16 + 2] [12U] [i_18])) : (((/* implicit */int) arr_29 [16U] [i_16 + 1] [i_18] [(short)12])))), (((/* implicit */int) max((arr_28 [i_16] [i_16] [i_16 + 2] [i_16] [i_17]), (arr_29 [(unsigned char)8] [i_16 - 3] [i_18] [i_16]))))));
                    arr_71 [i_16] [1ULL] [i_16] = ((/* implicit */signed char) ((short) min((arr_68 [i_16 - 3] [i_16] [i_16 + 2]), (arr_68 [i_16 - 1] [i_16] [i_16 - 2]))));
                    var_37 = ((/* implicit */signed char) ((((((/* implicit */int) arr_64 [i_16 + 2] [i_16 - 2] [i_16 - 3])) + (2147483647))) << (((((((/* implicit */_Bool) arr_64 [i_16 - 3] [i_16 + 1] [i_16 - 3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))) - (25796)))));
                }
            } 
        } 
    } 
    var_38 = ((unsigned int) ((unsigned int) ((unsigned short) var_6)));
}
