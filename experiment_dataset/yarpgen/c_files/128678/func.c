/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128678
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >> (((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_7) + (((((/* implicit */_Bool) (short)56)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [6U]))))))), (max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)30529))))) < (min((((/* implicit */unsigned int) var_15)), (arr_0 [i_0])))))) != (((/* implicit */int) var_1))));
                    arr_9 [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [(_Bool)1])), (var_4))))))), (min((-4253360071960551297LL), (((/* implicit */long long int) max((((/* implicit */int) var_13)), (var_3)))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (short)30529))))))))));
}
