/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163763
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_14))));
    var_17 = ((/* implicit */unsigned int) ((unsigned char) var_2));
    var_18 = ((/* implicit */long long int) ((((unsigned long long int) (~(((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_19 -= ((unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((unsigned long long int) arr_1 [i_0]))));
        var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)16)), (65535))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) 65546)) ? (((((3812847489U) & (((/* implicit */unsigned int) arr_0 [i_0])))) | (((/* implicit */unsigned int) arr_1 [i_0])))) : (((unsigned int) ((((/* implicit */int) var_1)) - (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_9 [i_1] [10U] [i_5 - 2]))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 958697845U)) ? (((((/* implicit */_Bool) -65536)) ? (arr_13 [i_1] [i_1] [10U] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) 201776184)) && (((/* implicit */_Bool) 67108863U))))))) : (((/* implicit */int) (unsigned char)8)))))));
                                var_23 += ((int) ((int) arr_11 [2] [i_2] [i_5 - 2] [16]));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_6 [12LL])) % (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    var_25 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                    var_26 *= ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [4U] [i_1]);
                    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_2] [0] [i_3])) ? (((int) var_11)) : (((/* implicit */int) arr_4 [i_1] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_20 [i_1] = ((/* implicit */unsigned int) ((((long long int) arr_0 [i_7])) - (((/* implicit */long long int) ((int) arr_0 [i_1])))));
                    arr_21 [i_1] = ((/* implicit */int) ((long long int) ((short) ((((/* implicit */_Bool) arr_10 [i_1] [i_7] [i_7] [i_7] [i_1] [i_1])) ? (2147221504U) : (var_7)))));
                    var_28 ^= ((((unsigned long long int) arr_10 [i_1] [i_1] [i_6] [i_7] [10U] [14])) ^ (((/* implicit */unsigned long long int) (~(arr_1 [i_1])))));
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) + (((((/* implicit */_Bool) arr_9 [i_1] [5ULL] [i_7])) ? (((/* implicit */unsigned long long int) arr_5 [i_6])) : (3957289589112736353ULL)))));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned int) arr_6 [i_1])), (((/* implicit */unsigned int) ((unsigned char) var_13)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_6] [i_6]))) : (arr_14 [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1264715800)) ? (3100250487492787791LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))))))));
                }
            } 
        } 
        var_31 = max((((((/* implicit */_Bool) arr_13 [i_1] [i_1] [17ULL] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) ^ (var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned int) 402955754)) : (48U)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))));
    }
}
