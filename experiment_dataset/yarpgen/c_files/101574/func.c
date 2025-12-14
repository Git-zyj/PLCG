/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101574
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 1] [(unsigned char)9] [i_0] &= ((/* implicit */int) (_Bool)1);
                var_10 &= ((unsigned char) (unsigned short)31821);
            }
        } 
    } 
    var_11 &= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (unsigned short)65526))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)105)) && (((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-106)), (var_5)))))));
    var_12 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)24849)))) >= (((/* implicit */int) (signed char)(-127 - 1)))));
}
