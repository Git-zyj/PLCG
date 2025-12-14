/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164712
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
    var_16 = ((/* implicit */short) var_12);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3154339088095858740LL)) && (((/* implicit */_Bool) -3154339088095858728LL)))) ? (var_5) : (((((/* implicit */int) var_11)) | (var_14)))))) : (((((/* implicit */_Bool) (-(4294967275U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_0), (((/* implicit */unsigned long long int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50869)) ? (-3154339088095858745LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))));
                    var_19 = min(((unsigned char)77), ((unsigned char)31));
                }
            } 
        } 
    } 
}
