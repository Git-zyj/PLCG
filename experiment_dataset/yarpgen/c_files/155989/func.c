/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155989
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
    var_13 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((9223372036854775807LL) % (-8525329418035959555LL))) >= (((((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned short)6] [i_1] [i_1])) << (((arr_4 [i_0 - 1] [i_0 - 1]) - (2210036235U)))))) - (min((((/* implicit */long long int) var_1)), (137438952448LL))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 1834501463920630140ULL)))) < (137438952435LL)))), (((((min((((/* implicit */long long int) arr_4 [i_0] [4U])), (-654013160643944861LL))) + (9223372036854775807LL))) << (((var_11) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
