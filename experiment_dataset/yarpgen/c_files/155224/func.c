/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155224
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */short) var_19)), (var_12)))))) >= ((((+(((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((var_15) == (((/* implicit */unsigned int) var_6))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((2520989799932234053ULL) | (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(unsigned short)2]))));
        arr_4 [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) (-((~(arr_0 [i_0])))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_19))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)3715))))) - (((/* implicit */int) ((var_16) || (((/* implicit */_Bool) var_19)))))));
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_4] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4 - 1] [i_4]))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            var_24 ^= ((/* implicit */unsigned char) var_18);
            var_25 = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) var_8)) : (arr_12 [i_0] [i_0] [i_1 + 1] [i_1])))));
        }
        for (unsigned int i_5 = 3; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_21 [i_0] [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-15795))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_26 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_5 + 1] [i_6] [i_6] [i_5 - 3]))) > (var_15)));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) 3439383289495571421LL)) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [(unsigned char)2] [i_5] [i_6])) << (((var_15) - (59779285U))))))));
                    var_27 *= ((/* implicit */long long int) ((((((/* implicit */int) arr_22 [i_0] [10LL] [i_6])) + (((/* implicit */int) (short)-1)))) * (((/* implicit */int) (!(var_11))))));
                }
                for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    var_28 |= ((/* implicit */unsigned long long int) arr_12 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8 - 1]);
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0] [i_5])) ? (((((/* implicit */_Bool) (short)-27789)) ? (((/* implicit */int) arr_15 [i_6] [i_5] [i_6] [12] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_6] [i_5 - 3])))) : (((/* implicit */int) var_7)))))));
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_5] [i_6])) != (((/* implicit */int) arr_28 [i_6] [i_0] [i_5 + 1] [i_5 + 1] [(_Bool)1])))))));
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > ((~(((/* implicit */int) (short)15800))))));
                    var_32 = ((/* implicit */unsigned short) arr_22 [5ULL] [1ULL] [i_0]);
                    arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31)) ? (arr_36 [i_0] [i_5 - 3] [i_10 - 1] [i_10]) : ((-(arr_11 [i_0] [i_5] [i_5] [i_6] [i_0] [i_6])))));
                    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1]))));
                }
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_42 [i_0] [i_0] [(_Bool)1] [i_11] = ((/* implicit */short) var_7);
                    var_35 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5 - 2])) >> (((/* implicit */int) var_17))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_5 - 3])) << (((/* implicit */int) ((unsigned char) var_7)))));
                        arr_45 [i_0] [i_5 + 1] [i_6] [i_11] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [i_0] [(_Bool)1] [i_5 + 1] [i_11]))));
                        arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                    }
                }
                for (long long int i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    arr_49 [i_5 - 3] [i_0] [i_6] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (((+(var_2))) - (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_13 - 1])))));
                    arr_50 [i_0] = ((/* implicit */short) var_1);
                    arr_51 [i_0] [i_5] [i_5] [i_6] [i_13] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) (short)-15795)))) | (((((/* implicit */int) (signed char)31)) >> (((arr_43 [i_0] [i_0] [i_5] [i_6] [i_13]) + (1931559301355358439LL)))))))) : (((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) (short)-15795)))) | (((((/* implicit */int) (signed char)31)) >> (((((arr_43 [i_0] [i_0] [i_5] [i_6] [i_13]) + (1931559301355358439LL))) - (3623139388448087592LL))))))));
                }
            }
            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) | (arr_8 [i_0] [i_5])));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5 - 2] [i_5 - 2])) ? ((-(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) arr_47 [(short)5] [i_5] [(short)0] [i_5] [i_5])) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (unsigned short)55219))))));
        }
    }
    var_39 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((short) var_9))) ? (((var_17) ? (15330187172299170706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (var_1)))))))));
    var_40 = ((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
}
