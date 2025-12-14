/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129252
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (((((/* implicit */unsigned long long int) (~(394411313U)))) ^ (max((3ULL), (((/* implicit */unsigned long long int) (signed char)90))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) ((signed char) max((arr_0 [i_0 - 1]), (((/* implicit */long long int) ((_Bool) 16114782893398255844ULL))))));
                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
                var_20 = ((/* implicit */short) 3737684570055041631ULL);
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))));
                var_22 *= 14709059503654509982ULL;
            }
        } 
    } 
}
