/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154181
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
    var_12 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (((unsigned short) -529895097))))), (((unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 15080841005954961674ULL))));
                    var_14 = ((/* implicit */long long int) -1758626212);
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */int) (-(((min((((/* implicit */unsigned long long int) var_7)), (var_5))) >> (((((/* implicit */int) ((unsigned char) var_6))) - (194)))))));
}
