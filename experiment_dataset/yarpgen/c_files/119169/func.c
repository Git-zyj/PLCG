/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119169
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
    var_17 += ((/* implicit */unsigned short) 1476986743);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(short)8] = ((signed char) ((((/* implicit */int) ((5324929185362068141ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) == (((/* implicit */int) var_3))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (var_7)))) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (13121814888347483464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32357))))) : (min((((((/* implicit */_Bool) 3985788270U)) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
    } 
}
