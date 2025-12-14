/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155651
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_7 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) < (15912941322061372177ULL)));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((short) ((_Bool) 2533802751648179438ULL))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (2533802751648179441ULL) : (15912941322061372191ULL)));
}
