/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18053
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (unsigned short)63359);
                        arr_9 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) var_6);
                        arr_10 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                    }
                    for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            arr_15 [i_5] = ((/* implicit */unsigned short) var_10);
                            arr_16 [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) var_9);
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_2] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_1] [i_4 - 1] [i_2] [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) / (var_0)))));
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46145))));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_9)))));
                            arr_21 [i_0] [10ULL] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)226))));
                            arr_22 [10ULL] [i_4] [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (var_0) : (0ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2 + 1] [i_2 - 1] [i_0])))));
                        }
                        arr_23 [i_0] = (-(((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_7 [i_1] [i_1 - 1] [(unsigned short)20] [i_1 - 1])))));
                    }
                    var_19 = ((/* implicit */unsigned char) (-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] [(unsigned short)18])));
                    var_20 = ((/* implicit */long long int) (unsigned short)46121);
                }
            } 
        } 
        var_21 ^= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) (unsigned short)2419))), (max((((/* implicit */int) (unsigned short)65535)), ((-(((/* implicit */int) (unsigned short)19391))))))));
        var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_6 [i_0] [16LL] [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))));
        arr_24 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_14 [(unsigned short)17] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) (((+(-224216577))) - (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)46127)))))));
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 87860214))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) (unsigned short)8285))), ((+(arr_30 [i_8] [i_8])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            var_25 = min((-87860215), (((/* implicit */int) (unsigned char)189)));
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_5 [i_10 + 2]))))));
                arr_36 [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) : (((unsigned long long int) ((65535ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_27 = ((/* implicit */unsigned long long int) 937267944486265150LL);
            }
        }
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)8284))), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))))) : (((long long int) 18446744073709486080ULL))));
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)0)) ? (65536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) / ((-(arr_4 [i_11])))))) ? (((((/* implicit */_Bool) ((arr_27 [i_11]) >> (((((/* implicit */int) var_12)) - (13871)))))) ? (((long long int) arr_26 [i_11] [i_12])) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_11] [8U] [19LL] [i_12 + 1]))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) arr_42 [i_11] [i_12])))) + (2147483647))) << (((((18446744073709486101ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (97601820495817386ULL))))))));
            var_30 += var_0;
        }
        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))), (((((((/* implicit */unsigned long long int) -1468997775)) & (var_0))) & ((~(var_10)))))));
            var_32 = ((/* implicit */unsigned char) (_Bool)0);
            var_33 &= ((/* implicit */int) var_13);
            var_34 = ((/* implicit */unsigned char) max((((unsigned long long int) max((10834011257858355558ULL), (18446744073709486080ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57260)) << (((18155483587791966449ULL) - (18155483587791966439ULL))))))));
            var_35 *= ((/* implicit */unsigned int) (+(max((((unsigned long long int) 65530ULL)), (((/* implicit */unsigned long long int) arr_5 [i_13]))))));
        }
        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 3) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((short) (unsigned short)24765));
                arr_52 [i_14] = (+(((arr_11 [i_15 + 2] [i_15] [i_15 + 3] [i_15 + 3]) / (((/* implicit */unsigned long long int) 5729849037050926225LL)))));
            }
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32362)) ? (((15053218794520122130ULL) - (((/* implicit */unsigned long long int) 87860214)))) : (((arr_46 [i_14] [i_14] [9U]) - (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22501)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18341))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) * (18446744073709486081ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((arr_44 [i_14] [i_14] [i_14]) - (65551ULL)))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(144115188075855871ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)77)) ^ (((/* implicit */int) arr_39 [i_14] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))) : (min((min((arr_26 [(unsigned short)5] [i_11]), (((/* implicit */unsigned long long int) 886012129)))), (max((((/* implicit */unsigned long long int) 199518515)), (var_10)))))));
            arr_53 [i_14] = ((10098772317519994580ULL) | (((((/* implicit */_Bool) (unsigned short)54287)) ? (arr_46 [(unsigned char)1] [i_11] [i_14]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)57252)), (4630682111115321478LL)))))));
            arr_54 [i_14] [i_14] = (((-(65551ULL))) >= ((~(arr_31 [i_11] [i_11]))));
        }
        for (unsigned char i_16 = 1; i_16 < 10; i_16 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) var_8))));
            arr_59 [i_11] [i_16] = (((-(arr_11 [i_16] [i_11] [i_11] [i_11]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-22935)) < (((/* implicit */int) arr_6 [i_16 + 2] [i_16] [i_16 + 2] [i_16 + 2])))))));
        }
        arr_60 [i_11] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) var_12)));
    }
    var_40 = (!(((((/* implicit */_Bool) min((var_9), (var_8)))) || (((/* implicit */_Bool) var_13)))));
}
