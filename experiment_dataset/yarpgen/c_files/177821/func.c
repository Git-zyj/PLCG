/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177821
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (17U))) >> ((((+(((/* implicit */int) (short)28249)))) - (28236))))))));
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((16U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)14590))))) && (arr_0 [i_0])))))))));
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned char) min(((+(((/* implicit */int) var_6)))), (((((/* implicit */int) (unsigned char)18)) ^ (((/* implicit */int) arr_9 [i_2] [(signed char)7] [i_2])))))));
                        var_23 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((var_18), (((/* implicit */int) (short)8411))))) ? (((/* implicit */int) arr_3 [i_2] [i_4])) : (((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_12)))))));
                        var_24 = ((/* implicit */signed char) 35U);
                    }
                } 
            } 
        } 
        arr_15 [i_2] = ((/* implicit */_Bool) var_3);
        var_25 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2]);
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 51U)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_6] [i_2]), ((short)7))))) : (max((var_17), (arr_11 [i_6] [i_6] [i_2] [i_2])))));
            var_27 ^= (-((-(((long long int) 4294967279U)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_21 [i_2] = ((/* implicit */_Bool) var_4);
            var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
            arr_22 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 4294967294U)) && (((/* implicit */_Bool) arr_4 [i_2] [i_7])))))));
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(_Bool)1] [i_7]))) : (17U))))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)171)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-111))));
                        var_31 ^= ((/* implicit */unsigned char) (+(4294967290U)));
                        var_32 -= ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_27 [i_9 - 2] [i_9] [i_9 - 1] [i_9] [i_9 + 3] [i_2])) / (((/* implicit */int) var_3)))));
                        var_33 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((signed char) var_18)))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10])) ? (arr_28 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)-8)))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_35 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10]))) : (min((10U), (5U)))))));
                                var_36 = ((/* implicit */long long int) arr_32 [(signed char)5]);
                                var_37 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_13]))))), (18U)));
                                arr_42 [i_10] [i_12] [i_10] [i_10] [i_14] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */int) (short)2759);
                                var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10]))))) * (((/* implicit */long long int) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (10U))))));
                                var_40 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) min((((/* implicit */signed char) var_16)), (arr_43 [i_10] [i_11] [i_12] [i_15] [(signed char)10])))), (((((/* implicit */_Bool) 3471650084U)) ? (((/* implicit */int) arr_30 [i_15])) : (arr_35 [i_10] [i_11] [i_12] [(_Bool)1]))))), (((/* implicit */int) (signed char)-119))));
                                var_41 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))));
                                arr_48 [i_10] [i_10] [(short)11] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_10] [i_15])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned char) (signed char)117);
}
