/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188505
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_5)) / (var_1)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) 3373536518U)) : (7390302390976826166LL))))) - (((/* implicit */long long int) 921430781U)))))));
                    var_12 = ((/* implicit */_Bool) ((unsigned int) ((long long int) max((var_8), (3373536518U)))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17977446227246895671ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14444)))))) ? (((((/* implicit */int) (unsigned short)21314)) + (((/* implicit */int) (unsigned char)237)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) ? (((((/* implicit */_Bool) 7533947422641745897LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (signed char)119)))) : (((/* implicit */int) (_Bool)0))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)137)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_3)) : (arr_5 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (min((5740576490404489660LL), (((/* implicit */long long int) (_Bool)0)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22101)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 921430769U)) * (18446744073709551594ULL))))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */int) (unsigned char)118);
    }
    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_7) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((var_7) ? (var_6) : (var_6))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) <= (9223372036854775807LL)))))));
    var_16 = (unsigned char)119;
    var_17 = ((/* implicit */_Bool) 758492210);
}
