/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154822
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
    var_12 = (~(max((((((/* implicit */int) (signed char)29)) * (((/* implicit */int) (signed char)-15)))), (((/* implicit */int) (unsigned short)50416)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) min((((arr_2 [i_1]) % (((/* implicit */unsigned int) ((var_1) - (((/* implicit */int) arr_0 [i_1]))))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) % (3967141303U)))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)15112)), (8697479473816881451LL)))) ? (min((((/* implicit */long long int) 890244736U)), (4992059112397990039LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18808))))))))) + (1266505376839010297ULL))))));
            }
        } 
    } 
}
