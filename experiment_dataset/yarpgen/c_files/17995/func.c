/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17995
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
    var_12 = ((/* implicit */long long int) min((((var_8) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((short) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_0 [i_0 + 2]))))));
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_15 |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_0 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34213)) >> (((/* implicit */int) var_8))))) <= (2561036742U))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) var_0)), (var_11))))))));
                        arr_12 [i_3] [i_3] [i_3] [i_0] = var_0;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_16 *= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_4 [i_4])))), (((/* implicit */int) arr_14 [i_4]))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_5 [i_4] [i_4] [i_4]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) arr_18 [i_5]);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_2)))))))))));
    }
    for (short i_6 = 1; i_6 < 23; i_6 += 3) 
    {
        arr_23 [(signed char)8] &= var_9;
        var_19 *= ((/* implicit */int) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_11))), (((/* implicit */unsigned int) var_2))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_7 = 4; i_7 < 22; i_7 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((long long int) arr_24 [i_7 - 4]));
            arr_26 [i_6] = ((/* implicit */signed char) ((var_2) ? (((/* implicit */int) arr_25 [i_6] [i_6] [i_7])) : (((/* implicit */int) var_8))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_21 = ((/* implicit */int) max((var_21), (arr_22 [(unsigned short)4])));
            arr_29 [i_6] [i_6] = var_4;
        }
        for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 23; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 1; i_11 < 24; i_11 += 4) 
                {
                    arr_38 [i_6] [i_9] [i_9] [i_10 - 2] [i_6] [i_9] &= var_8;
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_30 [i_6] [i_6] [i_11 + 1]))) ? (((/* implicit */int) ((unsigned char) max((var_10), (((/* implicit */unsigned int) arr_27 [i_6] [i_9] [i_11 - 1])))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), (arr_37 [i_11 + 1] [i_9] [i_11 + 1]))))));
                }
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    arr_42 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6] = ((/* implicit */short) var_7);
                    var_23 = ((/* implicit */_Bool) min((var_23), ((!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_24 [i_9]) : ((((!(((/* implicit */_Bool) arr_21 [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 + 1])) || (((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_6 - 1])))))))));
                    arr_43 [i_9] &= ((/* implicit */_Bool) max((((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))), (((/* implicit */unsigned short) var_2))));
                }
                var_25 *= ((/* implicit */_Bool) arr_21 [i_6]);
            }
            var_26 |= ((/* implicit */short) 0U);
            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_9] [i_9] [i_6]))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (4294967290U))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))) : ((+(((/* implicit */int) arr_28 [i_6 - 1] [i_9]))))));
        }
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        arr_46 [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_13] [i_13] [i_13] [i_13]))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
            {
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((arr_50 [i_14]) / (arr_50 [i_14]))))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_29 += ((/* implicit */short) var_8);
                        arr_55 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */_Bool) var_11);
                        arr_56 [i_13] [i_13] [i_13] [i_13] = (short)32766;
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */long long int) arr_25 [i_13] [i_13] [i_13]);
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ ((+(((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                {
                    arr_61 [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((7684838314704818365ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+(var_11))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        for (signed char i_20 = 3; i_20 < 24; i_20 += 1) 
                        {
                            {
                                var_33 ^= ((/* implicit */short) arr_27 [i_19] [i_19] [i_19]);
                                arr_67 [i_13] [i_17] [i_18] [i_18] [i_13] [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_65 [i_17] [i_17] [i_17] [i_20 + 1] [i_20])) ? (((/* implicit */int) arr_65 [i_18] [i_19] [i_19] [i_20 + 1] [i_19])) : (((/* implicit */int) arr_65 [i_13] [i_13] [i_18] [i_20 - 1] [i_20])))) % (((((/* implicit */_Bool) arr_65 [i_20] [i_20] [i_20 - 2] [i_20 + 1] [i_20 + 1])) ? (((/* implicit */int) arr_65 [i_17] [i_17] [i_20 - 1] [i_20 + 1] [i_20 - 3])) : (((/* implicit */int) arr_65 [i_19] [i_19] [i_20 - 1] [i_19] [i_19]))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */long long int) (!(var_1)));
                    arr_68 [i_13] [i_13] [i_17] [i_17] = ((/* implicit */_Bool) 10761905759004733248ULL);
                }
            } 
        } 
    }
    var_35 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_3))))))) != (((((((/* implicit */_Bool) var_0)) ? (var_11) : (var_10))) * (min((((/* implicit */unsigned int) var_9)), (var_5)))))));
}
