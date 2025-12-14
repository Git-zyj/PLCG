/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180935
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */int) var_7)) >> (6ULL)))));
                arr_7 [i_0] &= ((/* implicit */int) (+(3311033324560949529ULL)));
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_8))))))) > (((/* implicit */int) ((((15135710749148602092ULL) << (((/* implicit */int) (_Bool)1)))) <= ((+(3311033324560949539ULL)))))))))));
                var_13 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 2147483647))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
