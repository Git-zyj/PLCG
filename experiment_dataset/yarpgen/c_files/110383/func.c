/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110383
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
    var_14 = ((/* implicit */unsigned short) (-(var_9)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)-10909))))));
            var_16 += ((/* implicit */unsigned short) 248670625U);
            arr_5 [i_0] = ((/* implicit */unsigned int) ((((arr_3 [i_1 + 2] [i_1] [i_0]) != (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 397591367))) : (7088922800514335814ULL)));
        }
        for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned int) (unsigned char)94)), (arr_6 [(unsigned char)2] [i_2] [i_2]))), (((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned short)6] [i_2]))) : (((/* implicit */int) var_1)))))));
            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) max(((~(-8158878779830686983LL))), (((/* implicit */long long int) min((arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1]), (4285026504U))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1]))) & (arr_6 [i_0] [i_0] [i_0])));
            var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned char) var_1)), (arr_10 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (248670625U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)13)))))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 6; i_4 += 1) 
        {
            var_22 ^= ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_4]) ? (((/* implicit */int) arr_4 [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_4 + 1] [i_4]))));
            var_23 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_8 [i_0])) & (((/* implicit */int) arr_10 [i_0] [i_0]))))));
        }
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_7) | (((/* implicit */long long int) 1130882758U)))), ((-(var_7)))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_0])))) - (arr_3 [i_0] [i_0] [i_0])))) : (min((9007199252643840ULL), (((/* implicit */unsigned long long int) var_11))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_5] [i_6])))))));
            arr_19 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (1523047344U) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_5]))) : ((-(arr_17 [9LL] [i_6] [i_6])))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_26 -= ((/* implicit */_Bool) arr_22 [(_Bool)1] [i_7] [i_8]);
                        arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (((~(arr_16 [i_5]))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_22 [i_8] [i_6] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [(unsigned short)18] [i_7] [i_8]))) : (((2046994556U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_28 = ((/* implicit */int) (-(2160000035U)));
                        arr_33 [i_5] [i_5] [i_5] [i_10] [i_10] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_13)))));
                        var_29 *= ((/* implicit */signed char) (-(arr_22 [14ULL] [i_10] [14ULL])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 1; i_13 < 17; i_13 += 3) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) -1826117663);
                            var_31 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_32 [(_Bool)1] [i_13] [i_12] [(_Bool)1] [10LL] [i_5]))))));
                        }
                    } 
                } 
            } 
        }
        var_32 |= ((/* implicit */unsigned short) 4046296693U);
        var_33 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_23 [(unsigned short)4])))))));
    }
    /* vectorizable */
    for (long long int i_15 = 3; i_15 < 17; i_15 += 3) 
    {
        var_34 = ((/* implicit */unsigned short) 16819662232349085430ULL);
        var_35 -= ((/* implicit */int) arr_40 [8]);
        var_36 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned short)20711))));
    }
}
