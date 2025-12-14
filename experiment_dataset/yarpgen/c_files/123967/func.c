/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123967
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
    var_10 = ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) var_8)), (var_0))))) * (((((/* implicit */int) var_2)) ^ ((-(((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_3))))) ? (min((((/* implicit */unsigned long long int) var_6)), ((~(var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = (((~(arr_9 [i_1]))) / ((~(arr_9 [i_0]))));
                                arr_13 [i_0] = ((/* implicit */signed char) (!(((_Bool) arr_11 [i_4] [i_3] [i_2] [i_2] [i_1] [7LL]))));
                                arr_14 [i_0] = ((/* implicit */int) (!(((18446744073709551615ULL) != (min((0ULL), (0ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (int i_7 = 1; i_7 < 6; i_7 += 2) 
                        {
                            {
                                arr_23 [2U] [i_1] [i_0] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [3LL])), (var_0)))) ? (max((arr_5 [i_7] [i_6] [i_0]), (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_7 [i_0] [0ULL] [0ULL] [i_0])) ? (var_7) : (((/* implicit */int) var_8))))))) ^ (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_8))))))))));
                                arr_24 [i_0] [3ULL] [i_5] [i_6] [3ULL] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (-(7ULL)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((0ULL) >> (((max((0ULL), (15113304799482156372ULL))) - (15113304799482156370ULL))))), (((/* implicit */unsigned long long int) arr_22 [i_0] [0] [i_5] [i_8] [i_5]))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : ((+(arr_28 [i_5])))))) * (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_7)))), (min((3834273109U), (((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_5] [i_8] [i_8]))))))));
                        arr_30 [i_8] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */int) var_9);
                    }
                    for (long long int i_9 = 3; i_9 < 7; i_9 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) arr_33 [i_9] [i_5] [i_0] [i_0] [i_0] [i_0]);
                        var_16 = ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)192))));
                    }
                    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1))))) || (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))) ? (max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_5])), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_18 = ((/* implicit */int) ((signed char) 490129853434568005LL));
                    arr_37 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((((/* implicit */unsigned long long int) -7581892644613866652LL)) * (11953022521327740455ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_35 [i_0] [i_1] [i_1] [i_0]) : (((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                arr_42 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((var_0) >= (min((((/* implicit */unsigned int) var_1)), (arr_36 [i_0] [1U] [i_0])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)62874)) != (((/* implicit */int) (unsigned char)157)))))) : (arr_11 [i_0] [(_Bool)1] [i_0] [i_11] [i_11] [i_12])))));
                                arr_43 [i_0] [i_0] [i_1] [i_0] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_10] [i_11] [i_11]))));
                            }
                        } 
                    } 
                    arr_44 [i_10] [i_0] [i_10] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((int) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        var_19 &= ((/* implicit */int) min(((+(((arr_34 [i_0] [i_0] [i_0] [(unsigned short)5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_8))));
                        arr_48 [i_0] [i_1] [0LL] [i_0] = ((/* implicit */unsigned short) min((max((max((((/* implicit */unsigned long long int) -779396427)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) min(((unsigned short)32666), (((/* implicit */unsigned short) (short)-842)))))));
                    }
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-9223372036854775807LL - 1LL))))))));
}
