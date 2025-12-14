/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132308
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_4)))))) & (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)89))))), (var_3))))));
    var_21 = ((/* implicit */long long int) (unsigned short)1722);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */int) ((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        var_23 = max((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -4))))) >= (((/* implicit */int) min(((short)32764), (((/* implicit */short) (signed char)116)))))))));
        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        arr_4 [12ULL] = ((((((/* implicit */long long int) 3)) >= (var_8))) ? (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_3 [i_1 + 1] [i_1 + 1]));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_0)) + (83))))))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) <= (((/* implicit */int) arr_7 [i_2])))))))) ^ (min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [3U] [i_2]))) : (var_12)))))));
        arr_8 [(_Bool)1] &= ((/* implicit */short) (-(min((12336299383082201488ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        var_27 = min((((/* implicit */int) var_19)), (max((((/* implicit */int) (unsigned short)12)), (((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_6 [i_2] [i_2])))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 4; i_4 < 20; i_4 += 3) 
            {
                {
                    var_28 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_2]))) | (((unsigned long long int) var_17)))) > (((/* implicit */unsigned long long int) ((((3314919687367382214LL) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))))) >> (((((/* implicit */int) ((short) arr_9 [i_2] [i_2] [i_2]))) + (24602))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        var_29 ^= ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1]))) : (4119106186U));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((arr_12 [i_5]) != (arr_12 [i_2])))) : (((/* implicit */int) arr_11 [i_2] [i_4 - 1] [i_5])))))));
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-1))));
                    }
                    arr_16 [(unsigned short)1] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [9LL] [i_3]))) : (arr_15 [(unsigned short)3] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1964481627883774473LL)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) (signed char)-55)) ? (arr_15 [i_2] [(unsigned char)2]) : (((/* implicit */long long int) 0U))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-123))))), (((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((((/* implicit */long long int) ((unsigned int) (unsigned short)2))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))) | (-7148590850373057509LL)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [15LL] [i_6])) ? (arr_10 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
        arr_19 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_6] [(short)20])) << (((((/* implicit */int) arr_2 [i_6] [12LL])) - (33)))));
        arr_20 [i_6] &= ((/* implicit */short) var_6);
        arr_21 [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_6] [i_6] [1] [i_6] [i_6] [i_6]))));
    }
}
