/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126061
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
    var_16 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = var_6;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) arr_10 [i_0] [i_0] [i_2] [i_3]))), (max((arr_9 [i_0]), (((/* implicit */long long int) arr_5 [i_3] [i_1]))))))) : (arr_12 [i_0] [22LL] [i_0] [i_3] [(unsigned char)7])));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-5533189136800187427LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                        var_20 = ((/* implicit */unsigned long long int) var_11);
                        arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1] [i_4]))));
                        var_21 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (unsigned short)65522)), (18446744073709551615ULL)))));
                        arr_17 [i_0] [2U] [i_1] [2U] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_12 [8LL] [i_1] [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_1] [i_1])) : (((/* implicit */int) var_13))))))) / (var_8)));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)17] [i_2] [i_0]))));
                        arr_21 [i_0] [i_2] [i_0] [i_5] = ((/* implicit */short) max((((9223372036854775807LL) | (((((/* implicit */_Bool) arr_19 [i_1])) ? (arr_0 [i_2]) : (((/* implicit */long long int) arr_11 [i_5] [i_2] [i_2] [i_1] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_2] [i_2] [i_0])) < (min((arr_18 [14U] [i_2] [i_2] [i_1] [i_0]), (var_9))))))));
                        var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_1])))) ? (((((arr_0 [i_0]) + (9223372036854775807LL))) << (((arr_11 [i_0] [i_1] [i_1] [i_0] [i_5]) - (1285422676))))) : (((1762436531191452389LL) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1])))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) << (((arr_4 [i_1] [i_0]) - (3199192947U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 2]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_9 [i_0])))))), (min((min((((/* implicit */unsigned long long int) var_5)), (arr_18 [i_0] [i_1] [i_2] [i_6] [i_7]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-15)) + (2147483647))) << (((arr_18 [i_0] [i_6] [i_0] [i_1] [i_0]) - (12779428029241322767ULL))))))))));
                                var_25 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_10 [i_6 + 1] [i_0] [i_6 + 1] [i_6 + 2])), (((unsigned long long int) -2451601816670772369LL)))), ((-(arr_7 [i_7] [9LL] [i_7] [i_6 + 2])))));
                                arr_27 [i_0] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */int) max((((unsigned long long int) arr_5 [i_1] [i_6 + 2])), (((/* implicit */unsigned long long int) ((long long int) ((short) var_10))))));
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_2])))) ? (((((/* implicit */_Bool) arr_12 [8] [i_6 - 1] [i_2] [i_6] [i_7])) ? (arr_10 [i_0] [i_2] [(_Bool)1] [(unsigned char)10]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_10 [i_0] [i_2] [(unsigned char)12] [i_7])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_37 [i_10] [i_10] [(signed char)16] [i_10] = ((/* implicit */unsigned char) arr_28 [i_11] [(short)11]);
                        arr_38 [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (18446744073709551615ULL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                {
                    var_27 = ((/* implicit */int) arr_35 [i_8] [i_13]);
                    arr_44 [i_12] [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_12] [i_12] [i_12]))));
                    arr_45 [i_13] [i_12] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_13 + 1] [i_13 + 2] [i_12] [i_13 + 3] [i_12])) ? (arr_12 [i_13 - 1] [i_12] [i_12] [i_13 + 4] [i_8]) : (arr_12 [i_13 + 4] [(_Bool)1] [i_12] [i_13 + 2] [i_12])));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) var_14);
    var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) (unsigned short)65535)) - (65529)))))) ? (((((/* implicit */_Bool) -1207747716)) ? (var_15) : (var_15))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ ((~(((/* implicit */int) var_12)))))))));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_9) : (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_15)))))))))));
}
