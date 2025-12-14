/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120141
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(273886048)))))) ? ((~(max((10360021361972150060ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_13 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) 8086722711737401555ULL);
                    var_15 = ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-55))) ? (min((8086722711737401571ULL), (((/* implicit */unsigned long long int) (signed char)-78)))) : (((((/* implicit */_Bool) (signed char)9)) ? (8001770539270525436ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))))));
                    var_16 = ((/* implicit */signed char) (+(((((16ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-49)) ^ (((/* implicit */int) (_Bool)1)))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), ((+(((unsigned long long int) 496263870))))));
                }
            } 
        } 
    } 
}
