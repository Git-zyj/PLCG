/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139778
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
    var_11 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)5))));
    var_12 = ((/* implicit */short) min(((unsigned char)192), (((unsigned char) (~(((/* implicit */int) (unsigned char)50)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)36808)) && (((/* implicit */_Bool) (signed char)-113))))), ((unsigned char)202))))));
                var_14 |= ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned char) ((long long int) (~((~(var_1))))));
}
