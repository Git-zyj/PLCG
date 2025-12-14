/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106818
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned int) var_14)), (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
    var_17 *= ((((/* implicit */_Bool) ((signed char) min((var_5), (((/* implicit */long long int) (_Bool)1)))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (0U))), (2989191699U))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_12))), (((/* implicit */unsigned int) ((_Bool) var_9))))));
    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_19 = ((/* implicit */int) max(((-(min((((/* implicit */unsigned int) (_Bool)1)), (var_13))))), (((unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((int) ((short) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)48)))) ? (((arr_3 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)-7589))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)61330), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (10760142850922036887ULL)))));
        arr_5 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_7 [i_1 + 2]) : (25U)));
        var_21 = ((/* implicit */long long int) arr_8 [i_1 + 3]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */unsigned short) (-((-(7686601222787514729ULL)))));
        arr_16 [i_2] = ((/* implicit */signed char) (unsigned char)83);
        arr_17 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) -1830336509142595712LL));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            arr_23 [i_3] = ((/* implicit */_Bool) var_11);
            arr_24 [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
            var_22 ^= ((/* implicit */unsigned short) 7686601222787514729ULL);
            arr_25 [i_4] = (_Bool)1;
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_23 = (_Bool)1;
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) ((arr_26 [i_5 + 1] [i_5 + 1]) / (arr_26 [i_5 + 1] [i_5 + 1])));
                            var_25 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                        }
                        arr_34 [i_7] [i_7] [i_6] [i_6] [i_5] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_9 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_38 [i_9] = ((/* implicit */signed char) arr_22 [i_3]);
            arr_39 [i_9] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) var_15)))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 4; i_11 < 16; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) 0LL);
                            arr_47 [i_3] = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                            arr_48 [i_3] [i_12] = ((/* implicit */short) var_10);
                            arr_49 [i_3] [i_9] [i_10] [i_3] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_22 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (short)-11136)))))) ? (((/* implicit */long long int) var_13)) : (0LL)));
                            var_27 ^= ((/* implicit */short) ((var_13) / (((/* implicit */unsigned int) -974296390))));
                        }
                    } 
                } 
                arr_50 [i_9] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))));
            }
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (short i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        {
                            var_28 = (i_13 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) (short)19954)) >> (((arr_51 [i_13] [i_14] [i_15 - 1]) - (1752191270674507658LL)))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)19954)) >> (((((arr_51 [i_13] [i_14] [i_15 - 1]) - (1752191270674507658LL))) - (2890937259313634003LL))))));
                            arr_58 [i_14] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned char) 10760142850922036882ULL);
                            arr_59 [i_15] [i_13] [i_13] [i_13] [i_3] = 7686601222787514729ULL;
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 16; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    var_29 = ((/* implicit */signed char) ((_Bool) (_Bool)0));
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16])) ? (8637683979207621355LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_16 + 1]))))))));
                }
                for (unsigned int i_19 = 1; i_19 < 13; i_19 += 3) 
                {
                    var_31 = ((/* implicit */unsigned long long int) arr_21 [i_17]);
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((unsigned int) 11687141887330503099ULL))));
                    arr_72 [i_3] [i_16] [i_3] [i_17] [i_16] = (_Bool)1;
                    var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_30 [i_16 - 1] [i_3] [i_17] [i_19 + 4] [i_17])) : (((/* implicit */int) arr_30 [i_16 - 1] [i_16] [i_17] [i_19 + 3] [i_19]))));
                }
                for (int i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((long long int) 4294967295U));
                    var_35 = ((/* implicit */long long int) ((7686601222787514732ULL) * (arr_46 [i_16 + 1] [i_16] [i_16] [i_16 - 1] [i_16 + 1])));
                    arr_75 [i_17] [i_17] [i_17] [i_16] = ((/* implicit */long long int) arr_55 [i_3] [i_16 - 1] [i_17] [i_20]);
                }
                for (unsigned char i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    var_36 = ((/* implicit */long long int) ((_Bool) (~(2478874007U))));
                    arr_78 [i_3] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1375929948274544496LL)) || (((/* implicit */_Bool) arr_63 [i_3] [i_17]))));
                    arr_79 [i_3] [i_16] [i_16] [i_21] [i_21] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_16] [i_16 - 1])) ? (((/* implicit */unsigned long long int) 1506051172U)) : (17592186044415ULL)));
                }
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_61 [i_17] [i_16 + 1] [i_17])) : (((/* implicit */int) arr_12 [i_17] [i_17])))))));
            }
            arr_80 [i_3] [i_16] [i_16] = ((/* implicit */_Bool) (+(arr_32 [i_16] [i_16] [i_16] [i_3] [i_3] [i_16] [i_3])));
            arr_81 [i_16] [i_3] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (arr_29 [i_3] [i_3] [i_16 - 1] [i_16 + 1]) : (arr_29 [i_3] [i_3] [i_16 + 1] [i_16 - 1])));
            arr_82 [i_16] = ((((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_16] [i_16] [i_3] [i_3] [i_3])) % (((/* implicit */int) arr_12 [i_3] [i_16]))))) >= ((((_Bool)1) ? (((/* implicit */long long int) var_11)) : (var_2))));
        }
    }
}
