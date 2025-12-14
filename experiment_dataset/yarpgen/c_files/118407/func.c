/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118407
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (max((-2544447654114019006LL), (arr_2 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (short)-5)))))), (min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)7)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned int) var_12)) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)117)))) : ((+(var_12)))))));
        var_15 ^= min((7276858351100493062LL), (((/* implicit */long long int) var_1)));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((signed char) arr_4 [i_1] [(short)2]))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)7))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_0)))))));
        var_17 = ((max((var_4), (((/* implicit */long long int) arr_4 [i_1] [i_1])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (5585292399143871302LL)))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) -7276858351100493062LL)))))))));
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */unsigned long long int) max((7276858351100493062LL), (((/* implicit */long long int) var_10))))) : (6364173167283841588ULL)))));
    }
}
