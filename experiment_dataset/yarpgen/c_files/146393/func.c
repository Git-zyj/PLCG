/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146393
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1)))), (((arr_6 [i_0]) / (((/* implicit */int) var_14)))))))))));
                arr_7 [(signed char)0] [i_1] [(signed char)0] = ((/* implicit */signed char) max((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) (!(var_3)))), (max(((short)-7650), ((short)7650)))))) >> (((/* implicit */int) var_3))));
}
