/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133503
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                arr_4 [(short)7] [i_1 + 4] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(min((3787668185U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                var_15 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) - (((/* implicit */int) min(((unsigned short)13544), ((unsigned short)60846)))))), ((-(((((/* implicit */int) (unsigned short)13544)) * (((/* implicit */int) (_Bool)1))))))));
                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(-1843714546)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) 4092516505U)) ? (((/* implicit */int) (short)-7502)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), (-1843714546)))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-3026)) * (((/* implicit */int) (unsigned short)51992))))))))) < (var_9)));
    var_18 = ((/* implicit */unsigned long long int) 4294967295U);
}
