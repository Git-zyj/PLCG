/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142631
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
    var_17 = 690465181U;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1)))) ? (((long long int) -1)) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0 - 1] [i_2 + 2] [i_2 + 4]))))))))));
                        var_19 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_0] [0LL] [i_2 - 1] [(signed char)9])) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [10LL] [i_0]))) ^ (arr_2 [i_0])))) ? (var_16) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [(short)4] [(short)4] [i_2]) : (((/* implicit */int) (unsigned short)4214)))))) % (((/* implicit */int) (signed char)93))));
                        var_20 = ((/* implicit */long long int) 1);
                        var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_2] [(unsigned short)9]))))));
                    }
                    for (short i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (var_13))))))), ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) < (((/* implicit */int) arr_7 [i_0] [i_2]))))) : (((/* implicit */int) (short)-18570))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [(_Bool)1] [(signed char)2] [i_0]) != (var_8)))))))));
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)14547)), (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)18)), (18)))) ? (var_16) : (((/* implicit */int) var_14))))));
                        var_25 *= ((/* implicit */int) ((((/* implicit */_Bool) (short)-8916)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (-8251000694444862534LL)));
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (arr_1 [i_0])))) ? ((+(((/* implicit */int) arr_6 [(unsigned char)10] [(unsigned char)10] [i_5])))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (short)22335))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [(short)0])))) : ((+(((/* implicit */int) ((signed char) var_9)))))));
                        arr_14 [i_5] [4LL] [i_2] [(unsigned short)8] [(unsigned char)9] = ((/* implicit */short) min((-1), (((/* implicit */int) (signed char)15))));
                    }
                    arr_15 [(_Bool)1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned int) ((arr_3 [(_Bool)1] [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        arr_20 [(short)2] [(unsigned short)3] [i_2] [i_6] = ((/* implicit */short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [(short)4]) : (((/* implicit */unsigned int) var_16)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1629403867))))))))));
                        var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [5U] [i_2])) : (var_5))) : (((/* implicit */int) arr_4 [i_0 - 1]))))), (((-5127138771928522143LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))));
                        arr_21 [i_2] = ((/* implicit */short) var_11);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)25))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (var_8)))) : (var_9))))))));
                        var_31 = ((/* implicit */long long int) arr_23 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_8] [i_8 + 1])) ? (arr_3 [i_8 + 1] [i_8 + 2]) : (((/* implicit */unsigned int) var_15))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        for (long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_33 &= ((/* implicit */short) var_5);
                                arr_39 [i_8] [i_9] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) -5127138771928522143LL)) ? (-1) : (-20)))), (((/* implicit */unsigned int) (unsigned char)130))));
                                arr_40 [i_8] [(short)0] [i_11] = ((/* implicit */long long int) var_5);
                                var_34 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) min(((unsigned short)55639), (((/* implicit */unsigned short) (short)-5776))))) / (165174763)))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */long long int) -1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
    {
        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                {
                    arr_49 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_12)) + (2147483647))) << (((var_15) - (869042081))))) - (((/* implicit */int) (unsigned short)54021))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_44 [i_13] [i_13] [i_15])), (var_15)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)128)) : (27)))) : (((((/* implicit */_Bool) var_4)) ? (7583514917786456589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 7583514917786456589ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                arr_57 [(short)1] [3] [(short)21] [i_16] [(unsigned short)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((long long int) arr_45 [i_14] [i_15] [(unsigned char)14])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (-1087647666))))))) ? ((~((-(((/* implicit */int) arr_52 [i_13] [i_13] [4] [18] [i_13])))))) : (((((/* implicit */_Bool) min((19), (((/* implicit */int) (short)-5761))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) arr_42 [(_Bool)1] [(unsigned short)6]))))))));
                                var_36 -= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_55 [i_16 + 1] [i_16] [i_16] [i_16 - 2] [i_16] [i_16])) != (((/* implicit */int) (short)-9849))))), ((-(((/* implicit */int) arr_56 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
                                arr_58 [i_13] [i_14] [i_14] [i_16] [(unsigned short)2] = ((/* implicit */short) max((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) ((((/* implicit */int) (short)18570)) != (((/* implicit */int) (short)-9849)))))))), (((long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_47 [17LL] [17LL] [17LL] [17LL])))))));
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (var_13) : (-1)))))) : (-8774967558357726326LL)));
                                arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) var_4)) >> (((((/* implicit */_Bool) (signed char)0)) ? (-3209230094789343595LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (short)-13376)) ? (-2) : (((/* implicit */int) (short)-9849)))) : (((((((/* implicit */int) ((signed char) var_14))) + (2147483647))) << (((((((/* implicit */int) (short)-18570)) * (((/* implicit */int) var_6)))) - (85830540)))))));
}
