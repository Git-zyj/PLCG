/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159300
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
    var_10 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned char)0)) ? ((-2147483647 - 1)) : (var_7))) + (((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (((/* implicit */int) (signed char)-74)))))), (var_7)));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((~(var_1))) : (var_6)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (-(var_3)))) ? (((2132310478) << (((((/* implicit */int) (unsigned short)22769)) - (22769))))) : (var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (10341455130263370323ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (395411079) : (2147483647))))))) : (((int) arr_3 [i_0]))));
                var_13 &= ((int) (((~(((/* implicit */int) arr_3 [(unsigned char)2])))) | (((/* implicit */int) ((short) 0)))));
                var_14 = arr_1 [i_0];
            }
        } 
    } 
}
