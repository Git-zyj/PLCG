/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154562
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
    var_20 = ((/* implicit */unsigned short) var_17);
    var_21 = min(((unsigned char)69), ((unsigned char)175));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (((unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
}
