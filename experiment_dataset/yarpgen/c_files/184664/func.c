/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184664
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
    var_16 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (unsigned char)185;
                arr_8 [(unsigned char)9] = ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])) ? (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_0 [i_0] [i_1]))), (((arr_0 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_15);
}
