/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164720
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
    var_18 *= ((/* implicit */signed char) (short)-28141);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) >= (((/* implicit */int) (unsigned char)12)))))));
        var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28123)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)10))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_0 [9])))) ? (((/* implicit */long long int) 4294967295U)) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_2))))) & (((/* implicit */long long int) ((/* implicit */int) (short)-28123))))))));
        var_23 ^= ((/* implicit */unsigned short) (unsigned char)0);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_1 [i_1]))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) (short)28141)))))))), (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            var_26 = ((/* implicit */int) (~((-(118337582U)))));
                            var_27 = ((/* implicit */short) var_6);
                            arr_13 [i_1] [i_1] [i_3] [(unsigned short)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)44106), (((/* implicit */unsigned short) (unsigned char)255))))) + (((/* implicit */int) ((unsigned short) arr_4 [i_1])))))) ? (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) arr_4 [i_1])))))) : (((((/* implicit */_Bool) ((unsigned int) 4294967294U))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (2690265417931560533LL))) : (((/* implicit */long long int) (+(var_14))))))));
                            arr_14 [i_2 + 1] = ((/* implicit */long long int) 1472572565U);
                        }
                        var_28 = ((/* implicit */int) var_17);
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_3] [4U] [4U] [i_2 - 1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) var_17)))) | (((((/* implicit */int) arr_12 [(signed char)11] [(short)9] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 2])) * (((/* implicit */int) (unsigned short)42170))))));
                            var_30 = ((/* implicit */unsigned char) ((((1959213842523052380LL) - (((/* implicit */long long int) var_4)))) + (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_3] [i_6] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_3)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_7 - 1] [i_7 + 1] [i_4] [i_1] [i_2 + 3])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-28164)) : (((/* implicit */int) arr_22 [(signed char)4] [i_2] [i_3] [(unsigned char)5] [5] [4])))) : (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_7 - 1])))))));
                            var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [2LL] [i_2 + 3] [i_3] [i_4] [2LL] [i_7])) || (((/* implicit */_Bool) var_13)))))));
                        }
                        for (int i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            arr_25 [(signed char)9] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_2 + 3] [1]), (arr_3 [i_2 + 3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-44))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 + 3] [i_2] [i_3] [i_4] [i_8 + 1] [i_8 - 1])) || (((/* implicit */_Bool) (short)-28150)))))));
                            arr_26 [i_8] [i_2 + 3] [i_3] [i_4] [i_8] [i_1] = ((/* implicit */short) var_1);
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max(((~(-8063174541946810359LL))), (((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-24)))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), ((+(2822394730U)))))) ? (min((max((((/* implicit */long long int) arr_29 [i_9])), (-6840994738338771656LL))), (((/* implicit */long long int) ((unsigned short) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
        arr_30 [(unsigned short)2] [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -2064098013)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned short)32736)))), (((/* implicit */int) ((unsigned char) arr_28 [i_9])))));
        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_29 [i_9]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [11LL])) ? (((/* implicit */int) ((unsigned short) -1239386639))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20388)) && (((/* implicit */_Bool) (unsigned char)173))))))))));
        var_35 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)20388)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9]))))) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) ((8988046619128919533ULL) % (((/* implicit */unsigned long long int) -996115049))))))))));
        var_37 = ((/* implicit */unsigned short) (+(494918482U)));
        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (~(-996115049))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 7; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    {
                        arr_47 [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12 - 1] [i_12 + 2] [i_12 + 1]))) : (min((var_2), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_12 + 2] [i_12 - 4] [i_12 + 1] [i_12 + 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_38 [5LL] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (arr_2 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14] [i_12])))))));
                        var_40 = ((/* implicit */unsigned char) max((3800048814U), (((/* implicit */unsigned int) (unsigned short)16))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_6))));
                            arr_50 [i_11] [i_12 + 3] [i_12 + 3] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_39 [i_14] [0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 996115054)) ? (((/* implicit */int) (unsigned short)16103)) : (((/* implicit */int) (short)-321))))) : (arr_46 [i_12 + 1] [i_12 - 4] [(unsigned short)4] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) min((3800048813U), (((((/* implicit */_Bool) 3800048819U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_29 [19])) ? (arr_17 [(unsigned char)2] [i_12] [i_12] [(signed char)7] [(unsigned short)9] [i_15]) : (((/* implicit */unsigned long long int) -6191207464815314327LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_16 = 1; i_16 < 6; i_16 += 4) /* same iter space */
                        {
                            arr_53 [i_11] [i_12] [i_12] [i_13] [i_13] [(short)4] [(short)4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2265874114U)));
                            var_42 = arr_8 [3] [i_12] [i_12] [i_12];
                            var_43 ^= (-(arr_29 [i_11]));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (unsigned char)157))));
                            var_45 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_51 [i_13] [i_12] [i_13]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 1; i_17 < 6; i_17 += 4) /* same iter space */
                        {
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) var_6)))))))));
                            arr_57 [i_11] [i_11] = (-(arr_2 [i_17]));
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_11] [i_12] [i_13] [i_14] [i_12 - 1] [i_17 + 4])) ? (arr_29 [i_12 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_12] [i_11] [i_14] [i_12 - 3] [i_17 + 2])))));
                            var_48 = ((/* implicit */long long int) arr_15 [i_17] [i_17] [i_17 + 3] [i_17] [i_17]);
                        }
                        for (int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            arr_60 [1LL] [i_11] [i_13] [(unsigned char)6] = ((/* implicit */short) arr_45 [i_11] [i_12] [i_13] [i_14]);
                            arr_61 [i_11] [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_11] [i_14] [i_11])) && (((/* implicit */_Bool) (unsigned short)60493))))), (arr_45 [i_11] [i_12] [(signed char)6] [i_12])));
                            arr_62 [i_13] [i_14] [i_13] [(signed char)2] [i_11] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_29 [(unsigned short)10]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [(unsigned char)5] [(unsigned char)5] [i_13])) : (((/* implicit */int) var_11)))))))) ? (((((/* implicit */int) ((unsigned char) (short)27624))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 4294966272U)) : (9458697454580632083ULL))) - (4294966251ULL))))) : (((/* implicit */int) max((((/* implicit */short) var_11)), (var_9))))));
                            var_49 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */unsigned short) var_13)), (var_0))))))));
                        }
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            arr_65 [i_11] [i_12] [i_11] [(unsigned short)8] [i_11] = ((/* implicit */unsigned int) var_8);
                            arr_66 [i_11] [i_14] [i_13] [i_12] [i_11] = ((/* implicit */long long int) arr_10 [i_11] [i_12] [i_12]);
                        }
                        arr_67 [i_11] [5] [i_13] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65535))))) : (((3800048834U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))))));
                    }
                } 
            } 
        } 
        arr_68 [i_11] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) max(((short)-3187), (((/* implicit */short) ((((/* implicit */long long int) var_14)) > (-6191207464815314337LL))))))), (max((((/* implicit */int) arr_28 [i_11])), (((((/* implicit */_Bool) arr_3 [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)34852)) : (((/* implicit */int) var_16))))))));
        arr_69 [i_11] = ((/* implicit */unsigned long long int) var_11);
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_12)) ? (524287LL) : (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) | (((/* implicit */long long int) ((/* implicit */int) (((-(arr_58 [i_11]))) <= (((4294967279U) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))))));
        arr_70 [i_11] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_51 [i_11] [i_11] [i_11])), ((-(arr_45 [i_11] [i_11] [i_11] [i_11]))))), (((/* implicit */unsigned long long int) var_0))));
    }
    var_51 = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) + (((/* implicit */int) max((var_17), (((/* implicit */short) var_1))))))) > (((/* implicit */int) (unsigned char)248))));
}
