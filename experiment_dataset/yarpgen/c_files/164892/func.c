/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164892
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) var_4)), (var_2)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!((_Bool)1)));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1694147959U)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_1])))) ? (max((-9074023082360881435LL), (((/* implicit */long long int) 2600819345U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) ((/* implicit */int) ((2600819345U) < (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                }
            } 
        } 
    } 
}
