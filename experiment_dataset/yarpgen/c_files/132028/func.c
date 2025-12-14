/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132028
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
    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (short)13584)))))) ? (((/* implicit */unsigned long long int) (+(var_19)))) : ((+(1ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))));
        arr_3 [i_0] = var_1;
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)69))))) ? ((+(((/* implicit */int) arr_1 [i_1] [17LL])))) : (((/* implicit */int) arr_1 [i_1 - 1] [13LL]))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                var_21 = ((/* implicit */short) arr_0 [i_1]);
                var_22 += ((/* implicit */unsigned long long int) 7268614691522235683LL);
            }
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_23 |= ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)69)))));
                var_24 &= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)0))) != (((/* implicit */int) arr_13 [i_2 - 1] [i_2] [i_1 + 1]))));
            }
            var_25 = ((/* implicit */unsigned short) ((int) (-((+(3222169895U))))));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((var_6) & (arr_15 [i_1]))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_21 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                        arr_22 [i_1] [i_6] [i_5] [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_1 - 1] [i_7])))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5])) ? (arr_18 [i_6] [i_6] [i_6] [12U]) : (arr_18 [i_7] [i_1 + 1] [i_5] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_5] [i_6] [i_7]))))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */short) (+((-(((/* implicit */int) (signed char)-68))))));
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_28 [i_1] [i_1] [i_9] [i_9] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)69))))));
                arr_29 [i_1] [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1239726495)) ? (((/* implicit */long long int) (-(-1023915919)))) : (-7268614691522235679LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8] [(short)0] [(short)8]))) : (3222169895U)))))) : (arr_27 [i_1] [i_1])));
            }
            for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (int i_12 = 4; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [10LL] [i_12 - 3] [i_12 - 1] [i_12 - 4] [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13584))) : (arr_36 [i_12] [(short)12] [i_12 - 1] [i_12 - 4] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_36 [i_12] [(short)3] [i_12 - 1] [i_12 - 4] [i_12 + 1])))) : (((((/* implicit */_Bool) arr_36 [(unsigned char)13] [(short)9] [i_12 - 1] [i_12 - 4] [i_12 + 1])) ? (arr_36 [(unsigned char)6] [i_12 - 3] [i_12 - 1] [i_12 - 4] [i_12 + 1]) : (16ULL)))));
                            var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_31 [i_11] [i_11] [(unsigned char)12] [i_8])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        {
                            arr_41 [i_1 - 1] [i_1 - 1] [i_10] [i_1] [(unsigned short)3] = ((/* implicit */signed char) ((int) (-(-3072721977496164615LL))));
                            arr_42 [i_1] = (i_1 % 2 == zero) ? (((((/* implicit */int) ((((/* implicit */int) var_18)) > ((~(((/* implicit */int) arr_35 [i_1 + 2]))))))) << (((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) (short)23275)) ? (arr_27 [i_1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (4294967295U))) - (2042447286U))))) : (((((/* implicit */int) ((((/* implicit */int) var_18)) > ((~(((/* implicit */int) arr_35 [i_1 + 2]))))))) << (((((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */_Bool) (short)23275)) ? (arr_27 [i_1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (4294967295U))) - (2042447286U))) - (171105681U)))));
                            var_31 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */unsigned long long int) ((((arr_4 [i_8]) == (arr_4 [i_8]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-74))))) : (((arr_4 [i_8]) - (arr_4 [i_8])))));
                var_33 = (+(468421696));
                var_34 = ((/* implicit */signed char) (+((+(4800663647443474691ULL)))));
            }
            /* vectorizable */
            for (unsigned int i_15 = 1; i_15 < 14; i_15 += 2) 
            {
                var_35 = ((/* implicit */int) arr_37 [i_15 - 1] [i_8] [i_1 + 1] [i_1 - 1] [(signed char)2] [i_1]);
                var_36 += ((/* implicit */unsigned long long int) ((((arr_6 [i_1 - 1]) + (2147483647))) >> (((1572864) - (1572840)))));
            }
            /* vectorizable */
            for (unsigned char i_16 = 3; i_16 < 13; i_16 += 3) 
            {
                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_16 + 1])))))));
                arr_49 [i_1 - 1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) var_15)) - (var_2)))));
            }
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_14 [10] [10]))));
        /* LoopNest 3 */
        for (short i_17 = 2; i_17 < 11; i_17 += 4) 
        {
            for (short i_18 = 2; i_18 < 12; i_18 += 3) 
            {
                for (short i_19 = 4; i_19 < 14; i_19 += 4) 
                {
                    {
                        var_39 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(-7268614691522235684LL)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((+(((/* implicit */int) var_18)))))));
                        var_40 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_32 [i_1] [i_18] [(short)12]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (int i_20 = 0; i_20 < 19; i_20 += 2) 
    {
        arr_59 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1589517701737209161LL)) - (16ULL)));
        arr_60 [i_20] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62303)) ? (-1023915919) : (((/* implicit */int) arr_1 [i_20] [8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (arr_58 [(signed char)16])))) : ((-(3222169891U)))))));
        arr_61 [3] = ((/* implicit */unsigned long long int) (+((-((+(-236472906)))))));
    }
    for (signed char i_21 = 0; i_21 < 24; i_21 += 3) 
    {
        arr_66 [i_21] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((signed char) (short)2046))) : ((-(((/* implicit */int) arr_62 [i_21]))))))));
        var_41 = ((/* implicit */signed char) var_7);
    }
}
