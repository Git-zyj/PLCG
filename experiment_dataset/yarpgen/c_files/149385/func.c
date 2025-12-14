/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149385
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_9)), (max((((((/* implicit */_Bool) 2877229670U)) ? (2809999005U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) var_10))))));
    var_17 |= ((/* implicit */short) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */short) ((signed char) (-(((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (short)32767))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */long long int) 4294967295U)) : (arr_5 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) 323621709)))))) : (min((arr_6 [i_1]), (arr_6 [3U])))));
        arr_8 [i_1] |= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) 0U)), (((arr_5 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))) >> (((((/* implicit */int) (short)24043)) - (23993)))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_1]), (arr_5 [i_1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) : (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30268))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_20 |= ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2])) < (((((/* implicit */int) arr_10 [i_2])) / (((int) arr_10 [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? ((+(((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_9))))))), (max((((((/* implicit */_Bool) arr_10 [i_2])) ? (711588598535722642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))), (((/* implicit */unsigned long long int) (signed char)114))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (short)-11000))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (var_9))))) : (((((/* implicit */_Bool) var_14)) ? (711588598535722642ULL) : (4194303ULL))))) : (((/* implicit */unsigned long long int) var_0))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((+(var_8))) - (var_2))))));
}
