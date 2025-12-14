/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184158
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
    var_15 |= ((int) (+(((/* implicit */int) ((_Bool) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [11ULL] [i_0 + 1])) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [7ULL] [i_0] = ((/* implicit */_Bool) var_14);
                        var_17 *= ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))) : (0ULL))))));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2] [i_0 + 2] [i_0]))));
                        arr_15 [i_4] [i_0] [i_0] [i_4] [8U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 4294967295U))))));
                        var_21 ^= ((((18446744073709551615ULL) != (1ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_3 [(unsigned char)8]))))) : (arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_0]));
                        arr_20 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) arr_23 [i_6] [i_3] [i_3] [i_2] [i_1 + 1] [15]);
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_11 [i_0 - 1] [i_0] [13ULL] [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
                    }
                    var_23 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                    var_24 += ((/* implicit */short) var_1);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_25 = ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [(signed char)20] [8] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_8])) : ((+(((/* implicit */int) var_13)))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) (unsigned short)32375)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((unsigned char) (signed char)60));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_25 [i_0 - 1])) & (arr_13 [i_9] [i_7] [(_Bool)1] [i_1] [i_0]))))));
                    }
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_29 |= ((/* implicit */int) ((((((/* implicit */int) (unsigned short)16382)) > (arr_12 [i_10] [i_7] [i_2] [i_1] [i_1] [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20567))) : (var_12)));
                        arr_33 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_0]));
                        var_30 ^= ((/* implicit */int) (+(((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15883)))))));
                        var_31 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0]))));
                    }
                    for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_36 [i_0 + 2] [i_1 - 3] [i_0] [i_7] [i_0 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                        arr_37 [i_0] [i_1] [i_2] [i_0] [0U] = ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0]);
                    }
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_1] [i_1] [(unsigned short)2] [i_1] [i_2])))) ^ (arr_29 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) ((((unsigned long long int) arr_29 [i_12] [i_7] [i_2] [12U] [i_0] [i_0])) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_9 [i_2])))))));
                        var_34 += ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)44969)))))) : (var_0)));
                        var_35 *= ((/* implicit */short) 1345170098);
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_36 = (~((~(((/* implicit */int) var_7)))));
                        var_37 = ((/* implicit */int) arr_1 [i_0 + 1] [i_0]);
                        var_38 = ((/* implicit */int) max((var_38), (((((((/* implicit */int) var_13)) + (2147483647))) << (((var_12) - (516089962U)))))));
                        var_39 ^= ((/* implicit */unsigned int) (short)(-32767 - 1));
                        var_40 = ((/* implicit */short) ((arr_31 [i_1 - 2] [i_0 + 2] [i_0] [i_0] [7] [i_0]) & (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                }
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    var_41 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_10))))));
                    var_42 = ((/* implicit */int) (unsigned short)20567);
                    var_43 = ((/* implicit */unsigned short) var_5);
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    arr_48 [i_0] [i_1] [i_0] [i_15] [i_15] [(signed char)5] = arr_28 [i_0 + 2] [i_2];
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        var_44 ^= ((/* implicit */unsigned int) ((_Bool) (signed char)0));
                        arr_52 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_14)))));
                    }
                }
            }
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_0] [i_1 - 2] [i_1 - 3] [i_1])) ? (((/* implicit */int) arr_21 [i_1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 3])) : (1384773725)));
        }
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_17]) : (((unsigned long long int) arr_35 [i_17] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
            {
                for (int i_19 = 1; i_19 < 21; i_19 += 3) 
                {
                    {
                        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
                        arr_63 [i_0] [i_18] [i_17] [i_0] = ((unsigned short) ((unsigned int) (short)-15884));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 1; i_21 < 20; i_21 += 2) 
                {
                    {
                        var_48 *= ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
                        var_49 = var_6;
                        arr_71 [(signed char)8] [(signed char)8] [(signed char)8] [i_0] [i_21] = ((/* implicit */_Bool) (+(arr_19 [i_0] [i_0 - 1] [i_0])));
                    }
                } 
            } 
        }
    }
}
