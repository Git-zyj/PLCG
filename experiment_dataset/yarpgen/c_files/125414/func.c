/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125414
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned long long int) ((unsigned int) ((_Bool) (signed char)19)))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned int) ((unsigned int) ((unsigned int) 8223070730583577648ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((_Bool) 2132563036161182614ULL)))));
                var_17 += ((/* implicit */short) ((unsigned short) ((unsigned int) ((int) var_10))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) ((unsigned short) arr_4 [22ULL])))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */int) ((unsigned int) ((short) (_Bool)1)));
}
