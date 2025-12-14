/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100623
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) (short)-27031)) / (((((/* implicit */_Bool) max((((/* implicit */signed char) arr_3 [i_0])), ((signed char)-114)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [11ULL] [i_2] [i_1] [i_2] [i_1] [i_0])))))))))));
                                arr_14 [(unsigned char)15] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)114))))) ? (((((/* implicit */_Bool) -4978992228793071879LL)) ? (-1853378106) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) arr_1 [i_3]))))))) ? (((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_1 [i_0])))) ^ ((-(((/* implicit */int) arr_6 [i_2] [i_0])))))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_2] [i_4])) ? (((/* implicit */int) var_6)) : (((var_7) ^ (((/* implicit */int) var_9))))))));
                                arr_15 [i_1] [i_1] [i_2] [0LL] [i_1] [i_2] [(signed char)12] = ((/* implicit */long long int) arr_3 [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1519506746)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (var_4)))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-114)) != (((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_30 [i_5] [15] [i_8 + 2] [i_9] = max((((int) (!(((/* implicit */_Bool) (unsigned char)58))))), (((((/* implicit */int) arr_25 [i_6])) & ((+(((/* implicit */int) (unsigned char)3)))))));
                                var_15 = max(((unsigned short)58391), (((/* implicit */unsigned short) (signed char)-114)));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5] [i_6] [(unsigned char)13] = ((/* implicit */signed char) (-(var_7)));
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_5] [i_5] [i_5] [i_7]))))))));
                }
            } 
        } 
        arr_32 [i_5] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) arr_1 [i_5])) / (((/* implicit */int) (unsigned char)137))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5]))))))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) min((arr_5 [i_5] [i_5] [24LL] [i_5]), (arr_5 [(unsigned short)10] [i_5] [i_5] [(unsigned short)10])))))))));
    }
    for (short i_10 = 2; i_10 < 16; i_10 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) (short)11008)));
        arr_35 [i_10 - 2] = ((/* implicit */unsigned short) arr_12 [i_10] [18] [i_10] [i_10] [i_10] [i_10]);
    }
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */short) max((((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (short)11008)))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)113))) > (-453090054998108381LL)))))), ((short)-6761)));
    /* LoopSeq 2 */
    for (int i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)11008)), ((~(arr_20 [i_11] [i_11] [(signed char)16] [(signed char)11])))));
        var_21 = max(((short)(-32767 - 1)), (((/* implicit */short) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)50)), (((((/* implicit */int) (signed char)113)) >> (((18446744073709551615ULL) - (18446744073709551610ULL)))))))) : (((long long int) (signed char)7))));
        var_23 ^= (signed char)24;
        var_24 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((signed char) arr_11 [i_11] [20U] [i_11] [i_11] [i_11]))) >> ((((-(var_10))) + (5674382004401574914LL))))));
    }
    for (short i_12 = 2; i_12 < 18; i_12 += 2) 
    {
        arr_45 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-8657)) ? (((/* implicit */int) arr_2 [i_12 - 2] [i_12 + 1])) : (((/* implicit */int) (short)-11009)))) % (((((/* implicit */_Bool) arr_2 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_2 [i_12 - 2] [i_12 - 1])) : (((/* implicit */int) (short)(-32767 - 1)))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                {
                    arr_51 [i_13] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_28 [i_14] [i_12 + 1] [i_14] [i_13] [i_12])) ? (var_0) : (((/* implicit */int) arr_26 [i_12 - 2] [i_12 - 2] [i_13] [16LL]))))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        var_25 = (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)55910), (((/* implicit */unsigned short) var_9)))))))));
                        arr_54 [i_15] [i_14] [i_15] [i_15] [i_12] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_26 [i_12] [i_15] [i_15] [i_15]))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        arr_58 [i_12] [14LL] [i_12] [i_14] [14LL] = ((/* implicit */int) ((long long int) ((short) -2650032905688967134LL)));
                        arr_59 [i_16 - 2] [i_12] [i_14] [i_12] [i_12] = ((/* implicit */long long int) 2009338498U);
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_12 + 1] [i_12 + 1] [i_16 + 1] [i_16]))));
                    }
                    /* vectorizable */
                    for (short i_17 = 2; i_17 < 17; i_17 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
                        {
                            arr_67 [i_18] [i_17] [i_14] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_12])) ? (((/* implicit */int) arr_24 [i_17])) : (((/* implicit */int) (unsigned char)197))));
                            var_27 = (unsigned char)144;
                        }
                        for (short i_19 = 3; i_19 < 17; i_19 += 2) 
                        {
                            arr_71 [i_12] [i_17] [i_14] [i_19] [i_17] [i_19 + 2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)21118)) && (((/* implicit */_Bool) 4294967295U)))));
                            arr_72 [i_12] [(short)14] [i_19] = (-(((/* implicit */int) (_Bool)0)));
                            arr_73 [i_13] [i_14] [i_17 - 2] [i_19] = ((/* implicit */short) 5410466305336956704ULL);
                        }
                        arr_74 [i_12] [(unsigned char)8] [i_14] [i_17] = ((/* implicit */unsigned int) ((short) (unsigned short)9605));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) var_6)) < (arr_17 [i_12 + 1]))))));
                    }
                    for (short i_20 = 2; i_20 < 17; i_20 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)18009)) : (var_7)))) || (((_Bool) arr_10 [i_12 - 1]))));
                        arr_77 [i_20] [i_13] [i_14] [i_20] [(signed char)0] [i_13] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned char)2))))));
                        var_30 ^= ((/* implicit */int) ((signed char) max((((((/* implicit */int) (unsigned char)124)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32782))))), (((/* implicit */int) ((((/* implicit */_Bool) 15776930311970823652ULL)) || (((/* implicit */_Bool) arr_65 [i_12 + 1] [i_12 + 1]))))))));
                    }
                    var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_48 [i_12 - 2] [i_12] [i_12 - 2]), (arr_48 [i_12 + 1] [i_12] [i_12 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_12 - 1] [i_12 - 2] [i_12 - 2]))))) : (((/* implicit */int) min(((unsigned short)10674), (((/* implicit */unsigned short) (signed char)127)))))));
                }
            } 
        } 
    }
}
