/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129113
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))), (16178507925881458041ULL)));
        var_12 = ((/* implicit */unsigned short) var_5);
        var_13 &= ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) -2133116764550501744LL))))) ? (((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (8030928744427423199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))));
        arr_6 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) -2133116764550501761LL)) ? (-2133116764550501744LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12813)))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_5 [i_1]))));
    }
    /* LoopSeq 4 */
    for (short i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_16 |= ((/* implicit */unsigned long long int) var_9);
        var_17 += ((/* implicit */unsigned short) max((arr_8 [i_2 + 3] [i_2 + 1]), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_8 [i_2 - 1] [i_2 + 2])))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 8; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned char) 16178507925881458027ULL));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3 + 1])))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_3])))) >= (16178507925881458041ULL))))));
        arr_12 [i_3] = ((/* implicit */short) -1);
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_4] [i_3])) != (((/* implicit */int) arr_10 [i_3])))) ? (((/* implicit */int) arr_7 [i_3])) : ((~(((/* implicit */int) (unsigned short)21226))))));
                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_3])))) ? (arr_17 [i_3] [i_4] [7LL]) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (16178507925881458015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3 - 2])))))));
                var_23 ^= ((/* implicit */unsigned short) var_2);
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_24 |= ((/* implicit */long long int) var_0);
                            var_25 = ((/* implicit */unsigned short) var_6);
                            arr_25 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_5] [i_7] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 1] [i_5] [i_6])))) : (arr_9 [i_3])));
                        }
                    } 
                } 
                arr_26 [(signed char)0] [i_4] [i_5] [i_5] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) arr_13 [i_4] [i_3]))) : (((/* implicit */int) (_Bool)1)));
            }
            var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (arr_11 [i_3 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_3 - 1] [i_3 - 1])))));
            var_27 *= ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)44305)) ^ (((/* implicit */int) (unsigned short)54871))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1192519306)) ? (((/* implicit */int) ((unsigned short) arr_22 [i_3] [i_4] [i_4]))) : (((((/* implicit */_Bool) -2133116764550501758LL)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)10646))))));
        }
        for (int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            var_29 = ((/* implicit */long long int) max((var_29), (((-2133116764550501742LL) & (((/* implicit */long long int) 21))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) arr_1 [i_9])) ? (arr_17 [i_3] [i_8] [i_10 + 1]) : (var_1)))));
                            var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) (unsigned short)36406))))));
                            var_32 = ((/* implicit */short) var_8);
                        }
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_33 = (-(((/* implicit */int) (unsigned short)65535)));
                            var_34 += ((/* implicit */signed char) arr_18 [i_10 - 1] [i_9] [i_8]);
                            var_35 -= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                        }
                        for (short i_13 = 1; i_13 < 10; i_13 += 2) 
                        {
                            arr_45 [i_9] [i_13] &= var_8;
                            var_36 = ((/* implicit */short) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_19 [i_3 + 3] [i_3 + 3]))));
                            var_37 += ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_14 [i_13 - 1] [i_10 + 1]))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */short) arr_28 [i_8 - 1] [i_8 - 1] [i_14]);
                            arr_48 [i_10] [(unsigned char)3] = ((/* implicit */_Bool) ((arr_28 [i_3 - 3] [i_8 + 1] [i_8 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_3 + 2] [i_10] [i_14])))));
                        }
                        var_39 = arr_41 [i_3] [i_3 - 1] [i_3] [i_3] [i_3];
                        var_40 = ((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_3 - 4] [i_3 - 4]));
                        var_41 = ((/* implicit */int) max((var_41), (((int) var_10))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            arr_53 [i_15] [i_15] = ((/* implicit */unsigned char) ((arr_7 [i_3 - 4]) ? (((/* implicit */int) arr_42 [i_15] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_6))));
            var_42 = arr_51 [i_3] [i_3];
        }
    }
    for (short i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_43 = ((/* implicit */_Bool) arr_54 [i_16]);
        var_44 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_54 [i_16]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) max((arr_54 [i_16]), (arr_55 [i_16]))))));
        var_45 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)12802))))) ? (((/* implicit */int) arr_54 [i_16])) : (((/* implicit */int) var_0)))));
        arr_56 [i_16] [i_16] = ((unsigned short) (signed char)127);
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
    {
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                {
                    var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_18] [i_19])) ? (arr_62 [(unsigned char)7] [(unsigned short)4] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((short) (unsigned short)33613)))));
                }
            } 
        } 
        var_48 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [(unsigned short)1] [i_17]))) + (var_1))));
    }
    var_49 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) * (((/* implicit */int) var_5)))), (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_1) - (13341090227339116197ULL)))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
    var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) var_9))));
}
