/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133563
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
    var_10 |= ((/* implicit */_Bool) ((unsigned long long int) 3566214955U));
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((arr_3 [i_1] [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))))))));
                arr_5 [i_0] [12ULL] [i_0] = (_Bool)1;
                arr_6 [(unsigned char)10] [i_0] = ((/* implicit */signed char) (short)-26618);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_8);
}
