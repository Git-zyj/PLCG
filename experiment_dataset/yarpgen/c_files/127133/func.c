/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127133
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0 - 1]), (arr_4 [i_0 + 2])))) ? (((((((/* implicit */int) (unsigned short)30452)) != (((/* implicit */int) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)45612)) : (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_2] [i_2])))) : (((/* implicit */int) ((659815602U) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */int) (unsigned short)14056))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) (signed char)-50))), (var_3)));
                                arr_24 [i_6] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_0)), (arr_0 [i_1]))), (((/* implicit */long long int) (signed char)-50))))) ? ((~(((/* implicit */int) ((_Bool) var_4))))) : (((/* implicit */int) (signed char)52))));
                                var_12 = ((/* implicit */unsigned int) ((((var_9) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) min((arr_9 [i_0 + 1] [i_1 + 3] [i_6 + 1] [i_6 + 1]), (arr_9 [i_0 + 1] [i_1 + 1] [i_6 + 1] [i_6 - 1])))) : ((~(((/* implicit */int) (signed char)-50))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_31 [i_1] [i_8] [i_7] [i_2] [i_1 - 1] [i_1] = ((/* implicit */short) -254076892);
                                arr_32 [i_0] [i_1 - 3] [i_2] [(_Bool)1] [i_1] [i_8] [(_Bool)1] = ((short) max((((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [22] [22] [22] [i_8])), (((((/* implicit */_Bool) -3274139609454505685LL)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))));
                                var_13 = min((((int) arr_8 [i_0 + 1] [i_0])), (((/* implicit */int) var_3)));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((3274139609454505684LL) / (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65535)), (2147483647)))))))));
                                var_15 ^= ((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_7] [i_2] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_45 [i_11 + 1] [i_11 - 1] [i_11 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((var_9) == (((/* implicit */int) arr_19 [i_10] [i_13]))))))), (var_9)));
                                var_16 = (+((~(9223372036854775807LL))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3274139609454505693LL)))))) & (9223372036854775807LL))))))));
                                var_18 ^= ((/* implicit */unsigned short) 18446744073709551615ULL);
                                var_19 = ((((/* implicit */_Bool) arr_30 [i_9] [i_10] [i_9] [i_12] [i_13] [i_13])) ? (((/* implicit */int) max((arr_20 [i_12] [i_11 + 1] [i_11] [i_11] [i_11]), (arr_20 [i_12] [i_11 - 1] [i_10] [i_10] [i_9])))) : (((/* implicit */int) arr_5 [i_10] [(_Bool)0] [i_13] [i_13])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned short i_15 = 2; i_15 < 19; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (short)-12242);
                                arr_55 [i_15 + 1] = (-(((/* implicit */int) arr_16 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 - 1] [i_15 - 2])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned char) var_5);
                            arr_69 [i_17] [i_17] [i_19] [(short)10] [i_19] = ((/* implicit */long long int) arr_19 [i_17] [(unsigned short)20]);
                            arr_70 [i_19] [i_19] [i_19] [i_19] [(signed char)7] [i_17] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((var_2) ? (arr_46 [i_17] [i_17] [i_17] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_17] [(unsigned char)15] [i_17] [i_17] [i_18 + 3] [i_17])) : (((/* implicit */int) arr_1 [i_18 + 3])))) : (var_9))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_21 = 3; i_21 < 9; i_21 += 3) 
                {
                    for (short i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_77 [i_18] [i_18 + 1] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_5)))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_2))));
                            var_22 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_21 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_21 [i_17] [11U] [i_21] [i_22] [i_22])) : (((/* implicit */int) arr_65 [i_17] [i_21] [i_22])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_17] [(unsigned short)20])) ? (((/* implicit */int) var_3)) : (arr_4 [i_22])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_23 = 1; i_23 < 10; i_23 += 1) 
                {
                    for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        {
                            var_23 += ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_18] [i_24] [i_18 - 2] [i_23 + 2] [i_18 + 4] [i_24] [i_18 + 4]))) % (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_17] [i_18]) : (17179860992LL)))))));
                            arr_82 [i_24] [i_24] [i_24] [i_24] [i_23] [i_24] = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_25 = 4; i_25 < 12; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 13; i_26 += 1) 
                    {
                        for (long long int i_27 = 0; i_27 < 13; i_27 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_18 + 3] [i_25 - 4] [i_25 + 1] [i_18 + 1] [i_18 + 3])) ? (((int) arr_61 [i_18 - 2] [i_18 - 2])) : (((((/* implicit */int) var_8)) / (var_9)))));
                                arr_92 [i_17] [7] [7] [i_27] = ((/* implicit */short) var_6);
                                arr_93 [i_27] [i_25] [i_27] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((var_9) >> (((-5171330616250955576LL) + (5171330616250955577LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) < (-3274139609454505685LL))))) : ((+(-3274139609454505693LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    for (int i_29 = 0; i_29 < 13; i_29 += 2) 
                    {
                        {
                            arr_100 [i_29] [i_29] [i_29] [i_29] [(short)12] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_97 [i_18 - 2]))) & (-3274139609454505690LL)))));
                            arr_101 [i_17] [i_17] [i_28] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_35 [i_17] [i_18 + 2] [i_28])) : (((/* implicit */int) var_2))))) : (arr_80 [i_29] [i_29])));
                            var_25 = ((/* implicit */unsigned short) var_9);
                            var_26 |= ((/* implicit */unsigned short) ((((arr_79 [i_17] [i_18] [i_18 + 1]) ? (((/* implicit */int) arr_79 [i_17] [i_18] [i_18 + 1])) : (((/* implicit */int) var_5)))) >= (((int) arr_79 [i_17] [i_17] [i_18 + 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_30 = 0; i_30 < 14; i_30 += 4) 
    {
        for (unsigned long long int i_31 = 3; i_31 < 10; i_31 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_32 = 2; i_32 < 11; i_32 += 2) 
                {
                    for (int i_33 = 0; i_33 < 14; i_33 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_47 [i_32 + 2] [i_32 + 2] [i_31 + 4])) ? (arr_47 [i_32 + 2] [i_31 + 3] [i_31 + 4]) : (arr_47 [i_32 + 2] [i_32 + 2] [i_31 + 4]))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_106 [i_31 - 3]) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_6))))))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((int) arr_39 [i_31] [i_31 - 3] [i_32 - 2] [8LL])) / ((~(((/* implicit */int) arr_11 [i_32] [i_32 - 2] [i_32] [i_32])))))))));
                            var_29 = ((/* implicit */long long int) ((((-730618749) + (2147483647))) >> (((((arr_6 [i_30] [i_31 + 1] [i_30]) << (((arr_6 [i_31] [i_31 + 1] [i_33]) - (3388068020U))))) - (421527529U)))));
                            arr_112 [i_31] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_35 [i_30] [i_31] [14]))) ? (min((((((/* implicit */_Bool) 1653116046)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)24876)))), (((/* implicit */int) arr_37 [i_33] [i_33] [i_32] [i_33])))) : (189598013)));
                            var_30 = ((/* implicit */int) arr_42 [i_30] [(_Bool)1] [i_30] [i_31] [i_31] [i_30] [i_33]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_34 = 2; i_34 < 11; i_34 += 2) 
                {
                    for (int i_35 = 3; i_35 < 13; i_35 += 2) 
                    {
                        for (unsigned short i_36 = 0; i_36 < 14; i_36 += 1) 
                        {
                            {
                                var_31 = var_2;
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((long long int) (-(arr_113 [i_34 + 1] [i_31 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_37 = 0; i_37 < 14; i_37 += 3) 
                {
                    for (unsigned char i_38 = 0; i_38 < 14; i_38 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (unsigned short)65535))));
                            var_34 = max(((~(((/* implicit */int) arr_49 [i_31 - 2] [13U] [i_30])))), ((+(((/* implicit */int) arr_49 [i_31 - 3] [i_31] [i_30])))));
                            arr_127 [i_30] [13LL] [i_37] [i_38] = ((/* implicit */long long int) arr_8 [i_31 + 2] [i_31 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
