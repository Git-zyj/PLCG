/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103178
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (var_1))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_3)) == (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))));
            arr_6 [i_1] = ((/* implicit */short) var_1);
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) (((+(arr_4 [i_0] [i_1]))) & (((/* implicit */long long int) ((int) var_8)))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2] [i_2]) * (((var_4) ? (arr_7 [i_2] [i_2] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            var_13 = ((/* implicit */int) max((var_13), (((((((/* implicit */_Bool) (short)-32335)) ? (1033654851) : (((/* implicit */int) var_9)))) >> (((/* implicit */int) arr_13 [i_4] [i_1] [i_2] [i_3] [i_4]))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) var_6))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (2013931245U))))));
                        }
                        for (signed char i_5 = 4; i_5 < 11; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 507886047)) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_14 [i_0] [i_1])) - (69)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_4 [i_6] [i_2]) + (9223372036854775807LL))) >> (((arr_1 [i_0] [i_1]) + (1542016302)))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) % (((/* implicit */int) var_5))))));
                            arr_23 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_2] [i_3] [i_3] [i_0]))) : (arr_4 [i_0] [i_1])))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (arr_21 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)21281)) : (((/* implicit */int) (unsigned char)212))));
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (arr_3 [i_0]))))));
                        }
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (819768257U))) : (((arr_7 [i_1] [i_1] [i_0] [i_1]) + (((/* implicit */unsigned int) var_1)))))))));
        }
        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) var_2);
            arr_30 [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_8]);
        }
        var_19 = (+(((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [6U] [i_0] [i_0] [i_0])) != (((/* implicit */int) var_5))))));
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    {
                        arr_38 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */signed char) var_8);
                        arr_39 [i_0] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) (signed char)31);
                    }
                } 
            } 
            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_9])) ? (((((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)6])) + (-2101257328))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_9]))));
        }
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
        {
            var_21 |= (+(var_10));
            arr_42 [i_12] [i_0] = ((/* implicit */unsigned int) var_2);
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_12] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (arr_7 [i_0] [i_0] [i_0] [(_Bool)1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (signed char)-9)) + (16)))))))))));
        }
    }
    for (unsigned int i_13 = 3; i_13 < 10; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 9; i_14 += 3) 
        {
            for (signed char i_15 = 3; i_15 < 7; i_15 += 3) 
            {
                {
                    arr_51 [i_13] [i_13] [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_24 [i_13] [i_14] [i_14] [i_15] [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) : ((+(-2101257330))))), (((/* implicit */int) var_9))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_13] [(unsigned char)2] [i_14] [i_15])) >> (((arr_25 [i_13] [i_14] [i_15] [(_Bool)1] [i_15]) - (1097411462U)))));
                }
            } 
        } 
        var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min(((~(var_1))), (((/* implicit */int) ((unsigned char) var_11)))))) <= (max((max((((/* implicit */unsigned int) arr_20 [i_13] [i_13] [i_13] [i_13] [(unsigned short)10] [i_13] [i_13])), (arr_34 [i_13] [i_13]))), (((((/* implicit */_Bool) arr_46 [i_13] [i_13] [i_13])) ? (var_3) : (var_3)))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_33 [i_13] [(unsigned short)4] [i_13] [i_13])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (min((((/* implicit */unsigned int) var_6)), (var_3))) : (((unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_13] [(_Bool)1])))));
        arr_52 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) << (((arr_34 [i_13] [i_13]) - (3303627898U)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13])))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            arr_56 [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_13] [i_13] [i_16] [i_16]))));
            arr_57 [i_16] [i_16] [i_13] = ((/* implicit */unsigned char) (((!((!(var_4))))) ? (min((((/* implicit */unsigned int) ((arr_37 [i_13] [2U] [i_16] [i_13]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_37 [i_13] [(signed char)10] [i_13] [i_13]))))), (arr_25 [i_16] [2] [i_13] [2] [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_13] [i_16] [(unsigned short)4])))));
            var_26 = ((/* implicit */short) (((-(((arr_13 [i_13] [(short)0] [i_13] [i_16] [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_7 [i_13] [i_13] [i_16] [10U]))))) & (((/* implicit */unsigned int) min(((~(((/* implicit */int) (signed char)-100)))), (var_10))))));
            var_27 = (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_13] [i_16] [(unsigned short)0])), (arr_17 [i_13] [i_13] [i_16] [i_16])))) : (((((/* implicit */int) var_9)) * (var_10))))));
        }
    }
    var_28 = ((/* implicit */unsigned long long int) min((((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)123)))))));
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (!(var_6))))))) ? (max(((+(((/* implicit */int) var_8)))), (max((((/* implicit */int) var_5)), (var_1))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))))));
}
