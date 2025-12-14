/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114732
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
    var_10 = ((/* implicit */unsigned short) ((short) var_2));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_1] [i_1]))));
                            var_12 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))) | ((-(((/* implicit */int) arr_6 [i_0] [8LL] [i_2] [i_3]))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_1] = min((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))))), ((+(((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (-8779182788806305721LL))))));
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))), ((~(arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_1] [13LL] = ((/* implicit */int) ((long long int) (_Bool)1));
                        var_13 = ((/* implicit */unsigned char) (-(var_6)));
                        arr_20 [8U] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)73)), ((+(((((/* implicit */int) var_0)) << (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))));
                        var_14 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                    }
                } 
            } 
            var_15 *= ((/* implicit */_Bool) 0U);
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_0] = ((int) -4688879899775291986LL);
                            arr_29 [10] [i_1] [i_1] [5ULL] = ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [(unsigned char)9])), (var_9)))) ? (((/* implicit */int) arr_22 [i_7] [i_1] [i_7] [i_1])) : ((+(((/* implicit */int) (short)32767)))))) ^ (((/* implicit */int) ((signed char) min((arr_23 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
            arr_30 [i_1] [(unsigned short)2] [i_1] = ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((((/* implicit */int) (unsigned char)105)) * (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0]))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)51)) : (-2097152)))), ((+(666638257060652461ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_18 [i_0] [i_0] [i_0] [i_10]))), (min((((/* implicit */long long int) arr_22 [i_10] [i_10] [i_0] [i_0])), (var_9))))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) ((unsigned short) arr_7 [i_0] [i_10])))));
            var_18 *= ((/* implicit */_Bool) ((int) max((((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0] [i_10] [(signed char)8]))), ((~(((/* implicit */int) arr_7 [i_0] [i_10])))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_37 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)85))))) ? (13051992761515597183ULL) : (18ULL)));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11] [i_11]))) : (((((/* implicit */_Bool) arr_24 [(_Bool)0] [i_11] [(_Bool)0] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_2 [0ULL] [i_11] [i_0]))))))));
            arr_38 [i_0] [i_0] [i_0] = ((unsigned int) ((short) arr_15 [(unsigned char)8] [i_11]));
        }
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) (((!(((((/* implicit */unsigned long long int) 6986921909417114742LL)) <= (18446744073709551615ULL))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(_Bool)1])) == (arr_46 [(signed char)6] [(signed char)6] [i_12] [11] [i_14])))) : ((-(((((/* implicit */_Bool) arr_24 [(unsigned short)6] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_3))))))));
                        arr_48 [i_14] [(unsigned char)7] [i_13] [i_12] [i_12] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_14])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(short)0])))) & ((-(((/* implicit */int) arr_41 [i_13]))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((short) var_2));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
    {
        arr_51 [i_15] = ((/* implicit */_Bool) arr_24 [i_15] [i_15] [i_15] [(short)8]);
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)96))));
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    {
                        arr_61 [i_15] [i_15] [i_15] [6LL] [i_15] [i_15] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_15]))))));
                        arr_62 [i_15] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [(unsigned short)6] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))));
                        arr_63 [i_15] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((4294967295U) <= (((/* implicit */unsigned int) ((int) 18446744073709551598ULL)))));
                    }
                } 
            } 
        } 
        arr_64 [(unsigned short)2] &= ((/* implicit */signed char) (~((~(((/* implicit */int) (short)4896))))));
        arr_65 [i_15] = (-(((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
    }
    for (signed char i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
    {
        arr_70 [i_19] = ((/* implicit */int) (~(-1LL)));
        arr_71 [i_19] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_67 [i_19] [i_19])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_19] [i_19] [13U] [i_19] [i_19]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -898687312))))))));
        arr_72 [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_6)))));
    }
    for (signed char i_20 = 0; i_20 < 14; i_20 += 3) /* same iter space */
    {
        arr_76 [i_20] = ((/* implicit */unsigned char) (short)16384);
        arr_77 [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(var_6)))))) ? ((-(((((/* implicit */_Bool) 1844360169)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) : (var_6))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_23 [(unsigned short)13] [i_20] [i_20] [i_20]))), (max((var_1), (((/* implicit */long long int) arr_9 [i_20] [4U] [(unsigned short)0] [i_20] [i_20])))))))));
        arr_78 [i_20] |= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_21 [i_20] [i_20])))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (long long int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) ((var_3) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 3) 
                        {
                            {
                                arr_93 [i_20] [i_20] [i_20] [i_23] [i_23] [i_23] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)121))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) max((arr_82 [i_20] [i_21]), (arr_31 [i_20] [i_20] [i_20])))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)771)) ? (10791942860311210936ULL) : (0ULL))))) : (max((((/* implicit */unsigned long long int) (~(-7591787535890164239LL)))), (((unsigned long long int) arr_83 [0] [0] [i_22] [i_23]))))));
                                arr_94 [i_23] = arr_92 [i_20] [i_21] [(short)3] [i_22] [(short)3] [i_24];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_25 = 0; i_25 < 12; i_25 += 3) 
    {
        var_23 = ((/* implicit */int) (+(var_9)));
        arr_98 [i_25] [i_25] = ((/* implicit */unsigned char) arr_34 [i_25] [i_25]);
        var_24 -= ((/* implicit */long long int) arr_23 [i_25] [i_25] [i_25] [13ULL]);
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(arr_66 [i_25] [2ULL]))))));
    }
    /* vectorizable */
    for (short i_26 = 0; i_26 < 16; i_26 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) /* same iter space */
        {
            arr_105 [i_26] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
            var_26 = ((var_6) % (((/* implicit */unsigned long long int) var_5)));
        }
        for (unsigned char i_28 = 0; i_28 < 16; i_28 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) (-(arr_99 [i_26])));
            arr_108 [i_26] [i_26] [i_28] = ((/* implicit */_Bool) var_8);
        }
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - ((+(var_1)))));
    }
}
