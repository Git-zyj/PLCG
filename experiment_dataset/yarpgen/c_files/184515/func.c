/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184515
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) var_6))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1])) | (((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2 - 1]))));
                    arr_9 [i_0] [i_0] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)2)) | (((/* implicit */int) (short)-18185)))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 - 1])) - (26960)))));
                    var_12 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_2 - 1] [i_1])))) >> ((((~(arr_0 [i_0 + 1]))) - (1481052934U)))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((568926675) / (((/* implicit */int) (short)-3870))))) ? (((/* implicit */unsigned int) -620936146)) : (2047931871U)));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483648U))));
        var_13 = ((/* implicit */short) ((3116079185U) >> (((((((/* implicit */_Bool) -7372588620868318058LL)) ? (((/* implicit */int) (unsigned short)65534)) : (2147483647))) - (65512)))));
        arr_12 [i_0] [i_0] = ((-620936146) < (((/* implicit */int) (short)-24501)));
    }
    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((~(0U))) >= (((/* implicit */unsigned int) ((int) arr_0 [i_3 + 1]))))))));
        arr_15 [i_3] = ((var_0) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 1] [i_3 + 2])) : (arr_2 [(short)4] [i_3])))));
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_15 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */short) (_Bool)0)))))) : (var_6)))) >= ((-(max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_5]))))))));
            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned short)51823)))));
            arr_20 [i_5] = ((/* implicit */unsigned short) (~(-6187919781759720370LL)));
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_24 [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_2))))), (((short) var_4)))))));
            arr_25 [i_4 - 2] [(_Bool)1] [i_4 + 1] = ((/* implicit */short) 9223372036854775807LL);
        }
        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) -1235070837)) - (2129092899U)))));
            var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)65534)) - (((/* implicit */int) arr_16 [i_4 - 1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_19 = ((/* implicit */int) min((var_19), (((((((/* implicit */_Bool) 10836396916248768635ULL)) || (((/* implicit */_Bool) arr_14 [7])))) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) (unsigned short)65521))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1350)) : (var_9)))))))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned int) min((6187919781759720372LL), (((/* implicit */long long int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                var_22 = ((((/* implicit */_Bool) var_8)) ? ((-(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_10] [i_9]))));
                arr_37 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2] = ((/* implicit */_Bool) (+(((min((1657664453U), (((/* implicit */unsigned int) (unsigned short)2)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            }
        }
        arr_38 [i_4] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) min((2637302842U), (((/* implicit */unsigned int) var_10))))) && (arr_35 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 2])))), (((short) ((unsigned long long int) var_5)))));
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 20; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_43 [i_4] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((_Bool) (short)-14837))))));
                    var_23 = ((/* implicit */short) (_Bool)0);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_35 [(signed char)0] [i_11 - 1] [i_12] [i_13])))) >> (((((arr_46 [i_4 - 1]) ^ (((/* implicit */int) (unsigned short)2)))) + (1834533957)))));
                        var_25 = (+(((/* implicit */int) (short)-15081)));
                        arr_47 [i_11] [i_13] [i_12] [i_4] [i_13] = (((~(((/* implicit */int) (short)-14353)))) & (((((/* implicit */_Bool) (short)-14837)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (_Bool)1)))));
                        arr_48 [i_11] [i_4] [i_12] [i_11] [i_4] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_4] [(short)10] [(short)10])) ? (18446744073709551593ULL) : (8807302280188791367ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3)))))))) / (((((/* implicit */_Bool) 3328976792U)) ? (((/* implicit */int) (short)14836)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 6187919781759720370LL))))) - (((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)7614))))) % (((((/* implicit */_Bool) -6187919781759720370LL)) ? (((/* implicit */int) (short)14811)) : (((/* implicit */int) var_10))))))));
                        arr_52 [i_4] [i_11] [i_12] [i_14] = ((/* implicit */int) arr_16 [i_4 - 2]);
                    }
                }
            } 
        } 
        arr_53 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_34 [i_4 + 2] [i_4 + 2] [i_4]))) && (((/* implicit */_Bool) arr_26 [i_4 - 2] [i_4 + 1] [18ULL]))));
        arr_54 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_4])))) % (((((/* implicit */unsigned long long int) 3158661664U)) + (18446744073709551602ULL)))));
    }
    for (unsigned char i_15 = 2; i_15 < 21; i_15 += 4) 
    {
        arr_58 [i_15] = ((((/* implicit */_Bool) ((arr_57 [i_15 - 2]) >> (((((((/* implicit */_Bool) arr_55 [i_15])) ? (var_6) : (1136305632U))) - (392718040U)))))) ? (var_6) : ((+(1136305632U))));
        arr_59 [i_15] [4] = ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_55 [i_15]))))))));
        arr_60 [i_15] = ((/* implicit */signed char) -4907593069709429247LL);
    }
}
