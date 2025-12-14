/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164882
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
    var_15 = var_6;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775781LL)));
                    arr_6 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 3358435811U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-23204), (((/* implicit */short) var_0)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))) * (3358435811U)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) <= (((/* implicit */int) (unsigned char)92))))) == (((/* implicit */int) (!(((/* implicit */_Bool) -896803869))))))))));
    var_18 = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 896803868))))), ((short)-23204)))) + (2147483647))) << (((((/* implicit */int) var_8)) - (29758)))));
}
