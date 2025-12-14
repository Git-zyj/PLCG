/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159630
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_10), (var_10)))), (var_5)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((/* implicit */int) ((min((var_1), (((/* implicit */long long int) var_3)))) < (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (short)20876)))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) min(((signed char)127), ((signed char)127)))), (arr_0 [i_0])))) || (((/* implicit */_Bool) var_6))));
                var_15 = min((min((((/* implicit */short) (signed char)127)), ((short)4096))), ((short)-10483));
            }
        } 
    } 
}
