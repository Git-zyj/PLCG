/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128405
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) 3301111708U)) : (23LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(993855587U)))) ? (((((/* implicit */_Bool) 993855603U)) ? (((/* implicit */unsigned int) 2147483647)) : (993855619U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))))));
            }
        } 
    } 
}
