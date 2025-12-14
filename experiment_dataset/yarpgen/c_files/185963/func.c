/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185963
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((unsigned long long int) (_Bool)1);
                arr_4 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2778161843U))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)200)), (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2610609993U)))) : (max((arr_0 [i_1] [i_0]), (2610609993U))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) 1684357303U);
}
