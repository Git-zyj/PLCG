/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108857
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) 834462833)) / (8184U))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8184U), (((/* implicit */unsigned int) -834462834))))) ? (((((/* implicit */int) var_17)) ^ (((((/* implicit */int) (short)32640)) << (((var_14) - (1835743458))))))) : ((+(-834462815)))));
                var_21 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1613007100)) | (8184U)))), (10758942249185126860ULL)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_19)) / (((((var_3) << (((var_5) - (3228543438U))))) ^ (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-32640))))))));
}
