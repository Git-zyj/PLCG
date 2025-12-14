/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120917
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) var_14);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_17) : (arr_3 [i_0] [i_0]))) + (2147483647))) << (((min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_3 [i_0] [i_0]))) - (104)))))) & (max((var_3), (((/* implicit */unsigned int) (+(486709432))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) var_11))) | ((+(var_4))))))));
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47900))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}
