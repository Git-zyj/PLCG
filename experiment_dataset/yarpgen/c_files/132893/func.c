/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132893
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
    var_12 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_10))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (189)))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (0ULL))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (0ULL))))))));
        var_14 = ((/* implicit */long long int) var_0);
        var_15 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)12)))));
        var_17 = ((/* implicit */int) ((long long int) (-(0ULL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_18 -= ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_5 [5LL] [1LL])))));
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4])))) + (2147483647))) << (((((arr_0 [i_3]) + (9007871536749964582LL))) - (18LL)))));
                    arr_14 [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) var_1);
                }
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 2258770826U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) arr_4 [i_3 - 3] [i_3 - 3])))))));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3 - 4] [i_3 - 1] [i_3 + 1] [i_3 - 4]))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 &= ((/* implicit */unsigned long long int) var_2);
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (arr_13 [i_1] [i_1] [i_1] [i_1]))) >> (((((/* implicit */int) ((unsigned char) arr_15 [i_1] [i_1] [i_3 - 1] [i_5]))) - (152)))));
                    arr_17 [i_3] [i_3 - 1] [i_3] [i_3] [i_1] [(short)1] = ((/* implicit */long long int) ((((arr_12 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551608ULL)) && (((/* implicit */_Bool) var_3)))))) : (18446744073709551615ULL)));
                    arr_18 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((arr_7 [i_3 - 3] [i_3 - 3] [i_3 - 3]) + (2147483647))) >> (((arr_7 [i_5] [i_5] [i_3 - 3]) + (2009057532)))));
                }
                for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) ? (var_6) : (((/* implicit */long long int) 4139936629U))))) ? (((2258770826U) - (arr_5 [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90)))));
                    arr_21 [i_1] [i_3] [i_2] [(unsigned char)7] [i_6 - 2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_20 [i_3])))));
                }
            }
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_27 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2036196469U)))) ? ((~(18446744073709551591ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (0) : (((/* implicit */int) (short)2907)))))));
                        arr_28 [i_1] [i_1] [i_7] [i_2] [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_1] [i_7 + 1] [i_7 + 1] [i_7]))));
                    }
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 8; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) (~(arr_32 [i_9] [i_9] [i_9])));
            var_26 = ((/* implicit */unsigned int) 18446744073709551597ULL);
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [2])) ? (0ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) ((((var_2) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_11])) : (((/* implicit */int) var_2)))) / (arr_29 [i_10])));
                var_29 = ((((/* implicit */int) (unsigned short)43672)) / (505765082));
                /* LoopSeq 1 */
                for (signed char i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    arr_41 [2LL] [i_10] [i_11] = ((long long int) (signed char)-1);
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18112)) || (((/* implicit */_Bool) arr_5 [i_12 + 1] [i_10]))));
                    var_31 = ((/* implicit */unsigned int) 3718615259051484229ULL);
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4)))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((6) >= (((/* implicit */int) arr_36 [6])))) ? (arr_29 [(signed char)6]) : (((/* implicit */int) arr_2 [i_1])))))));
                        var_34 *= ((/* implicit */unsigned long long int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_10] [i_12 - 2] [i_12 + 2])))));
                    }
                }
            }
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 4) 
                {
                    for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
                    {
                        {
                            arr_50 [i_1] [i_10] = ((/* implicit */unsigned int) (-(var_4)));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) : (var_6)))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned short)65532)))) : (arr_29 [i_14]))))));
                            var_36 = ((/* implicit */unsigned int) 6387622761881812395ULL);
                        }
                    } 
                } 
                var_37 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) || ((_Bool)1)));
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551612ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)58388)) : (((/* implicit */int) arr_49 [i_10]))))));
            }
            arr_51 [i_10] [i_10 + 2] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 2 */
            for (long long int i_17 = 1; i_17 < 8; i_17 += 1) 
            {
                arr_54 [i_10] [i_10] [i_10] = (+(((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1)))));
                var_39 = ((/* implicit */unsigned char) 3045803372U);
            }
            for (unsigned long long int i_18 = 3; i_18 < 8; i_18 += 2) 
            {
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) arr_2 [i_1]))));
                var_41 = ((/* implicit */int) min((var_41), ((~(((/* implicit */int) (short)0))))));
                arr_59 [i_10] [i_10] [i_10] = ((var_2) ? (((/* implicit */int) arr_30 [i_1] [i_10] [i_1])) : (((/* implicit */int) arr_30 [i_18 + 3] [i_10 + 1] [i_1])));
            }
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_42 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))))) - ((-(min((((/* implicit */unsigned long long int) var_7)), (arr_13 [i_19] [i_19] [i_19] [i_19])))))));
        var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(1073741824))), (((((/* implicit */_Bool) arr_47 [(_Bool)1] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_16 [i_19] [i_19])) : (((/* implicit */int) (unsigned char)188))))))) ? (min((((/* implicit */unsigned long long int) ((arr_26 [i_19] [i_19]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (arr_13 [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_19] [i_19] [i_19] [i_19])) / (((/* implicit */int) (short)-29))))) ^ (min((853968498U), (((/* implicit */unsigned int) var_0)))))))));
        var_44 = ((/* implicit */unsigned int) ((((min(((~(((/* implicit */int) (short)18626)))), (((((/* implicit */_Bool) arr_9 [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_2)) : (arr_22 [i_19] [i_19] [i_19] [i_19]))))) + (2147483647))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)1023)), (var_11)))) ? (((68719476735LL) - (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_19] [i_19] [i_19] [i_19]))))) - (68719476723LL)))));
    }
    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((3440998797U) * (767325494U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)255)))) > (((/* implicit */int) (_Bool)0)))))))))));
}
