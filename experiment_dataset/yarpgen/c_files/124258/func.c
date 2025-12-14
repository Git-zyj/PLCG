/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124258
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_6)) == (-848706617))), ((!(((/* implicit */_Bool) arr_3 [i_0 + 2]))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2516))))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18229))) : (16ULL)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((14066113157101258660ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) (_Bool)1))));
}
