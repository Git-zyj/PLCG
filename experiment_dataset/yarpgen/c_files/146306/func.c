/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146306
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((arr_3 [12ULL] [i_1]) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)9] [i_1])))))) ? (min((arr_1 [i_0 - 1] [i_1]), (arr_0 [i_0] [i_0]))) : ((+(((/* implicit */int) var_14))))))));
                var_17 -= ((/* implicit */unsigned int) var_15);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_14))));
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_0));
}
