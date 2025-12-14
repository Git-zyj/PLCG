/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175900
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
    var_12 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))) >> (((((var_10) >> (((/* implicit */int) (_Bool)1)))) - (4218998996468683550LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_8) - (2050417221U)))))) == (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */_Bool) ((arr_2 [i_0]) % (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) : (arr_2 [i_0])))));
        var_14 = ((/* implicit */unsigned int) max((var_14), ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(var_0))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_18 [i_4] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [(signed char)4] [i_2] [(_Bool)1] [i_4]))))) | (arr_3 [i_1 + 1] [i_1 + 1])));
                        arr_19 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((signed char) var_2))) : (arr_6 [i_1 - 1] [i_3])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_6 - 1] [i_5])) ? (arr_11 [(_Bool)1] [i_6 - 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)17] [i_6 - 1])))));
                        arr_24 [i_2] [i_6] = arr_17 [i_6] [i_5] [i_2] [i_1];
                        arr_25 [6LL] [i_2] [i_2] [i_2] [i_2] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1278915690U)) / (arr_16 [i_1] [i_1] [(short)10] [(signed char)3] [i_6])))) ? (((/* implicit */int) ((_Bool) arr_4 [i_1]))) : (((var_5) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (arr_6 [(short)1] [(_Bool)1])))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41))))) | (((/* implicit */int) arr_23 [i_1 + 1] [i_1 - 1])))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 4 */
    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        arr_28 [i_7 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1512)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) | (var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1023)))))));
        var_18 ^= ((/* implicit */signed char) arr_3 [i_7] [i_7]);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(arr_8 [4ULL] [i_8] [i_8])))));
        arr_32 [i_8] = ((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8] [i_8]);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(-3166884594435200463LL))))));
        /* LoopSeq 2 */
        for (signed char i_10 = 4; i_10 < 20; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((var_4) << (((((((/* implicit */_Bool) 2870096550U)) ? (((/* implicit */int) arr_38 [i_9] [i_10 - 1] [i_11] [i_9])) : (((/* implicit */int) arr_33 [i_11] [i_10])))) + (32111))))))));
                        arr_42 [i_10] = ((/* implicit */short) var_7);
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3242768760446031295ULL))));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_9] [i_10 - 4] [i_10 - 3]))))));
            arr_43 [i_10] [i_10] = ((((/* implicit */_Bool) arr_40 [i_10] [i_10 - 4] [i_10] [20U] [i_10 - 2])) ? (arr_35 [i_10] [i_10 - 3] [i_10]) : (arr_35 [i_10] [i_9] [i_10]));
        }
        for (unsigned short i_13 = 3; i_13 < 19; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_14 = 2; i_14 < 19; i_14 += 1) 
            {
                for (signed char i_15 = 3; i_15 < 19; i_15 += 2) 
                {
                    for (unsigned short i_16 = 2; i_16 < 20; i_16 += 2) 
                    {
                        {
                            arr_58 [i_15] [i_13] [i_14 - 1] [i_15] [i_13] [7ULL] [17U] = ((/* implicit */unsigned char) ((signed char) (~(arr_54 [(unsigned short)1] [(unsigned char)1] [i_15] [i_14] [i_15] [i_16]))));
                            arr_59 [i_15] [18LL] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_40 [i_15] [12U] [i_14 - 1] [i_14 - 1] [i_14])))) ? (((/* implicit */int) arr_38 [i_15] [i_14 + 2] [i_13 - 3] [i_15])) : (((/* implicit */int) arr_44 [(_Bool)1] [i_13]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 2; i_17 < 17; i_17 += 1) 
            {
                for (signed char i_18 = 1; i_18 < 20; i_18 += 4) 
                {
                    {
                        arr_64 [(unsigned short)15] = ((/* implicit */signed char) ((int) (-(var_8))));
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_9] [i_18 - 1] [i_17 + 2] [(signed char)12]))) % (arr_54 [i_18] [(unsigned short)20] [i_9] [i_9] [i_13] [(unsigned short)16]))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) -1073741824)) || ((((_Bool)1) || (((/* implicit */_Bool) (signed char)106)))))))));
                            var_25 = arr_34 [i_9];
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_70 [i_20] [(short)4] [i_18 - 1] [i_20] = arr_63 [9LL] [i_13] [i_17 + 1] [i_18] [i_20] [i_20];
                            var_26 = ((/* implicit */_Bool) max((var_26), (((var_2) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1)))))))));
                        }
                        var_27 = ((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned char)78))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            for (signed char i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                for (unsigned short i_23 = 1; i_23 < 20; i_23 += 3) 
                {
                    {
                        arr_78 [i_21] [i_21] [i_21] [i_21] [(short)1] = ((_Bool) arr_50 [i_21] [i_23] [i_23 - 1] [i_21]);
                        /* LoopSeq 1 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            arr_81 [i_9] [i_21] [i_9] [i_23] [(signed char)4] [i_24] [i_22] &= ((/* implicit */_Bool) arr_73 [i_24] [i_21]);
                            arr_82 [5ULL] [i_21] [12U] [i_24] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)3)))) / (((/* implicit */int) var_9))));
                        }
                        var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_9] [(_Bool)1] [i_22] [i_22] [i_9] [i_23]))))) ? ((~(((/* implicit */int) arr_38 [i_9] [i_21] [i_22] [i_9])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)19)) >= (((/* implicit */int) var_7)))))));
                        arr_83 [i_21] = (i_21 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) / (3433552272U))) << (((((arr_68 [i_9] [(unsigned short)14] [i_21] [i_23] [i_21]) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [(short)7] [i_21] [i_21] [i_21] [i_21]))))) + (5852398891896526001LL)))))) : (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) / (3433552272U))) << (((((((arr_68 [i_9] [(unsigned short)14] [i_21] [i_23] [i_21]) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [(short)7] [i_21] [i_21] [i_21] [i_21]))))) + (5852398891896526001LL))) - (5588544487266651520LL))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_25 = 0; i_25 < 22; i_25 += 3) 
    {
        arr_87 [(short)9] [i_25] = arr_86 [(_Bool)1];
        var_29 = ((/* implicit */unsigned short) (((+(var_8))) + (((arr_86 [i_25]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_25]))) : (1424870758U)))));
    }
    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (18028984485742825863ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (391873130U))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))))) < (((/* implicit */unsigned int) (((~(((/* implicit */int) var_5)))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_27 = 0; i_27 < 23; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 4) 
            {
                for (unsigned int i_29 = 1; i_29 < 22; i_29 += 2) 
                {
                    {
                        arr_98 [i_26] [i_27] [i_28] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_91 [i_27] [i_28] [i_29])) + (((/* implicit */int) var_5))))) / (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_29] [i_28] [i_27] [i_26]))) : (var_4)))));
                        var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_92 [i_29] [i_28] [i_27] [i_26])) : (((/* implicit */int) var_3)))) / (((/* implicit */int) var_9))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_93 [(_Bool)1] [i_26]))))) ? (arr_89 [0] [i_27]) : (((/* implicit */unsigned long long int) (-(var_2)))))))));
                        var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_92 [i_29 - 1] [i_29] [i_29 + 1] [i_29 - 1])) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_88 [i_27])) - (35971))))) : (((((/* implicit */_Bool) arr_94 [i_26] [14U])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_5))))));
                        var_34 = ((/* implicit */_Bool) (unsigned char)24);
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)0))))));
    }
    /* vectorizable */
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-(((((/* implicit */int) arr_69 [(unsigned char)4])) % (((/* implicit */int) (unsigned char)38)))))))));
        var_37 = ((/* implicit */unsigned long long int) (((+(-5579696608103341532LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_30])))));
        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14763193577927297476ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (2ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)119))))));
    }
}
