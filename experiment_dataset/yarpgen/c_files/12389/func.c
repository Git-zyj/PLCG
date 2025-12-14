/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12389
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */short) var_7);
                    var_14 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) var_6))))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_0)))) - ((-(arr_5 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_3 [i_0 - 1]))));
                                var_16 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_3]))) ^ (var_9))));
                                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)37))))) ? ((-(arr_3 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) <= (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] [i_0] &= ((/* implicit */unsigned int) min((min(((-9223372036854775807LL - 1LL)), (arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0]))), (((/* implicit */long long int) ((signed char) var_10)))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_19 [i_6 - 1] [i_6 - 1])));
                        arr_27 [i_5] [i_6] [i_7] |= ((unsigned short) var_1);
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        var_20 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + (((/* implicit */int) (_Bool)1))));
                        var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_5] [i_6 - 2] [i_7]))));
                        var_22 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned char) (-(arr_19 [i_6 + 1] [i_6 + 1])));
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-19975)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_24 [i_5] [i_6 + 1] [i_7] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    }
                    for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_25 = (-(((/* implicit */int) arr_26 [i_6] [i_6] [i_6 + 1] [i_7])));
                            var_26 += ((/* implicit */_Bool) ((unsigned short) var_8));
                        }
                        for (unsigned int i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            var_27 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_13 + 1] [i_6 - 2] [i_13]))));
                            var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) / (arr_38 [i_6 - 1] [3U] [i_7] [(unsigned short)13] [i_13] [i_13] [i_13 - 1])));
                        }
                        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            arr_47 [i_5] [i_6] = ((/* implicit */_Bool) var_12);
                            var_29 ^= ((/* implicit */_Bool) ((arr_19 [i_5] [i_6 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_30 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 4294967277U)) : (var_3)))));
                            var_31 += ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_5] [i_14] [i_5] [i_14] [i_14]))) : (4U));
                            var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2786069535U)) ? (var_3) : (4583513227388107502LL)))) || (((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_6] [i_6 - 1] [i_6] [i_6 - 1]))));
                        }
                        var_33 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)242)) - (13094746)))) ? (((var_9) / (((/* implicit */long long int) 1956424551U)))) : (var_8)));
                        var_35 |= ((/* implicit */int) var_4);
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (var_8)))) ? (arr_42 [i_5] [i_5] [(short)8] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_5] [(_Bool)1] [i_5] [i_5] [i_5])))));
        /* LoopSeq 3 */
        for (short i_15 = 2; i_15 < 20; i_15 += 1) 
        {
            var_37 |= ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
            var_38 += ((/* implicit */short) ((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) arr_45 [i_5] [i_5] [i_5] [3U] [(signed char)1] [i_15 + 1] [i_15])) : (((/* implicit */int) (unsigned char)62))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    {
                        arr_57 [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                        var_39 ^= ((unsigned char) 1508897760U);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_65 [(unsigned short)15] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((long long int) (unsigned char)14)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 7527309651160043025ULL))))));
                            var_40 = ((/* implicit */long long int) (~(((1508897743U) << (((((/* implicit */int) (unsigned short)65535)) - (65524)))))));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-12809)) ? (var_8) : (var_8)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    {
                        var_42 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_5])) << (((((/* implicit */int) arr_49 [i_5])) - (39087)))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_49 [i_5])) + (((/* implicit */int) arr_49 [1ULL]))));
                    }
                } 
            } 
        }
        for (signed char i_24 = 1; i_24 < 20; i_24 += 1) 
        {
            var_44 += ((unsigned char) var_0);
            var_45 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) 2481264137U)));
            var_46 = ((((/* implicit */int) (short)-32758)) + (((/* implicit */int) var_10)));
            var_47 |= ((/* implicit */short) ((unsigned int) (_Bool)1));
        }
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25543)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (var_9)))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_11))))))));
    var_49 &= ((/* implicit */short) var_8);
}
