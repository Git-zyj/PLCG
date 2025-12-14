/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171171
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) 2291448832U))));
    var_21 = ((/* implicit */signed char) min((((var_7) < (((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) (signed char)127))))))), ((_Bool)1)));
    var_22 = ((/* implicit */int) ((short) (unsigned short)27190));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (((-(((long long int) var_2)))) - (max((((/* implicit */long long int) 2147483647)), (9223372036854775807LL)))));
                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (var_14)))) > (max((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 2])))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
}
