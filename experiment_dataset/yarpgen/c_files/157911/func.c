/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157911
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)7001)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)112))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) var_9)))) - (176))))) < (((/* implicit */int) ((unsigned char) max((arr_2 [i_0]), (((/* implicit */unsigned char) (signed char)-115))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (signed char i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)17))));
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)121))));
                        var_21 = ((/* implicit */_Bool) (short)9804);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)27))));
            var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2]))));
            /* LoopSeq 4 */
            for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                arr_21 [i_6] [i_5] = ((/* implicit */int) var_8);
                var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) -2949451424839998080LL)))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_9 [i_6 - 2] [i_6] [i_6 + 3]))));
            }
            for (short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_26 &= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1]))));
                var_27 -= ((-8323988224160054153LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))));
                arr_25 [i_7] [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)174));
            }
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_5])))))));
                /* LoopSeq 4 */
                for (signed char i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    arr_31 [i_5] [i_9] = ((((/* implicit */_Bool) var_5)) ? (arr_29 [i_9 + 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))));
                    arr_32 [i_1] [i_5] [i_8] [i_9] = arr_5 [i_1 - 2];
                }
                for (unsigned char i_10 = 3; i_10 < 14; i_10 += 3) 
                {
                    var_29 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_1 - 2]))));
                    arr_36 [i_1] [i_5] [i_8] [i_10] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_27 [i_1] [i_5] [i_8] [i_10])) ? (-2122104683) : (((/* implicit */int) (unsigned char)192)))) + (2147483647))) << (((((arr_28 [i_5] [i_1 - 1] [i_8]) + (1515477329))) - (11)))));
                    var_30 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                }
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    var_31 = ((/* implicit */short) ((unsigned char) arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1]));
                    var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (8323988224160054157LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))));
                    arr_40 [i_8] [i_5] [i_8] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 35019340827913065LL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned char)253))));
                    arr_41 [i_1 - 1] [i_5] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1 - 2]))) : (((/* implicit */int) ((_Bool) arr_17 [i_11])))));
                    arr_42 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] = ((/* implicit */signed char) arr_22 [i_1] [i_1]);
                }
                for (unsigned char i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    var_33 = ((/* implicit */unsigned char) ((((-448354323891488833LL) + (9223372036854775807LL))) << (((16752420777789902975ULL) - (16752420777789902975ULL)))));
                    var_34 += ((/* implicit */unsigned short) arr_19 [i_8] [i_5] [i_8]);
                }
                arr_46 [i_1 + 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (arr_19 [i_1 - 2] [i_1 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (int i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)239))));
                            var_36 = (+(arr_48 [i_1 - 1] [i_1 + 1]));
                            arr_53 [i_1 - 2] [i_14] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_14 + 1]))));
                            arr_54 [i_5] [i_1] &= ((/* implicit */short) (+(var_10)));
                        }
                    } 
                } 
            }
            for (short i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                arr_57 [i_5] [i_15] = ((/* implicit */long long int) (-(((/* implicit */int) arr_45 [i_1] [i_1] [i_1 + 1] [i_1]))));
                arr_58 [i_1] [i_5] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 2]))));
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (unsigned char)183))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1 - 2] [i_5] [i_15])) ? (((1476530946) & (((/* implicit */int) arr_55 [i_1] [i_15] [i_15] [i_5])))) : (((/* implicit */int) var_0))));
                var_39 = ((/* implicit */unsigned short) var_3);
            }
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                arr_62 [i_1] [i_5] [i_5] [i_16] = ((/* implicit */int) (signed char)14);
                var_40 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)112))));
            }
        }
    }
    for (short i_17 = 0; i_17 < 13; i_17 += 2) 
    {
        var_41 = ((/* implicit */_Bool) (unsigned char)250);
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            for (unsigned char i_19 = 3; i_19 < 12; i_19 += 1) 
            {
                {
                    arr_71 [i_17] [i_17] |= ((/* implicit */signed char) (+((+(arr_28 [i_17] [i_18] [i_19 - 1])))));
                    var_42 = ((/* implicit */unsigned char) (short)14774);
                }
            } 
        } 
    }
    var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-11033))))) + ((-(var_4)))))));
}
