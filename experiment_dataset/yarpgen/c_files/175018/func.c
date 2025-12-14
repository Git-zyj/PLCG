/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175018
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_12 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)91))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (-(((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)1039)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) var_4))));
                var_14 -= ((/* implicit */short) (~(72894708U)));
            }
            arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 2] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_1])) : (((/* implicit */int) (short)-1039))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */short) var_5);
                        var_16 *= ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
            arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(var_9)));
        }
        arr_17 [i_0 + 2] [i_0] = ((/* implicit */signed char) var_8);
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_5] [i_5] [i_5]))) ? (((((var_9) ? (var_0) : (var_0))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1032))))))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */short) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), ((short)1032)))))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_34 [i_5] [i_5] [i_7] [i_5] [i_5] [i_6] [i_6] &= ((/* implicit */int) var_5);
                            var_17 -= ((/* implicit */signed char) (!(arr_27 [i_9] [i_6] [i_6] [i_6])));
                        }
                        arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_7 + 2] [i_7 + 1])))))));
                    }
                } 
            } 
            arr_36 [i_6] [i_6] &= ((/* implicit */unsigned char) max((((/* implicit */short) (signed char)64)), (arr_21 [i_5] [i_5])));
        }
        arr_37 [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)1027))))), (((((/* implicit */_Bool) 3524880607U)) ? (109441529U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            var_18 = min((min((arr_38 [i_10] [i_11]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) min((var_7), (((/* implicit */short) arr_15 [i_10] [i_10] [i_10] [i_10] [(_Bool)1] [i_10]))))));
            arr_42 [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) var_6));
            arr_43 [i_11] [i_11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_31 [i_10] [i_11] [i_10])))) ? (((/* implicit */int) ((((var_9) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10]))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned char)16))));
            arr_44 [(signed char)12] |= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_11] [i_10]))))), (max((arr_19 [i_10]), (arr_19 [i_11])))));
        }
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_25 [i_10] [i_10]))));
        var_20 -= max((((/* implicit */long long int) (-(((/* implicit */int) (short)32759))))), (((((/* implicit */_Bool) var_5)) ? ((+(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)32480))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                {
                    arr_50 [i_12] [i_10] = ((/* implicit */unsigned int) ((((_Bool) ((var_9) ? (((/* implicit */int) (short)12674)) : (((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) (((-(-9223372036854775800LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_10])) && (((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))))) : (((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((max((arr_56 [i_13] [i_13 + 1] [i_13] [i_14]), (((/* implicit */int) var_7)))) <= (max((((((/* implicit */_Bool) arr_25 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_55 [i_10] [i_10])))), (((/* implicit */int) var_10))))));
                                arr_58 [i_10] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (short)12674)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_3))))) : (arr_38 [i_13 + 1] [i_13 + 1])));
                            }
                        } 
                    } 
                    arr_59 [i_10] [i_13] [i_13] = max((((/* implicit */short) arr_39 [i_10])), (var_3));
                    arr_60 [i_10] [i_10] [i_10] [i_13 + 1] = ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((/* implicit */int) arr_4 [i_13 - 1])))) <= (((/* implicit */int) min((arr_18 [i_12]), (arr_18 [i_12])))));
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (unsigned short)36271)) : (((/* implicit */int) var_11))));
        /* LoopSeq 1 */
        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_16] [i_17]))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                for (short i_19 = 3; i_19 < 13; i_19 += 1) 
                {
                    for (long long int i_20 = 3; i_20 < 13; i_20 += 1) 
                    {
                        {
                            var_24 &= ((/* implicit */signed char) (~(((/* implicit */int) max((arr_47 [i_16] [i_16]), (var_7))))));
                            arr_74 [i_16] [i_16] [i_16] [i_16] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((arr_6 [i_18] [i_19] [i_18]), (var_2))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-1032)) - (((/* implicit */int) (_Bool)0)))) - (((((/* implicit */int) (short)1027)) - (((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_5))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_18] [i_19 - 2] [i_18]))) * (arr_69 [i_16] [i_17] [i_18] [i_18] [i_20] [i_20]))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_17] [i_17] [i_17])) % (((/* implicit */int) arr_52 [i_17] [i_17] [i_17]))));
            arr_75 [i_16] = ((/* implicit */short) ((((unsigned long long int) (~(((/* implicit */int) (unsigned short)1020))))) << (((((/* implicit */int) arr_30 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) - (24885)))));
        }
        arr_76 [i_16] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_47 [i_16] [i_16])))), ((-(((((/* implicit */_Bool) 1377896157U)) ? (((/* implicit */int) arr_2 [i_16] [i_16])) : (var_8)))))));
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_52 [8U] [i_16] [i_16])))) || (((/* implicit */_Bool) arr_21 [i_16] [i_16]))));
    }
    var_27 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_1))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))) ? ((+(min((var_2), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
