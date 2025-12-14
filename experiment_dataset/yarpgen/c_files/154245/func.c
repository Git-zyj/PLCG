/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154245
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), ((-(var_0))))))));
                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_7)))) ^ (((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_22 = var_3;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_2] [i_2])) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_2] [(unsigned short)11])) : (((/* implicit */int) arr_2 [i_2] [i_2 - 1]))))));
        arr_9 [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_2]));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [(short)14] [8ULL])) != (((/* implicit */int) (short)10570)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((+(((/* implicit */int) arr_4 [i_2] [i_2]))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) arr_3 [(short)8] [i_4]))) : (((/* implicit */int) arr_6 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) ((short) var_1));
                                arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_6 + 1]))) >= (var_18)));
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)4808)) : (((/* implicit */int) (unsigned short)19867)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19127)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            arr_22 [11ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_2] [i_7] [i_2 - 1] [i_7])) : (((/* implicit */int) var_5))));
            arr_23 [i_7] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) var_0));
        }
        for (short i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        {
                            var_29 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7948))))) != (((unsigned long long int) var_15))));
                            var_30 |= ((/* implicit */unsigned long long int) ((((6411154117292737302ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11] [i_10] [i_9] [(short)2]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-13070)) : (((/* implicit */int) arr_4 [(short)21] [i_8])))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)7405))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2 + 1] [i_8] [i_2]))) : (var_1)));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned short)8] [i_2] [i_2 + 2] [(unsigned char)11])) >> (((((/* implicit */int) var_6)) - (24141)))))) ? (((unsigned long long int) var_9)) : (7336541595531359193ULL)));
        }
        arr_35 [i_2] [(short)12] = ((/* implicit */short) ((((((/* implicit */_Bool) 33546240ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) : (3108868463015903017ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)5654)))))));
    }
    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        arr_39 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) arr_3 [i_12] [i_12])) * (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)-26923))))))));
        var_33 = ((/* implicit */short) min((((((((/* implicit */int) (short)21941)) != (((/* implicit */int) (unsigned short)57239)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-30795)) && (((/* implicit */_Bool) (unsigned char)149))))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_7))));
        arr_40 [(unsigned char)5] = ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)59566)) ? (((/* implicit */int) (short)-11627)) : (((/* implicit */int) (short)10443))))))) | (var_18));
        arr_41 [(short)8] = ((/* implicit */short) min((min(((unsigned short)16693), (((/* implicit */unsigned short) var_15)))), (((/* implicit */unsigned short) var_17))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((min(((short)4779), ((short)-10672))), (var_5)))) / (((/* implicit */int) var_4))));
        var_35 = ((/* implicit */unsigned short) (((+(7808897677466284461ULL))) << (((((/* implicit */int) ((unsigned short) arr_27 [i_13] [i_13] [i_13]))) - (56837)))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
    {
        arr_46 [i_14 - 2] [13ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14 + 1]))) : (arr_36 [i_14 - 1] [i_14 - 2])));
        arr_47 [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(var_1))) : (var_0)));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 2; i_18 < 14; i_18 += 2) 
                        {
                            {
                                arr_59 [i_14 - 3] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10870)) ? (((/* implicit */int) arr_38 [i_18 + 1] [i_14 + 1])) : (((/* implicit */int) var_14))));
                                var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_53 [i_14 - 2] [i_15] [(short)7]))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-14722))));
                }
            } 
        } 
        arr_60 [1ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)6954)))));
    }
}
