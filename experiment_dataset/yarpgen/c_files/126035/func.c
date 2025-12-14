/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126035
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
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
            var_16 = var_3;
            var_17 = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_1]))) - (arr_1 [i_0 + 2]));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    var_19 -= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 3])))), (((/* implicit */int) (!(arr_9 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_20 = (-(((((/* implicit */int) arr_13 [i_0])) * (((/* implicit */int) arr_13 [i_0])))));
                                arr_14 [i_4] [i_2 - 2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 3] [i_5 - 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    var_21 &= ((/* implicit */unsigned long long int) var_11);
                    var_22 = ((/* implicit */int) var_12);
                    var_23 = (-(((/* implicit */int) var_5)));
                    var_24 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_6 - 1] [i_6 + 1] [i_8]))));
                    arr_23 [i_6 + 1] [i_6 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_28 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_6 - 1]), (arr_0 [i_6 + 1])))) ? (min((((/* implicit */unsigned int) var_11)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_6 + 1]) != (arr_0 [i_6 - 1])))))));
            arr_29 [i_6] [6] [i_9] = ((/* implicit */int) var_4);
            /* LoopNest 3 */
            for (short i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                for (unsigned short i_11 = 2; i_11 < 18; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 524160LL)))))));
                            var_26 &= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) max((var_9), (var_7)))), (min((((/* implicit */unsigned short) arr_3 [(short)21] [(unsigned char)11])), (arr_31 [i_6 - 1] [18LL])))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 3141245403U)), (576460752303423487LL)))) ? (((/* implicit */int) arr_19 [i_12])) : ((+(((/* implicit */int) arr_3 [i_9] [i_9]))))))));
                            var_27 = ((/* implicit */int) ((unsigned short) arr_13 [i_10]));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (short)4282))))))) ? (((/* implicit */int) ((unsigned short) min((var_8), (((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(var_7)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            var_29 = ((/* implicit */int) ((unsigned long long int) min((arr_16 [i_6 - 1]), (arr_16 [i_6 - 1]))));
            var_30 ^= ((/* implicit */unsigned long long int) var_3);
            var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(arr_39 [2] [i_13 - 1] [i_6 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_6])))))))) ? (((/* implicit */unsigned long long int) arr_24 [i_6 + 1])) : (var_4)));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_42 [i_14] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_8 [i_14] [i_6 + 1] [i_14] [i_14])))));
            var_32 &= ((/* implicit */short) (~(var_3)));
        }
    }
    var_33 *= ((/* implicit */unsigned int) (+((((-(((/* implicit */int) (signed char)122)))) ^ ((-(var_8)))))));
}
