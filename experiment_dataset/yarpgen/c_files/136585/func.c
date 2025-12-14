/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136585
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) 16012355880338508896ULL);
                    arr_8 [i_0] [i_1] [i_2] [i_1] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), (min((((/* implicit */unsigned long long int) var_13)), (17847832561649287203ULL))));
                    var_18 = ((/* implicit */_Bool) arr_2 [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) var_16))), ((~(4242483997U)))));
    var_20 = ((/* implicit */short) (_Bool)1);
}
