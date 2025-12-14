/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185867
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */unsigned char) max(((unsigned short)7253), ((unsigned short)58282)));
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (unsigned short)58273)))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) : ((((_Bool)1) ? (var_8) : ((+(var_0)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (int i_3 = 4; i_3 < 8; i_3 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_4)))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_14))))));
                    var_20 = ((/* implicit */signed char) (~(2430814624435966905LL)));
                }
            } 
        } 
        var_21 *= ((/* implicit */signed char) (-(var_0)));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_2) : (var_2)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_11 [(unsigned short)8] |= ((/* implicit */unsigned char) ((unsigned short) var_2));
        arr_12 [i_4] [i_4] = ((/* implicit */int) max((var_13), (((/* implicit */long long int) ((unsigned char) var_2)))));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            var_23 = ((/* implicit */int) var_7);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_16 [i_6 - 2] [i_5 - 1]))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_22 [i_5] [i_7] [i_6] [i_6 + 2] [i_5] = ((/* implicit */unsigned short) (~((+(arr_19 [i_5] [(unsigned char)4])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            arr_25 [i_5] = ((/* implicit */unsigned char) ((((-2430814624435966905LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5] [i_5 - 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_7]))))) : ((-(var_0)))));
                            var_25 ^= ((/* implicit */unsigned char) var_8);
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37077)))))));
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) (unsigned short)1))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            var_28 -= ((/* implicit */unsigned char) -2430814624435966905LL);
                            var_29 = ((/* implicit */long long int) ((unsigned char) arr_18 [i_5 + 1] [i_5] [i_5 + 1]));
                        }
                        arr_28 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_6] [10LL] [i_6 + 2]))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65530))) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned char)4] [i_6 + 2] [i_7] [i_8] [(unsigned char)15]))) <= (1ULL)))))))));
                    }
                } 
            } 
            arr_29 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (signed char)61);
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)28459))));
        }
        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) != (((/* implicit */int) var_14)))) ? ((-(((/* implicit */int) arr_30 [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_30 [i_5]))))));
            arr_33 [i_5] [i_11] = ((/* implicit */_Bool) min((((var_15) ? (((((/* implicit */_Bool) arr_31 [i_5 + 2] [i_11] [i_5 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65510)))) : (((/* implicit */int) min((arr_15 [15ULL]), (((/* implicit */unsigned short) var_6))))))), ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_5] [(unsigned char)12] [i_5 - 1] [i_11] [i_11] [i_11] [i_11]))))));
            var_33 *= ((/* implicit */unsigned short) var_2);
        }
        arr_34 [i_5] = ((/* implicit */unsigned char) var_5);
    }
    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        arr_37 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_35 [i_12]);
        /* LoopSeq 2 */
        for (long long int i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                arr_42 [i_12] [i_12] [i_13] = ((/* implicit */long long int) ((arr_21 [i_12] [i_13] [i_13] [i_13 - 1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [i_12] [i_13] [i_13 - 1] [i_13 + 1]))));
                arr_43 [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned char) (~(var_10))));
            }
            arr_44 [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) ((unsigned short) var_6))) | (((/* implicit */int) ((unsigned char) var_0))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), (var_9)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) min(((unsigned char)0), ((unsigned char)0))))))));
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (((+(((/* implicit */int) arr_20 [i_13 + 1])))) / (((/* implicit */int) arr_20 [i_13 - 1])))))));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) var_10);
            arr_48 [i_12] [i_15] = ((/* implicit */unsigned long long int) var_10);
            /* LoopNest 2 */
            for (unsigned short i_16 = 1; i_16 < 14; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    {
                        arr_54 [i_15] [i_12] [i_15] [i_15] [i_12] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_16 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)249)))))));
                        arr_55 [i_12] [i_17] [i_16] [i_17] = ((/* implicit */int) arr_36 [i_16 + 1]);
                        arr_56 [i_17] [i_17] = ((/* implicit */unsigned char) var_2);
                    }
                } 
            } 
            arr_57 [i_12] [i_12] = arr_24 [i_12] [i_12] [i_12] [i_15] [i_15];
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_12] [i_12])))))));
        }
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                {
                    var_37 *= ((/* implicit */unsigned long long int) arr_52 [i_19] [i_18] [i_12] [i_12]);
                    var_38 = ((unsigned short) max((arr_38 [i_12]), (((/* implicit */unsigned short) var_12))));
                    arr_64 [i_12] [i_18] [i_12] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (min(((+(var_13))), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_39 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (min((((/* implicit */int) arr_45 [i_12])), (var_1)))))), (var_0)));
                }
            } 
        } 
        arr_65 [i_12] = ((/* implicit */signed char) (unsigned char)99);
    }
}
