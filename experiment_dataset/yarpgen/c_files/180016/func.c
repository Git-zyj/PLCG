/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180016
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_18 = ((((-7912301667341018323LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_3 - 1]))));
                        var_19 = ((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        var_21 |= ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(585939669196001052LL))) : (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (short)14318))))))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            {
                                var_22 = (unsigned char)118;
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_8] [i_5])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_10 [i_4] [i_6] [i_6] [i_8])) : (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (short)14335);
                    arr_24 [i_5] = ((/* implicit */long long int) var_12);
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned char) (short)-1);
        var_26 = ((/* implicit */unsigned long long int) ((63LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-14318)))));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_11 = 3; i_11 < 16; i_11 += 3) 
                {
                    arr_32 [i_10] [i_10] [i_11 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)43))))) / (arr_31 [i_9] [i_10 - 3] [i_11])));
                    var_27 = ((/* implicit */long long int) var_16);
                    var_28 += ((/* implicit */unsigned long long int) -2158741777282904132LL);
                    var_29 = (unsigned char)68;
                }
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_30 |= ((/* implicit */unsigned long long int) ((min((arr_31 [i_9 + 1] [i_10 + 3] [(unsigned char)4]), (4430839077947555274LL))) / (((-9223372036854775805LL) / (-9223372036854775800LL)))));
                    var_31 |= ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) : (arr_33 [i_9 - 1] [i_9 + 2]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 - 1])) || (((/* implicit */_Bool) 4084959318319576938ULL)))))));
                }
                for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 2; i_14 < 19; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 3) 
                        {
                            {
                                var_32 |= ((((/* implicit */_Bool) -9223372036854775803LL)) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32751))));
                                var_33 = (i_10 % 2 == 0) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)53)) >> (((arr_30 [i_9] [i_10] [i_14 - 1] [i_15 + 1]) - (5577398653027283886ULL))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)53)) >> (((((arr_30 [i_9] [i_10] [i_14 - 1] [i_15 + 1]) - (5577398653027283886ULL))) - (7454254047555456945ULL)))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) max((2158741777282904132LL), (((/* implicit */long long int) var_4))))), (10580663029638398370ULL))), (((/* implicit */unsigned long long int) ((7912301667341018323LL) << (((((/* implicit */int) (unsigned char)68)) - (68))))))));
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((((/* implicit */int) arr_36 [i_9])) + (2147483647))) << (((((((-4317105646005372709LL) + (9223372036854775807LL))) >> (((12711709020300239583ULL) - (12711709020300239559ULL))))) - (292436265400LL))))))));
                    var_36 |= ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7))))));
                }
                arr_42 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) max((((arr_39 [i_9 + 1] [i_10] [i_10 - 3] [i_9 + 1]) & (3268071053779021747LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-12964)))))));
                arr_43 [16LL] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)12963))) < (arr_33 [i_9 + 2] [i_9 + 2])));
            }
        } 
    } 
}
