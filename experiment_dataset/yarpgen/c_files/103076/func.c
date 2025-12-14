/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103076
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)30901), (((/* implicit */unsigned short) (signed char)113))))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) + (arr_0 [i_0]))) <= (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (((((_Bool)0) ? (arr_0 [i_0]) : (arr_0 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [(signed char)11] [i_0])), ((short)-7041)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) * (((/* implicit */int) (unsigned short)65522))))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)53)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34649))))) ? ((((((_Bool)1) ? (3600028295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ^ (((((/* implicit */_Bool) (unsigned char)241)) ? (4294967286U) : (2295048794U))))) : (var_1)));
}
