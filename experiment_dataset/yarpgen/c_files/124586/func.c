/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124586
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11494625374303024038ULL)) ? (2147483648U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))));
                var_19 = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_12)), (((min((var_6), (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-1)))))))));
}
