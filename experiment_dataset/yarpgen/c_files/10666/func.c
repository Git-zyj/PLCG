/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10666
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)255)), (9223372036854775807LL)));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_11) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_2 [i_1] [i_0]))))))) : (max((((/* implicit */unsigned int) var_14)), (var_4))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) min(((~(var_18))), (((unsigned long long int) arr_3 [i_0]))));
                            arr_19 [i_0] [(unsigned char)5] [i_0] [i_5] [i_6 - 1] = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) arr_16 [i_3])) ? (3083438173515739941ULL) : (((/* implicit */unsigned long long int) 2218052622U)))), (((/* implicit */unsigned long long int) 2076914697U))))));
                            arr_20 [i_0] [i_3] [i_0] [i_5] [i_0] |= ((/* implicit */unsigned int) 15301293724197909890ULL);
                        }
                    } 
                } 
                var_23 = (-(((((/* implicit */_Bool) ((signed char) arr_10 [i_3] [i_3] [i_0]))) ? (max((-9223372036854775799LL), (((/* implicit */long long int) (unsigned char)20)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
                var_24 = ((/* implicit */short) ((min((9575653087860666292ULL), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) arr_14 [i_0])) : (8388607ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_25 ^= ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_11 [i_4] [i_7] [i_8])) && (((/* implicit */_Bool) 2218052622U))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_3] [i_4 + 1] [i_0]) : (((/* implicit */unsigned int) -1051797992)))), (((/* implicit */unsigned int) ((5837246811847340424LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-21032))))))))) >= (12288427516572325512ULL)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_29 [i_0] [i_3] [i_4] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_11) || (((/* implicit */_Bool) (~(2076914674U))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4115891981379937265ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521)))))) ? (((arr_26 [i_0] [i_3] [i_3] [i_4 + 1] [i_0] [i_4 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6684665267369712559ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))));
                    }
                    var_28 &= ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_6))))));
                    arr_30 [i_9] [i_4 + 1] [i_3] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_3]);
                    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-16879)) / (((/* implicit */int) (short)-7804))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_19)));
                }
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    var_30 = ((/* implicit */long long int) (short)7578);
                    var_31 = ((/* implicit */unsigned int) ((unsigned char) (~(((var_5) & (var_5))))));
                    var_32 = ((/* implicit */unsigned char) ((short) var_0));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)220))))));
                        var_33 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)131));
                    }
                }
                /* vectorizable */
                for (unsigned int i_13 = 2; i_13 < 13; i_13 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) (-((~(4031464098U)))));
                    var_35 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 7367957940288216381LL))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 4; i_14 < 11; i_14 += 4) 
            {
                var_36 = ((/* implicit */unsigned int) (~(12)));
                arr_44 [i_0] [i_3] [i_14 - 3] [(short)6] |= ((/* implicit */long long int) ((unsigned int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3]));
            }
            /* LoopSeq 1 */
            for (int i_15 = 1; i_15 < 12; i_15 += 4) 
            {
                arr_47 [i_15] [i_0] [i_0] [i_0] = var_8;
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-7804))))), (((((/* implicit */_Bool) var_16)) ? (arr_27 [i_0] [i_15] [i_15]) : (0ULL))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_11)))))))));
                            arr_53 [i_17] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2076914674U)))))));
                            var_38 = ((/* implicit */unsigned char) (~((~(((1170521381) ^ (((/* implicit */int) arr_2 [i_16] [i_15]))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            var_39 = ((/* implicit */_Bool) ((unsigned char) arr_49 [i_18]));
            var_40 = max(((+(var_19))), (((/* implicit */unsigned int) ((_Bool) arr_42 [i_18]))));
        }
    }
    var_41 = ((/* implicit */unsigned char) var_3);
}
