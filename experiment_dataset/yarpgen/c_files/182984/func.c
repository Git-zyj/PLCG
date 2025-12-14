/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182984
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
    var_12 -= ((/* implicit */long long int) var_8);
    var_13 = ((/* implicit */short) 4095ULL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((2567742697U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-8716)))));
                    var_14 = ((/* implicit */int) (~((-(((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))));
                        arr_12 [i_2] [20ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1727224598U)) ? (((unsigned int) min((var_9), (((/* implicit */long long int) 3855957105U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_8)))))));
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) ((614749797U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        arr_13 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) 18446744073709547526ULL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 549218942976LL)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (short)19047))))))) : ((+(-7790389035637309074LL)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_16 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_5]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) + (arr_19 [i_0] [i_4] [i_5] [i_5])))))), ((~(arr_4 [i_5] [i_0]))));
                    arr_20 [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) (short)14236)) ? (-1048094721) : (1419322935));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_7] [i_6] = ((/* implicit */_Bool) arr_0 [i_6]);
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_9)) > (arr_4 [i_9] [i_8]))));
                                var_18 -= ((/* implicit */signed char) (~(((arr_10 [i_7] [i_8] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                                arr_36 [i_6] [i_6] [i_8] [i_6] [i_10] = ((/* implicit */short) (((~(arr_34 [i_10] [i_6] [i_8] [i_6] [i_6]))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_6 + 1] [i_8])))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_4))));
                                arr_37 [i_9] &= ((((/* implicit */_Bool) 614749797U)) ? (arr_17 [i_7] [i_9] [i_10]) : (((/* implicit */int) var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_6 + 1] [i_6 + 2] [0U] [i_6 + 1] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) : (arr_32 [i_6 - 1] [i_6 + 1] [(_Bool)1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 3])));
        /* LoopSeq 3 */
        for (long long int i_11 = 4; i_11 < 12; i_11 += 2) /* same iter space */
        {
            arr_42 [i_6] = ((/* implicit */long long int) ((13148873540185555333ULL) > (((/* implicit */unsigned long long int) 2135930758U))));
            arr_43 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((32111762) > (((/* implicit */int) (short)12624)))))) > (arr_16 [i_6 + 3] [i_11] [16U])));
        }
        for (long long int i_12 = 4; i_12 < 12; i_12 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_30 [i_6] [i_6 - 1] [4LL] [11ULL] [i_12] [4LL]))));
            /* LoopNest 3 */
            for (short i_13 = 1; i_13 < 9; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 12; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((unsigned int) arr_10 [i_6] [i_14 - 1] [i_14]));
                            arr_56 [i_13] [i_12] [i_13] [i_12] [i_12] [i_14] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 + 2])) ? (var_10) : (var_2)))) ? (((/* implicit */int) (short)12624)) : (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_55 [i_6] [i_12] [i_13] [5]))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 413987404U)) > (18446744073709547520ULL)));
                            var_24 = ((/* implicit */int) (signed char)115);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_67 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_27 [i_6] [i_16] [i_17]))))) ? (((((/* implicit */_Bool) var_0)) ? (-549218942976LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_6] [i_16] [i_18] [i_19]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-15195)))))))));
                            arr_68 [i_19] [i_6] [i_17] [i_6] [i_6 + 1] = ((/* implicit */unsigned int) 2373708589322790464ULL);
                            arr_69 [i_6 - 1] [i_6] [i_17] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6]))) > (arr_51 [i_6] [i_6 + 1] [i_6] [i_6] [i_6] [i_19])));
                            arr_70 [i_18] [i_16] &= ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            } 
            arr_71 [i_6] = (-((+(4132104625U))));
            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (arr_51 [i_6] [(_Bool)1] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_6] [i_6] [i_16] [i_16])))))));
        }
    }
}
