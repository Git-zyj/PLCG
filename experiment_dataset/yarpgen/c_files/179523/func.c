/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179523
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
    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((var_4), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_11))))) : (((/* implicit */int) var_0))));
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32970))) <= (var_7)))))));
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12159)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-12159))))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [6] [i_0]))));
                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 781365048336381370ULL))));
}
