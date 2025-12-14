/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175320
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
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))) % (max((max((var_17), (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                var_20 &= ((((/* implicit */_Bool) ((arr_2 [i_1 + 1]) & (max((arr_0 [(short)2]), (485811252)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1 + 4]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 3416059792U)))))))));
                var_21 = ((/* implicit */long long int) ((((unsigned int) 0U)) << (((/* implicit */int) ((17646094981287106844ULL) != (17646094981287106844ULL))))));
            }
        } 
    } 
}
