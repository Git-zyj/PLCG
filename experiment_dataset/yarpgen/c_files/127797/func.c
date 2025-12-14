/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127797
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) (unsigned char)37)))))) ^ (var_1)));
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((short) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_4 [i_0] [(unsigned short)12] [i_1] = ((/* implicit */unsigned long long int) (-(-555397369)));
            }
        } 
    } 
}
