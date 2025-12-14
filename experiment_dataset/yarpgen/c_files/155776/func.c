/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155776
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
    var_14 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((((/* implicit */long long int) var_5)) & (var_7)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_3))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = var_10;
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_2] [i_1] [i_2])) ? (((long long int) var_7)) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_1] [i_2])))))));
                            var_17 = ((/* implicit */signed char) 2146959360U);
                        }
                    } 
                } 
                arr_16 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((2148007935U) / (((arr_7 [i_0 - 1] [i_2] [i_2] [i_0]) - (var_13)))));
                var_18 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0 - 1])))));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1] [i_0 + 1])) - (13))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)158)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_0 - 2] [i_0]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_9)))) - (1858361690))))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_0)) - (55)))))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_0))))) ? (var_12) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_6] [i_0] [0])))))));
            var_22 -= ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0 - 2])) >= (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_6] [i_6] [i_6])))))) : (((/* implicit */int) var_3))));
            arr_21 [6LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0] [10U] [i_0])) ? (((/* implicit */int) max((arr_10 [i_0 - 2] [i_0] [10U] [i_0]), (arr_10 [i_0 + 1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((((/* implicit */_Bool) max((8U), (((/* implicit */unsigned int) (signed char)-32))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_6] [i_0] [i_6]), (((/* implicit */unsigned short) (short)-28381)))))) : ((+(var_11)))))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) arr_20 [i_0 - 2])) : (((/* implicit */int) var_3)))) : (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)244))))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_8))));
        }
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_2)))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    var_26 *= ((/* implicit */unsigned char) arr_15 [(unsigned short)12] [i_9] [i_9] [i_10] [i_10]);
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) arr_3 [i_9])), (var_13)))))) || (((/* implicit */_Bool) max((arr_12 [i_9]), (((/* implicit */unsigned short) var_9)))))));
                    var_28 = ((/* implicit */unsigned char) var_6);
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_29 [i_12 - 1] [i_12 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11]))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) + (var_11))))))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) max((arr_30 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */short) var_3))))) == (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_39 [i_8] &= ((/* implicit */unsigned short) (((+(var_11))) & (((((/* implicit */_Bool) arr_1 [i_8] [(unsigned short)19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_8]))) : (var_11)))));
    }
    var_31 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
}
