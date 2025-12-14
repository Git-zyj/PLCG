/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172080
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
    var_14 += ((((4294967287U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (35U))) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((9U) - (((/* implicit */unsigned int) -462149833))));
                var_15 = ((/* implicit */unsigned short) ((((((3572478009U) & (var_8))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))))) & (((((var_7) ^ (((/* implicit */unsigned int) arr_3 [8] [i_1] [i_0])))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)75)) ^ (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
