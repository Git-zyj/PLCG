/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176939
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
        var_17 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_1 [i_0 + 2])), (2712464699U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8804729714908681791LL)) ? (arr_0 [i_0 + 2] [i_0 + 3]) : (((/* implicit */int) (short)-8318)))))));
        var_18 &= ((/* implicit */_Bool) (((-(arr_0 [i_0 + 1] [i_0 + 1]))) - (((-2042285822) + (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1 - 1] [14ULL] [(short)6] [i_3 - 1] [(_Bool)1] [i_5] = ((/* implicit */_Bool) var_2);
                            var_19 += ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_23 [i_1] [(unsigned short)10] [i_3] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((arr_3 [i_1]) / (((/* implicit */long long int) 2042285821)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            arr_24 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_7] [i_1 - 4] = ((/* implicit */int) var_4);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_4))));
                        }
                    } 
                } 
            }
            for (short i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) ((long long int) -2205792217510590517LL));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 17; i_9 += 3) 
                {
                    for (long long int i_10 = 1; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_33 [i_1] [i_2] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_8)), (var_2)))) ^ (((((/* implicit */int) (unsigned char)89)) << (((3356703254U) - (3356703249U))))))));
                            var_22 = ((/* implicit */short) ((arr_4 [i_1]) == (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (var_8)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13888))))))));
                            var_23 = ((/* implicit */_Bool) arr_8 [i_2] [6] [i_9]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_8] [i_1 - 4] [i_1 - 4])) : (arr_4 [5U])))))) : (((((/* implicit */_Bool) (-(arr_6 [i_1 - 3] [i_8] [i_1 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((-(var_3)))))));
                var_25 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) >> (((arr_5 [i_1] [i_1] [i_1 - 2]) - (860615772))))) < (arr_26 [i_1 - 3] [i_1 - 3] [i_8] [(short)10])));
                arr_34 [i_1] [i_8] [i_1] = ((/* implicit */unsigned long long int) 2006362041U);
            }
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 17; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 1; i_13 < 16; i_13 += 1) 
                        {
                            arr_42 [i_1] = ((int) (-(2249600790429696ULL)));
                            arr_43 [i_1 - 2] [i_2] [i_2] [i_12] [i_2] |= ((/* implicit */signed char) (((((_Bool)1) ? (8134582730446288144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_10 [i_1] [i_13]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51646)))))))))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((short) var_7)))));
                    }
                } 
            } 
            arr_44 [5LL] [(short)16] [16ULL] |= ((/* implicit */short) 2593241014U);
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_22 [i_1] [1] [i_1 - 1] [i_1 - 3] [i_1 - 4]), (arr_3 [11ULL]))))))))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 2) 
        {
            var_28 = ((/* implicit */int) ((arr_10 [i_1 - 4] [i_1 - 3]) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            /* LoopSeq 2 */
            for (unsigned char i_15 = 2; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */int) 8134582730446288138ULL);
                var_30 = ((/* implicit */_Bool) 3356703254U);
                arr_51 [i_1] [i_1] [i_15 - 1] [i_15 + 2] = ((((/* implicit */int) arr_29 [i_1] [i_1])) <= (((/* implicit */int) var_11)));
            }
            for (unsigned char i_16 = 2; i_16 < 15; i_16 += 4) /* same iter space */
            {
                var_31 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15))))));
                arr_54 [i_1] [i_14 + 4] [i_14] [i_16 - 1] = ((/* implicit */unsigned short) ((unsigned int) var_7));
                var_32 = ((/* implicit */unsigned char) ((signed char) var_0));
            }
            var_33 |= ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) ? ((-(var_12))) : (arr_38 [(_Bool)1] [i_14 - 1] [(unsigned char)16] [i_14] [i_14 - 2] [i_1 - 3])));
        }
        arr_55 [i_1] = ((/* implicit */_Bool) arr_30 [i_1 + 1] [i_1] [i_1 - 3]);
    }
    /* LoopNest 3 */
    for (unsigned char i_17 = 4; i_17 < 21; i_17 += 1) 
    {
        for (short i_18 = 1; i_18 < 21; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                {
                    arr_63 [i_17] [1] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_7)), (var_15)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_56 [i_17]), (arr_56 [i_17])))) ? ((+(var_13))) : (((932550086U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                    var_34 += ((/* implicit */short) ((((((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1)))) << ((((+(arr_59 [i_18]))) - (4053133520U))))) / (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
}
