/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189257
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
    var_13 = ((/* implicit */signed char) ((unsigned long long int) (signed char)81));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) (~(((((long long int) (unsigned short)65532)) << (((((/* implicit */int) (unsigned short)65531)) - (65512)))))));
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (unsigned short)65532))));
                var_15 += ((/* implicit */_Bool) min((max((arr_6 [i_0 + 3] [i_1]), (((/* implicit */long long int) min((var_7), ((-2147483647 - 1))))))), (((/* implicit */long long int) ((((((/* implicit */int) ((short) (unsigned short)65525))) + (2147483647))) << (((((var_4) + (3713120549355243770LL))) - (4LL))))))));
                arr_8 [i_0 + 1] = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65534))));
}
