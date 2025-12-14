/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10322
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
    var_13 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (((-(((/* implicit */int) arr_6 [i_2 - 2] [i_0] [i_0] [i_0])))) < (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1412054682U))))))))));
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) arr_1 [i_1])))), (min((((/* implicit */long long int) var_6)), (var_4))))))));
                }
            } 
        } 
    } 
}
