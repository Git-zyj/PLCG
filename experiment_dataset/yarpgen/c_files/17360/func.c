/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17360
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_12), (((/* implicit */short) var_8))))) : (((/* implicit */int) max((var_12), (((/* implicit */short) var_1)))))))));
    var_14 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_12))));
        arr_3 [i_0 - 1] [i_0 - 2] = ((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) var_1)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((var_11) - (187260519468161219ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        for (short i_5 = 2; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15804)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)-46))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-24391)))))));
                                arr_16 [i_1] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                var_22 -= ((/* implicit */short) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                arr_22 [i_7] [i_6] [i_6] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (var_11) : (var_0)));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            arr_27 [i_1 - 1] [i_1] [i_9] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                arr_28 [i_1] [i_6] [i_1] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_11)));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_26 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                    arr_31 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_8))));
                }
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) (signed char)45)) == (((/* implicit */int) (unsigned char)1)))))));
                    var_28 = ((/* implicit */unsigned char) (+(var_2)));
                    arr_35 [i_1] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)));
                }
            }
            var_29 = ((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-(((/* implicit */int) (short)-18642)))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_9))));
                    var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_10))))));
                }
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_33 |= ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
            var_34 = ((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        }
        for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            var_35 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-24391)) + (2147483647))) << (((((/* implicit */int) (unsigned char)169)) - (169)))));
            var_36 = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_2)));
            arr_46 [i_1] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
            var_38 = ((/* implicit */int) var_4);
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                {
                    var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62486))) : (4357645140820856237LL)))) / (var_0)));
                    var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                    arr_53 [i_1 - 4] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_4)) - (83)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_18 = 4; i_18 < 19; i_18 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))));
        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 2; i_19 < 20; i_19 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_20 = 4; i_20 < 20; i_20 += 1) 
            {
                arr_64 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_0)))));
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
                var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))));
            }
            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        }
        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            arr_67 [i_18 - 3] [i_18] = ((/* implicit */short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_6)) - (218)))));
            arr_68 [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (short)24391)) ? (-1518150705) : (-2022327885)));
        }
    }
}
