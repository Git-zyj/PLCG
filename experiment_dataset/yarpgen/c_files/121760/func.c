/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121760
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */int) arr_2 [i_0 - 2]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) var_4);
                                var_15 = ((/* implicit */_Bool) (+(((int) min((((/* implicit */unsigned long long int) var_5)), (arr_5 [17U] [i_3]))))));
                            }
                            for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned char) arr_10 [(unsigned short)0] [(short)11] [(short)11]);
                                var_17 = ((/* implicit */long long int) (((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)94))));
                            }
                            var_18 = ((/* implicit */unsigned char) arr_9 [i_1]);
                            arr_18 [i_0] [i_1] [i_2 - 1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1])) ? (arr_16 [i_0 + 1] [i_1]) : (arr_16 [i_0 + 1] [i_1])))) ? (min((12346547279281090284ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((long long int) var_3))));
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_16 [i_0] [i_1]) : (arr_16 [i_0] [i_1]))))));
                            arr_19 [i_0] [2LL] [i_2] [i_3] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_1 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_28 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) 834892883)), (2715405555988136669LL))), (((/* implicit */long long int) arr_10 [i_8] [i_9 - 1] [i_9 + 1]))))) ? (min((((arr_0 [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_8] [3ULL] [i_6]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_7] [i_8] [(signed char)2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((arr_12 [i_6] [i_6] [10ULL] [i_6] [i_6] [i_6] [12LL]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-1582))))), (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) 4527663576813702844LL))))))))));
                            var_20 *= arr_16 [i_6] [8U];
                            arr_29 [i_6] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-90)), (3585671246U)))) : (arr_1 [i_6]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_6])))) & (min((((/* implicit */long long int) arr_2 [i_6])), (var_13))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) arr_15 [i_6]))))), (14785766616197930226ULL)))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                    {
                        arr_35 [i_6] [i_11] [i_10] [1LL] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (arr_0 [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [3LL] [i_7] [3LL])) / (arr_17 [i_6] [i_10]))))))) / (arr_7 [11ULL] [i_6] [i_10] [i_11])));
                        arr_36 [i_6] [i_6] [i_11] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2147483647) << (((((-1443637338) + (1443637369))) - (31)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_6] [i_7] [i_10])), ((short)-4618))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6])) + (arr_17 [i_7] [i_11])))) ^ (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) (-2147483647 - 1)))))))));
                        arr_37 [i_6] [i_7] [i_11] &= ((/* implicit */unsigned char) arr_7 [i_6] [i_11] [i_6] [i_11]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        arr_40 [i_6] [i_6] [i_7] [i_6] [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_33 [i_6] [i_6])), (var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_0)))) ? (((/* implicit */int) max(((unsigned short)45390), (((/* implicit */unsigned short) arr_11 [i_10] [i_10] [i_12] [i_10] [i_10] [i_10]))))) : (((((/* implicit */int) arr_11 [i_6] [i_6] [i_12] [i_10] [(_Bool)1] [16ULL])) * (((/* implicit */int) (unsigned short)53437)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_12])) || (((/* implicit */_Bool) 6100196794428461332ULL)))))));
                        arr_41 [i_6] [i_6] [i_6] [i_6] [20U] = ((/* implicit */unsigned short) 14785766616197930226ULL);
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [20])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_6] [i_10] [i_7] [i_6])) : (((/* implicit */int) (short)(-32767 - 1)))))))), (((unsigned long long int) arr_14 [i_6] [i_7] [3LL] [i_12] [i_12] [i_6]))));
                        arr_42 [i_6] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) -2715405555988136669LL)) : (12346547279281090284ULL))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_13 - 2] [i_13 + 3])))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */int) ((signed char) 6905750148581471370ULL))) % (((((/* implicit */_Bool) arr_14 [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13] [i_13 - 3] [i_6])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)117)))) : ((+(((/* implicit */int) var_2))))))));
                        var_25 |= ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_11 [i_6] [i_7] [(short)20] [i_13 - 1] [i_6] [i_10])), (var_11)))) <= (((((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (var_13)))));
                    }
                    for (unsigned long long int i_14 = 3; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_9))))) >= (max((2137298995U), (((/* implicit */unsigned int) (signed char)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(short)22] [i_6] [i_7] [i_6]))) : (8796093022208ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14 - 1]))) : (((var_10) % (((/* implicit */long long int) ((/* implicit */int) (short)1581)))))))));
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((((/* implicit */_Bool) arr_30 [i_6] [(short)20] [i_10] [i_7])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14 + 2] [i_6] [i_7] [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_14 - 1] [i_14 - 3] [i_14] [i_14])) * (((/* implicit */int) arr_11 [i_14 - 2] [i_14 - 2] [(short)18] [(short)18] [14ULL] [i_7])))))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 19; i_15 += 3) 
                    {
                        var_28 = var_12;
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15 + 3])) ? (((((/* implicit */_Bool) arr_34 [i_6] [i_7] [i_10] [12LL])) ? (arr_9 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_31 [i_10] [i_10] [i_10] [i_10])), (var_10))))))) ? (((unsigned long long int) arr_44 [i_6])) : (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                    }
                    /* LoopNest 2 */
                    for (short i_16 = 4; i_16 < 19; i_16 += 4) 
                    {
                        for (int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            {
                                var_30 -= ((/* implicit */short) (~(((((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (unsigned char)192)))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (143)))))));
                                var_31 = min((((/* implicit */unsigned int) max((min((arr_8 [i_6] [i_6] [i_17]), ((signed char)(-127 - 1)))), (((signed char) (short)-1582))))), (max((arr_46 [i_16 - 4] [i_16 - 4] [22U] [i_16]), (arr_46 [i_16 + 4] [i_7] [i_10] [i_16]))));
                                arr_54 [i_6] [i_17] [i_16] [(signed char)15] [(signed char)15] [i_7] [i_6] = ((/* implicit */unsigned int) arr_10 [i_6] [i_10] [4U]);
                                arr_55 [i_6] [i_7] [i_6] [i_16] [17] [i_17] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_6]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned char) var_11);
    var_33 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned char)207)))))));
    var_34 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46732)) && (((/* implicit */_Bool) 6283461775083180012ULL))))))))));
}
