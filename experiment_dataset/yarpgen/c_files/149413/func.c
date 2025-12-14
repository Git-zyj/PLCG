/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149413
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((171601608U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_1 - 2]))) : (var_4))))));
                        var_22 -= ((/* implicit */long long int) (unsigned char)15);
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62280)) ? (1091286392U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) -1291067795)) ? (11735385089301856750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_24 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min((var_25), ((unsigned short)16491)));
        arr_12 [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2785242793362936660ULL)) ? (171748488) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_8)) ? (2811423068U) : (((/* implicit */unsigned int) var_3)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((((long long int) 9223372036854775780LL)) >= (((/* implicit */long long int) ((unsigned int) 134217727LL)))))) % (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 2811423068U)) ? (((/* implicit */int) var_1)) : (arr_16 [i_5] [i_5]))) : (((((/* implicit */int) (signed char)19)) << (((((/* implicit */int) arr_18 [i_4] [i_5] [i_4])) + (105)))))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((((/* implicit */int) arr_19 [16ULL] [i_6] [i_7 + 4] [i_6] [16ULL])) % (((/* implicit */int) arr_18 [i_5 - 1] [(short)16] [i_6 - 1])))) : (((((/* implicit */_Bool) (unsigned short)6)) ? (arr_16 [(short)2] [i_7]) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_12)))))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_13 [i_5 + 3]))))))));
                    }
                } 
            } 
        } 
        var_28 -= ((/* implicit */unsigned int) (~(var_4)));
    }
    var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1483544227U))))) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) (short)-27894)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) % (((/* implicit */int) var_2))))))))));
    var_30 = ((/* implicit */short) ((var_3) >= ((+(((/* implicit */int) var_1))))));
}
