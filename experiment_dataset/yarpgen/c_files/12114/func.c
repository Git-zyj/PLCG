/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12114
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 -= min((min((((/* implicit */unsigned long long int) -4662589982484535025LL)), (arr_0 [i_0]))), ((~(arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(min((var_10), (4662589982484535024LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */short) (+(arr_1 [i_3 + 1])));
                            var_15 ^= ((/* implicit */_Bool) var_0);
                            arr_17 [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -444545900)) ? (var_6) : (((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_3]))));
                        }
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_4] [i_4] [i_6 - 1] [i_3] [i_2] = ((/* implicit */_Bool) (+(8ULL)));
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) var_2);
                        }
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (unsigned char)60))));
                        arr_23 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (12ULL) : (15651937929087458630ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((~(arr_1 [i_1])))));
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_3] = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                        arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) 4662589982484535027LL);
                    }
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        arr_32 [i_1] [i_2] [i_3] [i_3] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149))));
                        var_19 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_2] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 2; i_9 < 19; i_9 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-24))));
                            arr_35 [i_1] [i_2] [i_8] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3 + 1] [i_8] [i_9 + 1]))));
                        }
                        for (long long int i_10 = 2; i_10 < 19; i_10 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_3 - 1] [i_3] [i_3]))));
                            arr_38 [i_1] [i_1] [i_3 + 1] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned long long int) var_0));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_10] [i_8] [i_3 + 1] [i_2] [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_10]))));
                        }
                        for (long long int i_11 = 2; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_23 = (~((-(65536))));
                            arr_41 [i_1] [i_2] [i_3 - 1] [i_8] [i_11] = ((/* implicit */unsigned long long int) var_1);
                            arr_42 [i_3] [i_3] [i_3] [i_3] = (~(((/* implicit */int) var_7)));
                            arr_43 [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                            arr_44 [i_1] [i_2] [i_1] [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)18))))));
                        }
                        var_24 ^= ((/* implicit */long long int) ((_Bool) var_11));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) arr_9 [i_1])))))));
        arr_45 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)12943))));
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        var_26 = ((/* implicit */_Bool) var_0);
        arr_50 [i_12] = min((((/* implicit */unsigned long long int) (~(arr_47 [i_12])))), ((((!(((/* implicit */_Bool) arr_49 [i_12] [i_12])))) ? (max((((/* implicit */unsigned long long int) arr_49 [i_12] [i_12])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))))));
        var_27 = ((/* implicit */int) ((signed char) ((int) (~(((/* implicit */int) (signed char)-24))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 3) 
        {
            arr_53 [i_12] [i_12] = ((/* implicit */_Bool) min((((arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1]) ? (((/* implicit */int) arr_52 [i_13 + 1] [i_13 - 1] [i_13 + 1])) : (((/* implicit */int) arr_52 [i_13 - 1] [i_13 + 2] [i_13 - 1])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))), (arr_47 [i_13])))));
            var_28 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) min(((signed char)0), ((signed char)6))))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (short)12933))))))));
        }
        for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
            var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-8230)))))));
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_47 [i_12]), (((int) 2692802767473800553ULL)))))));
        }
        var_33 = ((/* implicit */int) 3831659145538299479ULL);
    }
    var_34 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) : (var_10))))), (9223372036854775791LL)));
    /* LoopSeq 2 */
    for (long long int i_15 = 1; i_15 < 18; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                {
                    var_35 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_56 [i_15] [i_15] [i_15 - 1]));
                    var_36 *= ((/* implicit */signed char) max((max((arr_30 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 - 1]), (arr_30 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 + 1]))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned char) (signed char)-36)))))));
                    arr_68 [i_15] [i_16] [i_16] = ((/* implicit */signed char) arr_58 [i_15] [i_15]);
                }
            } 
        } 
        var_37 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_49 [i_15 - 1] [i_15 - 1])))), (((/* implicit */int) max((arr_9 [i_15]), (var_4))))));
        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15]))))), ((-(var_3))))))));
    }
    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        var_39 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_7 [i_18])))));
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                for (unsigned int i_21 = 3; i_21 < 10; i_21 += 1) 
                {
                    {
                        arr_79 [i_21] [i_20] [i_19] = ((/* implicit */signed char) var_3);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 1) 
                        {
                            arr_83 [i_19] [i_22] [i_21] [i_20] [i_19] [i_19] |= ((int) var_1);
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_3))));
                            var_41 = ((/* implicit */short) ((signed char) var_3));
                            arr_84 [i_19] [i_19] [i_20] [i_21] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_21 - 1] [i_22] [i_21] [i_21 + 2] [i_22] [i_19]))));
                        }
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))) ? (arr_30 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (min((var_0), (((/* implicit */unsigned long long int) var_5)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            arr_87 [i_18] [i_18] = ((/* implicit */_Bool) (signed char)-64);
            var_43 -= (-(((/* implicit */int) var_4)));
        }
    }
}
