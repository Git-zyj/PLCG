/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153588
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) max((max(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) (short)-20622))))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)84)) >= (((/* implicit */int) (short)-2145)))))))));
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (short)2159))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)2118)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)2146))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            arr_7 [i_1] = (~(((/* implicit */int) arr_5 [i_1] [10LL])));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_5] [i_4] [i_3] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-2131)) * (((/* implicit */int) (short)2149))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2143)) + (((/* implicit */int) (short)-2163))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_19 *= (+((+(arr_15 [i_1] [i_1] [i_3] [i_4] [i_1]))));
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2117)) / (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2147))) : (arr_10 [i_2] [i_2]))))));
                    }
                    var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-2161)) <= (((/* implicit */int) (short)-2148))));
                }
                for (unsigned int i_7 = 3; i_7 < 15; i_7 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2] [(unsigned short)2]);
                    arr_25 [i_1] [i_1] [i_1] [i_3] [6ULL] |= ((/* implicit */unsigned long long int) var_5);
                }
                for (short i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_2] [i_3] [i_2] [i_1]))));
                    var_24 *= ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-2137))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2153))))) : (((/* implicit */int) (short)-2142)));
                    arr_28 [i_8] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_2 + 1]))));
                    arr_29 [i_8] [i_3] [i_3] [i_1] = ((/* implicit */long long int) (~((-(((/* implicit */int) (short)2145))))));
                }
                var_25 = ((/* implicit */unsigned int) (-(arr_9 [i_3 + 2] [i_3] [i_3 + 4])));
            }
            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
            {
                arr_32 [i_1] [11ULL] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2131)) ? (arr_19 [i_9] [i_9] [15] [i_9] [i_9] [i_9 - 2] [(_Bool)1]) : (arr_19 [i_9] [i_9] [i_9] [i_9] [(short)0] [i_9 - 2] [(signed char)5])));
                arr_33 [(signed char)6] [i_2 - 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_9 + 1] [i_9] [i_1] [i_1] [i_9 + 2] [i_9 - 2]))));
            }
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 4) /* same iter space */
            {
                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-2150)) != (((/* implicit */int) arr_14 [i_10] [(unsigned char)2] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]))));
                var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2164)) & (((/* implicit */int) (short)2160))));
            }
        }
        for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */int) (short)2140)) > (((/* implicit */int) (short)2176))));
            var_29 = ((/* implicit */long long int) arr_26 [i_1] [0U] [i_11] [0U]);
        }
        for (unsigned int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            arr_43 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_12 + 1] [i_12 - 1] [i_12 - 1]))));
            arr_44 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2154))));
        }
        arr_45 [i_1] = var_14;
        arr_46 [i_1] = ((/* implicit */unsigned long long int) (short)-2162);
        var_30 = arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        arr_49 [i_13] = ((/* implicit */unsigned char) (~(((unsigned long long int) (short)-2188))));
        arr_50 [i_13] [8U] = ((((/* implicit */int) arr_47 [i_13])) == (((/* implicit */int) (short)-2165)));
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 2) 
            {
                {
                    arr_57 [i_13] [i_14] [i_14] [5U] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_53 [i_15 + 2] [i_15 - 1] [i_15 - 1]))));
                    var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-2153)) ? (((/* implicit */int) (short)-2136)) : (((/* implicit */int) (short)-2148))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            for (short i_18 = 4; i_18 < 16; i_18 += 2) 
            {
                {
                    arr_67 [i_18] [i_17] [i_16] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_65 [i_18 + 2] [i_18 - 3] [i_18 - 1] [i_18 + 2])) && (((/* implicit */_Bool) (short)-2135)))), (((((/* implicit */int) (short)-2175)) >= (((/* implicit */int) arr_54 [i_18 - 1] [i_18 - 1] [i_17]))))));
                    arr_68 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) (~(arr_65 [i_18] [i_18 + 1] [i_18] [i_18 + 2])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) (short)2145)), (arr_51 [i_18 + 2]))), (max((((/* implicit */unsigned short) (short)-2157)), (arr_52 [(unsigned char)2] [i_18 + 1])))));
                        arr_72 [i_16] [i_16] [i_16] [i_16] [i_18] &= ((/* implicit */int) ((((/* implicit */int) (short)-2142)) > (((/* implicit */int) (short)-2138))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                    {
                        arr_75 [i_20] [i_17] [i_20] [i_17] [i_20] = ((/* implicit */unsigned int) ((unsigned short) ((max((var_3), (((/* implicit */unsigned long long int) arr_65 [(_Bool)1] [i_17] [i_17] [i_17])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_16])))))))));
                        var_33 &= ((/* implicit */signed char) (~(((((/* implicit */int) (short)2149)) * (((/* implicit */int) (short)2132))))));
                        arr_76 [i_20] [i_20] [(short)9] [i_20] [i_16] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (short)2163)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)2177)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_64 [i_17] [i_17] [i_17])) : (((/* implicit */int) (short)-2159)))))), (((/* implicit */int) ((((arr_62 [(short)1]) >> (((((/* implicit */int) arr_55 [i_18] [i_17] [i_16])) - (30913))))) == (((/* implicit */long long int) (-(((/* implicit */int) (short)2151))))))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) min((var_14), (var_14)))))), ((-((+(((/* implicit */int) (short)2106))))))));
    var_35 = ((/* implicit */unsigned char) var_7);
}
