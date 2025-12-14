/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171537
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [1U] [i_0] [1U] = ((((/* implicit */int) (unsigned short)52121)) | (16256));
                var_12 = ((/* implicit */long long int) ((unsigned int) ((910048893) < (((/* implicit */int) (_Bool)1)))));
                arr_6 [(signed char)6] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (signed char)-52))) + (2147483647))) >> (((min((2225746457U), (((/* implicit */unsigned int) 1168164343)))) - (1168164335U)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-6))))) : (((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) -910048893)) ? (((/* implicit */long long int) 3181322663U)) : (-8678685399452376729LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
                arr_7 [i_0] = -910048893;
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((signed char) (unsigned char)0)))), (min((var_9), (((/* implicit */int) ((unsigned char) -910048894)))))));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
    var_15 = ((/* implicit */unsigned char) var_1);
}
