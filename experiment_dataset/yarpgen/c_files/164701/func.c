/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164701
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) 4760244088632935005LL);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (min((((/* implicit */unsigned short) var_14)), ((unsigned short)54207)))))) ? ((+(((337579552609097048LL) + (((/* implicit */long long int) 1635558286)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398509481984ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (max((var_2), (337579552609097048LL))) : (max((337579552609097057LL), (((/* implicit */long long int) var_5)))))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0 + 1] [i_1 + 1]) : (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (8589934576ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (_Bool)1);
    var_19 = ((/* implicit */unsigned int) (short)12794);
    var_20 = ((/* implicit */unsigned int) min((var_20), (var_8)));
}
