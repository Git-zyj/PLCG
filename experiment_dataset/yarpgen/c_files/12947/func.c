/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12947
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
    var_12 = max((min((var_1), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) (signed char)42))))))), (((/* implicit */unsigned int) var_8)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (593346893) : (((int) (~(((/* implicit */int) (signed char)55)))))));
    var_14 ^= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((int) (+(535374188))));
                    var_16 = ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_7);
}
