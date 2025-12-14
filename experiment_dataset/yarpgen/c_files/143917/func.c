/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143917
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
    var_11 = ((/* implicit */short) ((long long int) ((var_4) > (min((var_5), (((/* implicit */long long int) (_Bool)0)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((var_6) - (868196657218896993LL)))))))) || (var_3)));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */int) ((short) ((_Bool) var_8)))), (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                    var_14 = min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767))))) * (min((((/* implicit */long long int) (_Bool)0)), (var_1))))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)0)), (var_10)))));
                }
            } 
        } 
    } 
}
