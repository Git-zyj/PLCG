/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110401
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
    var_11 = var_4;
    var_12 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)31)))) ? (var_0) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) (signed char)-2)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = (+(((((var_0) != (var_0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */long long int) 1004261246U)), (var_6))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]))), (arr_0 [i_0])))));
        var_14 *= ((/* implicit */_Bool) ((((_Bool) (((_Bool)1) ? (660186303) : (((/* implicit */int) arr_1 [i_0]))))) ? (var_6) : (((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_2)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((((/* implicit */_Bool) ((var_10) ? (2209074026094020270LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_4)) ? (3721351697U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                var_15 = ((/* implicit */unsigned int) (~(((int) (_Bool)1))));
                arr_9 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (var_6)))), (min((var_4), (arr_4 [i_0] [i_1])))))), (min((((/* implicit */unsigned long long int) arr_3 [i_2 + 1] [i_2 + 1] [i_1])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_2 + 1])))))));
                arr_10 [(unsigned short)2] [i_1] = arr_6 [i_0] [i_1] [i_2 - 1];
                var_16 -= ((/* implicit */short) ((((((((/* implicit */_Bool) (short)32)) && (((/* implicit */_Bool) 2347494734197673406ULL)))) && (((/* implicit */_Bool) ((long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -831768883357439918LL)) && (((/* implicit */_Bool) arr_0 [i_2 - 1]))))) : (var_9)));
            }
            for (short i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) ((arr_0 [8ULL]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    arr_17 [i_4] [i_1] [i_1] [(short)8] = ((unsigned short) (+(((/* implicit */int) arr_6 [i_3 - 3] [i_3 + 1] [i_3 - 3]))));
                    var_17 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_14 [i_1] [i_3 - 2] [i_3 - 2] [i_1])), (arr_13 [i_3 + 2] [i_4] [i_3 + 2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_0)))) ? (arr_13 [i_3 + 1] [i_3 - 2] [i_3 - 3]) : (((/* implicit */unsigned long long int) (~(573615600U))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_3 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [i_1]))) : (2873626172690431478LL)));
                        var_20 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (1009391333) : (((/* implicit */int) (signed char)31))));
                        var_22 = ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1]);
                    }
                    arr_20 [i_1] = ((/* implicit */short) 17765778809832369984ULL);
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_23 [i_1] [5ULL] [i_3 - 3] [i_6] = ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_1] [i_3 - 3] [i_6] [i_3]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                arr_24 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_2))))))) || (((/* implicit */_Bool) ((signed char) (_Bool)1))));
            }
            arr_25 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((int) (((_Bool)1) && (arr_21 [i_0] [i_1] [i_1] [i_0]))))));
        }
        arr_26 [i_0] [i_0] = ((((_Bool) min((((/* implicit */long long int) (short)30244)), (arr_14 [i_0] [i_0] [i_0] [(signed char)6])))) || (((/* implicit */_Bool) var_9)));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_24 = ((/* implicit */long long int) arr_28 [i_7]);
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned int) arr_27 [i_7] [i_7]));
    }
    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)175)) != (((/* implicit */int) arr_31 [i_8 + 3] [i_8])))) ? (((/* implicit */int) arr_32 [i_9 - 1] [i_8 + 1])) : ((-(var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2061584302080LL))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((unsigned short) var_4)))))) : (max((((/* implicit */long long int) (signed char)-50)), (arr_35 [i_8 + 1] [i_8] [i_9 - 1] [i_8 + 1])))));
                            arr_42 [i_8 + 3] [(_Bool)1] [(_Bool)1] [i_8] [(_Bool)1] [i_12] = ((/* implicit */_Bool) (+(arr_28 [i_9])));
                        }
                    } 
                } 
            } 
            var_26 |= ((unsigned long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_1))));
            arr_43 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_35 [i_8] [i_8] [i_9 + 2] [i_9]))))) ? ((+(((/* implicit */int) arr_31 [i_8 + 4] [i_8])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_9] [i_8 + 1]))))) : ((+(((/* implicit */int) arr_27 [i_8 + 3] [i_8 + 3]))))))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                arr_46 [i_8 + 1] [i_9] [i_8] [i_8 + 1] = ((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_9] [i_9 + 2] [i_8]);
                arr_47 [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? ((+(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13] [i_8 + 2]))) : (min((((/* implicit */long long int) 593393807)), ((~(arr_38 [i_8] [i_9] [i_9] [i_13] [i_13])))))));
            }
            /* LoopSeq 1 */
            for (short i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    for (short i_16 = 4; i_16 < 17; i_16 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) arr_31 [i_15] [i_8]);
                            var_28 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 0LL))))), (((((/* implicit */_Bool) arr_52 [i_9 + 3] [i_14] [i_15] [i_8])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3288))) : (144115185928372224LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))))));
                            arr_56 [i_8] [2ULL] [i_8] [i_14] [i_8] [i_15] [i_8] = ((long long int) max((((((/* implicit */_Bool) (short)4209)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29114)))), ((((_Bool)1) ? (-2092788792) : (var_9)))));
                        }
                    } 
                } 
                arr_57 [i_8] = ((/* implicit */_Bool) arr_38 [i_8] [i_9] [i_14] [(_Bool)1] [i_9]);
            }
        }
        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_28 [i_8])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : (((long long int) max((4702634339803256780LL), (((/* implicit */long long int) arr_51 [2LL] [i_8 + 2] [2LL] [2LL])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
    {
        for (long long int i_18 = 3; i_18 < 14; i_18 += 3) 
        {
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((911966219U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_17] [i_17])))))) | (max((9223372036854775807LL), (((/* implicit */long long int) ((unsigned int) var_2)))))));
                arr_62 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_5))), (((((/* implicit */_Bool) var_8)) ? (-707700991) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-28))))) ? (arr_33 [i_18 - 3] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_39 [i_17] [i_17] [i_18 + 1] [i_18 - 2])))))))) : (0ULL)));
                arr_63 [i_17] [i_18] [i_18 + 1] = min((((/* implicit */int) ((signed char) arr_44 [i_18 - 2] [i_18 - 1]))), (((((/* implicit */_Bool) arr_44 [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_44 [i_18 - 1] [i_18 - 1])) : (((/* implicit */int) var_3)))));
                var_31 = ((/* implicit */int) min((arr_48 [i_17] [i_18 - 1]), (min((arr_48 [i_17] [i_18 - 2]), (arr_48 [i_17] [i_18 - 1])))));
            }
        } 
    } 
}
