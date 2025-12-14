/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115357
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) min((((long long int) var_0)), (((/* implicit */long long int) (~((-(((/* implicit */int) (short)-19214)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(short)12] = ((/* implicit */short) min((((unsigned long long int) -5615342735458317325LL)), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)14372))))), (min((((/* implicit */long long int) var_10)), (-5615342735458317325LL))))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(min((5615342735458317328LL), (var_9))))))));
                }
            } 
        } 
        arr_10 [i_0] &= ((/* implicit */unsigned long long int) var_10);
    }
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = min(((short)-14372), (min((((/* implicit */short) (unsigned char)0)), (var_5))));
}
