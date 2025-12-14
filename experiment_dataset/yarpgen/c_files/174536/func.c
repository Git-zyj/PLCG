/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174536
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_11)), (max((((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_10))))));
    var_14 &= ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_10)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), ((+(arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)66)))) >= (((/* implicit */int) arr_1 [i_0 - 3]))))))));
        arr_3 [(unsigned short)2] = ((/* implicit */signed char) (unsigned short)1);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_7 [2ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)66)) | (((((/* implicit */int) arr_1 [i_0 + 2])) * (((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned short) ((((unsigned long long int) (short)-28703)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_10) != (((/* implicit */int) (unsigned short)65535))))), (min((((/* implicit */int) (unsigned short)21702)), (2047)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((short) (unsigned short)0))), (min((((/* implicit */unsigned int) (unsigned short)65535)), (var_8)))))) : (min((((/* implicit */long long int) max((((/* implicit */int) (short)32256)), (1876635806)))), (((arr_10 [0U] [i_1] [i_1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                        arr_15 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_5);
                        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)12601))));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1]);
            arr_18 [i_0 + 3] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) arr_10 [i_0 + 3] [i_0 - 3] [i_0 - 3]);
        }
        /* vectorizable */
        for (short i_4 = 3; i_4 < 6; i_4 += 4) 
        {
            arr_22 [i_4] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) (signed char)-67)))) : (((((/* implicit */int) var_7)) >> (((var_10) + (271234200)))))));
            arr_23 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0 - 3] [i_0 - 1])) ? (arr_20 [i_0 + 1] [i_4 - 3]) : (((/* implicit */unsigned long long int) 1876635806))));
            arr_24 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0]))) : (((/* implicit */int) (unsigned short)1))));
        }
        for (short i_5 = 3; i_5 < 6; i_5 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_5 + 2] [i_0 - 1]))) + (var_8)));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9163163771001121070ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_0 - 1])) : (arr_29 [i_0] [i_0 + 2] [i_5 + 3] [i_5 + 3]))))));
                var_18 = ((/* implicit */unsigned char) arr_8 [i_6] [i_5] [i_5] [i_0]);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [(short)6])) * (((/* implicit */int) arr_26 [i_0] [i_5] [i_0 - 1])))))));
                    arr_35 [i_0] [i_0 - 2] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_7 + 1]));
                    var_20 = (~(((/* implicit */int) arr_30 [i_7 + 1] [i_5 + 4] [i_6])));
                    arr_36 [i_5] [i_5 - 1] [i_5 + 4] [i_5 + 3] = ((/* implicit */int) (_Bool)0);
                }
                arr_37 [i_5] = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_5] [i_0] [i_0]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_21 = ((/* implicit */short) max((var_21), (var_0)));
                var_22 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (arr_11 [i_0] [i_0] [i_0 - 1])))))) == (((/* implicit */int) (unsigned short)0))));
            }
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                arr_46 [i_0 - 3] [i_5 - 2] [i_5] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_5 + 4] [i_0 - 3] [i_0 - 2])) ? (var_2) : (arr_38 [i_5 + 3] [i_0 + 1] [i_0 + 1])))), (max((3341867340220830438LL), (((/* implicit */long long int) var_7))))));
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    var_23 = (~((~(0ULL))));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((unsigned short) arr_42 [3] [i_0] [i_9]))))));
                }
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned short) ((short) (((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    var_26 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)31323)) >> (((((/* implicit */int) arr_44 [i_0 + 2] [i_0 + 2])) - (26))))) > (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)127)), ((unsigned short)1))))));
                    arr_53 [i_0 + 3] [i_5] [i_5] [i_5] = (+(((/* implicit */int) (_Bool)1)));
                    var_27 = ((/* implicit */long long int) arr_10 [i_5] [i_9] [i_11]);
                    arr_54 [i_0] [i_0] [i_5] [i_9] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22075))) : (arr_47 [i_0 + 2])))));
                }
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    var_28 = ((/* implicit */unsigned int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)0))));
                    arr_57 [i_0] [i_5] [i_0] = ((/* implicit */long long int) 4257510136U);
                }
            }
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_30 *= ((/* implicit */long long int) (unsigned char)0);
            }
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 4; i_14 < 8; i_14 += 4) 
            {
                for (short i_15 = 2; i_15 < 9; i_15 += 4) 
                {
                    for (short i_16 = 3; i_16 < 8; i_16 += 4) 
                    {
                        {
                            arr_67 [i_5] [i_15] [i_5] [i_5] [i_5 + 4] |= ((/* implicit */signed char) var_2);
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((unsigned short) ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)65408)), (arr_48 [i_0 - 3] [i_5 + 2] [(_Bool)1] [i_15] [i_0 - 3] [i_16 + 1])))))));
                            arr_68 [i_0] [i_0] [i_14 + 2] [i_15] [(unsigned char)2] [i_5] [i_16 - 1] = ((/* implicit */short) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_16 - 1])) ? (((/* implicit */long long int) var_10)) : (var_6))))));
                        }
                    } 
                } 
            } 
            arr_69 [i_5] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_25 [i_0 - 3] [i_5 - 2] [i_5 - 2])))) >= ((-(((/* implicit */int) (unsigned short)16368))))));
        }
        arr_70 [i_0] [i_0 - 3] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) > (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) ((short) (unsigned short)42930)))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_59 [i_0 + 1]))) ? (((/* implicit */int) ((short) var_2))) : ((~(var_10)))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
    {
        var_33 = ((/* implicit */long long int) 72040001851883520ULL);
        var_34 = ((/* implicit */short) arr_73 [i_17] [i_17]);
        arr_74 [i_17] = ((/* implicit */int) var_7);
    }
    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 4) 
    {
        var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_34 [i_18 - 1] [i_18] [(_Bool)0] [i_18] [i_18] [i_18]))))), (((((/* implicit */_Bool) 18374704071857668096ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL)))))) ? (((/* implicit */int) ((signed char) arr_21 [i_18 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)101)) / (((/* implicit */int) arr_12 [i_18]))))) && (((/* implicit */_Bool) (unsigned short)22606)))))));
        arr_79 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_59 [i_18 + 1])))) == (((((/* implicit */_Bool) arr_59 [i_18 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_59 [i_18 + 1])))));
    }
    var_36 = ((/* implicit */unsigned short) ((_Bool) var_12));
}
