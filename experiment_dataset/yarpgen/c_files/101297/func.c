/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101297
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)4095))));
        arr_5 [(_Bool)0] [6U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [10])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(short)4] [(short)4]))))) : (((((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)8]))) : (arr_2 [(_Bool)1]))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_6 [i_0] = ((/* implicit */short) max((min((arr_0 [i_0 - 2] [i_0]), (arr_0 [i_0 - 2] [i_0]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0])) > (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */int) arr_2 [(_Bool)1]);
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((arr_7 [(unsigned short)9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [(unsigned short)0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (~(1626843472))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2]))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) (~(13297741578909182010ULL)));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_20 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) : (5350613270645723718LL)));
                        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        var_15 = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (4294967295U)))) ? (((unsigned long long int) var_0)) : (((6878174729593081175ULL) >> (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_31 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4076))) : (arr_16 [i_6] [i_8]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -1870173300)) : (31U)))))));
                    var_16 = ((/* implicit */unsigned short) max((min(((((_Bool)1) ? (((/* implicit */unsigned long long int) 4101166)) : (arr_18 [i_6] [i_7]))), (((/* implicit */unsigned long long int) (+(arr_15 [i_6])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                }
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) (-((-(((((/* implicit */unsigned long long int) arr_20 [i_8] [i_8] [i_8] [i_8])) / (11568569344116470436ULL)))))));
                    arr_34 [i_6] [18U] [i_6] [i_8] = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) max((arr_32 [i_8] [i_8] [i_8] [i_10]), (arr_32 [i_8] [i_8] [i_7] [i_8]))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_37 [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (4294967281U)));
                    var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) 2251799813685247LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_33 [i_7] [i_7]))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))) >= (6878174729593081170ULL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) arr_22 [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (3263668790U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2331))) + (18445618173802708992ULL)))))));
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_7] [i_7] [i_8]))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_12]) >> ((+(((/* implicit */int) (unsigned char)20))))))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (min(((-(arr_18 [i_6] [i_7]))), (((/* implicit */unsigned long long int) min(((short)-8654), (((/* implicit */short) var_5)))))))));
                }
                for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    arr_45 [i_8] [2U] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_8] [i_6] [i_7] [i_6] [i_8])) ? ((~(((unsigned int) var_4)))) : (((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_10 [i_6])))) ? (((((/* implicit */_Bool) var_4)) ? (1031298520U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))) : (((/* implicit */unsigned int) 509867446))))));
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_23 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)23708)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (3578608978U)))) : (min((16816394069653919859ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        var_24 = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [i_6] [(unsigned char)14])))));
                        arr_48 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((-4399408724155243576LL) / (((/* implicit */long long int) 2102346228))));
                    }
                }
            }
            arr_49 [i_6] = ((/* implicit */unsigned char) max((11568569344116470440ULL), (((/* implicit */unsigned long long int) (signed char)-63))));
        }
        for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            var_25 = min((min((min((var_3), (((/* implicit */long long int) arr_20 [i_6] [i_15] [i_6] [i_6])))), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (6878174729593081187ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)0), (arr_32 [i_15] [i_6] [i_15] [22]))))) : (arr_10 [i_6])))));
            arr_53 [i_6] [(unsigned char)9] [9U] = ((/* implicit */signed char) var_4);
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_24 [3LL]))) % ((-(((/* implicit */int) arr_41 [i_15] [i_6] [(short)7] [i_6] [i_6]))))))) ? (((((/* implicit */_Bool) (+(arr_47 [i_6] [i_6] [1LL] [i_6] [i_15] [i_15] [i_15])))) ? (max((11568569344116470436ULL), (((/* implicit */unsigned long long int) arr_35 [2] [i_15] [i_6] [i_15])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_30 [i_15])), (arr_44 [i_6] [(unsigned char)22] [i_6] [i_15] [i_15])))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [(short)17] [i_15] [i_6] [(_Bool)1] [i_6]))) > (-249063388192686644LL)))))))));
            var_27 &= (~((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6] [i_6] [i_15] [i_6] [i_15] [i_15]))) >= (arr_47 [i_6] [i_6] [16LL] [i_6] [8] [i_15] [i_15])))))));
        }
        arr_54 [17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25701)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) >= (((/* implicit */int) (signed char)-20)))))) : (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_6]) : (arr_44 [i_6] [(signed char)12] [(signed char)12] [i_6] [(short)8])))))) ? (((((/* implicit */_Bool) (unsigned short)63216)) ? (1031298520U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)37))))) : (min((min((arr_40 [i_6] [i_6] [(signed char)14] [2]), (((/* implicit */unsigned int) arr_24 [i_6])))), (((/* implicit */unsigned int) (signed char)-33)))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((1755960631U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (var_8) : (var_8)));
}
