/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167824
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
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((/* implicit */unsigned char) 10895194812630440148ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((((131071ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) - (18012199486226432ULL))));
                var_19 = ((/* implicit */unsigned char) min((18012199486226453ULL), (18428731874223325183ULL)));
                var_20 *= ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_0) != (7ULL))))) > (((((var_7) + (9223372036854775807LL))) << (((var_0) - (10239248187029207045ULL)))))))) - (((/* implicit */int) min((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6)))), (((18428731874223325177ULL) != (((/* implicit */unsigned long long int) var_9)))))))))));
}
