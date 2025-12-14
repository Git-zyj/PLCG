/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186265
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
    var_14 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) 3763570851827208874ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1356513873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1845525367U)))))) ? (((/* implicit */int) (unsigned char)104)) : (arr_1 [i_0] [i_0])));
        var_16 = arr_2 [i_0];
        var_17 = ((/* implicit */unsigned int) (unsigned char)143);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                arr_13 [(short)15] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) var_12);
                arr_14 [i_3] [i_3] [i_3 - 1] [4U] = ((unsigned short) arr_1 [i_2 - 1] [i_2 + 4]);
                arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [14ULL] [8LL] [19U])) / (((/* implicit */int) (signed char)91))))) ? (((((/* implicit */_Bool) arr_1 [(short)17] [21])) ? (arr_7 [8U] [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)151)) <= (((/* implicit */int) arr_12 [i_3 + 1] [i_2 + 3]))));
            }
            arr_16 [i_1] [(short)16] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)108)) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56606))))) == (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_1] [(short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [9ULL] [i_1])))))))), ((unsigned char)104)));
            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (short)9193)), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) > (((/* implicit */int) var_5)))))))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_2 + 2]))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (max((((/* implicit */unsigned long long int) (~(351611242U)))), (max((((/* implicit */unsigned long long int) var_8)), (var_1))))))))));
            var_21 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_6 [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                var_22 -= ((/* implicit */short) ((4294967295U) == (2963455001U)));
                arr_24 [i_5] [i_5] &= ((/* implicit */unsigned int) arr_18 [i_5 + 3] [i_5 + 3]);
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_4))));
                arr_26 [20U] [i_5] = ((/* implicit */int) ((unsigned short) var_5));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_22 [i_4] [i_5])))) : (((/* implicit */int) (short)16218))));
            }
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_4])) > (((int) arr_22 [i_4] [i_6]))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_36 [i_1] [i_4] [i_4] [(unsigned short)20] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) < (16450687242053542272ULL))))));
                            arr_37 [i_1] [i_8] = ((/* implicit */unsigned short) ((10342175968618533965ULL) << (((var_1) - (10070587974839175644ULL)))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    arr_43 [i_10] [i_4] [12U] [i_9] [i_4] [12U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_10] [i_4] [12ULL] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [(unsigned short)14] [(short)19] [i_9] [(unsigned short)14] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
                    arr_44 [i_10] [i_4] = ((/* implicit */signed char) (-((+(1996056831656009343ULL)))));
                    arr_45 [(unsigned short)10] [8U] [i_1] [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 16450687242053542272ULL)) ? (16450687242053542253ULL) : (7720467317180261456ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 10870500645009821938ULL))))));
                    var_25 = ((/* implicit */short) var_0);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((1996056831656009356ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4505)))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) 2036453765514530781LL)) || (((/* implicit */_Bool) arr_6 [i_11] [(short)17]))))))))));
                        arr_50 [(signed char)9] [i_11] [i_10] [i_10] [i_10] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((arr_49 [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-21129)))));
                    }
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned short)4505))));
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)211)) || (((/* implicit */_Bool) (short)32763)))))) / (var_11)));
                        var_30 = ((/* implicit */unsigned short) var_4);
                    }
                }
                for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) var_6);
                    arr_58 [i_1] [i_13] [i_9] = ((/* implicit */signed char) var_13);
                    var_32 = ((/* implicit */unsigned int) var_4);
                }
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_33 -= ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_1] [i_4] [(short)2] [(unsigned char)18]))));
                    var_34 += ((/* implicit */unsigned char) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                }
            }
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((1050724438U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_4] [i_4] [i_4]))))))) : (arr_42 [i_1] [i_1] [i_1] [i_4] [i_4])));
            arr_61 [10ULL] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_1] [i_4])) - (((/* implicit */int) arr_22 [i_4] [i_1]))));
        }
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((arr_32 [i_1] [i_1]), (((/* implicit */unsigned int) ((((unsigned int) (signed char)96)) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))))))));
    }
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_2)), ((short)20088))))))) & (var_1)));
}
