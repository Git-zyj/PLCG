/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147836
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((-2147483647 - 1)), (1228671060)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_2 [i_0] [(_Bool)0] [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))));
                var_20 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0 + 2] [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)100)) ? (((min((-1794696691), (((/* implicit */int) arr_3 [i_0])))) ^ (((/* implicit */int) ((_Bool) (unsigned char)1))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)79)), ((short)17598))))));
                arr_7 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) var_17);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((((var_14) >> (((4294967272U) - (4294967246U))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)159)) * (((/* implicit */int) (short)0)))))))));
}
