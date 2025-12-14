/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130120
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
    var_12 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (min((((/* implicit */unsigned int) var_7)), (var_9))))), (max((((3138029278U) + (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_11)), (var_4))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)0)), (-1806024799)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (14680064U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_4))) - (var_8)))) : ((-(max((((/* implicit */unsigned long long int) var_3)), (var_10)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) var_3);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            var_14 |= ((/* implicit */short) 1731209860U);
                            var_15 = ((/* implicit */unsigned short) max((var_15), (arr_1 [i_0] [i_3])));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 959725827U))));
                            var_16 = ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1] [i_4 - 4]);
                            var_17 = ((/* implicit */int) ((long long int) ((1128306580635819398ULL) ^ (((/* implicit */unsigned long long int) 3211798821U)))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 15; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [4ULL] [i_1] [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_5])) <= (((((/* implicit */_Bool) arr_7 [i_0] [15LL] [15LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_2] [i_3]))))));
                            arr_19 [i_0] [i_0] [i_5] [11LL] [0LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) & (arr_11 [i_0] [i_1 - 1] [i_0 - 1] [i_1 - 1] [i_0] [i_2 - 1])));
                            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_8)))) ? (((/* implicit */int) ((arr_14 [i_0] [(unsigned short)17] [i_2] [(_Bool)1] [i_5 + 4] [i_5]) || (((/* implicit */_Bool) arr_8 [4U] [12ULL] [i_3]))))) : (((/* implicit */int) arr_2 [i_5]))));
                            var_20 ^= ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) arr_21 [i_0] [i_1] [17ULL] [i_7]);
                                arr_24 [i_7] [(_Bool)1] [i_0] [(_Bool)1] [i_0] &= ((/* implicit */signed char) ((unsigned int) arr_20 [i_2] [i_1] [i_0 - 1] [i_0 - 1]));
                                var_22 &= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) >= (((/* implicit */int) ((unsigned char) (unsigned char)179)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned int) ((short) arr_21 [i_0] [i_0 - 3] [i_0] [i_0]));
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (17U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                    arr_33 [i_8] = ((/* implicit */unsigned char) ((_Bool) (signed char)27));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                {
                    arr_42 [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_29 [i_12 + 2] [i_12 + 1] [i_12 + 1])))))) % (max((arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 2]), (arr_29 [i_12 - 1] [i_12 + 1] [i_12 + 1])))));
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_24 += ((/* implicit */short) max(((+(((/* implicit */int) arr_14 [(short)7] [i_11] [i_13 - 1] [i_13] [16ULL] [i_12])))), (((((/* implicit */int) (unsigned char)159)) & (((/* implicit */int) arr_16 [(short)6] [i_12 - 1] [i_13 - 1] [i_11] [i_12 - 1] [i_10]))))));
                        var_25 = ((/* implicit */short) max((((unsigned short) -827899417)), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) arr_5 [(short)3] [16U])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_30 [(_Bool)1]);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_47 [i_11] [i_11] [i_12 + 2] [i_12 + 1]))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 13; i_15 += 3) 
                    {
                        var_28 = ((unsigned long long int) (+(arr_37 [i_10])));
                        var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (unsigned char)14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14291)))))));
                        var_30 &= ((/* implicit */int) var_0);
                        var_31 = var_0;
                    }
                    for (int i_16 = 4; i_16 < 13; i_16 += 3) 
                    {
                        arr_54 [i_16] [i_16] [i_12] [i_16] = ((/* implicit */short) min((arr_23 [i_10] [i_16] [i_12 - 1] [15LL] [i_12 - 1]), (((/* implicit */unsigned long long int) min((((long long int) (unsigned short)11936)), (min((((/* implicit */long long int) arr_44 [i_12] [i_16] [i_12 + 2] [i_16] [i_11] [i_12])), (var_8))))))));
                        arr_55 [(unsigned short)0] [i_11] [i_12 + 1] [i_16] [i_12 + 1] = ((/* implicit */unsigned char) ((_Bool) min((max((((/* implicit */unsigned long long int) (short)29339)), (var_10))), (((/* implicit */unsigned long long int) ((short) (_Bool)0))))));
                        arr_56 [i_10] [i_10] [i_10] [(unsigned char)10] [i_16] [i_16] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2966994655U))));
                    }
                }
            } 
        } 
        var_32 -= ((/* implicit */unsigned long long int) (+(max((var_9), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_10] [3U] [(_Bool)1] [i_10])))))))));
    }
    var_33 = ((/* implicit */long long int) var_5);
}
