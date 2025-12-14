/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171263
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
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 2081968751U))) && (((/* implicit */_Bool) (-(var_4))))));
    var_17 = ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_6 [(_Bool)1]);
                    var_20 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) min((var_15), (var_15)))) * (var_2)))));
                    var_21 = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
}
