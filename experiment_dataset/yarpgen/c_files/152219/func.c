/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152219
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
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 -= max((min((((/* implicit */unsigned long long int) (((-2147483647 - 1)) <= (((/* implicit */int) arr_3 [i_0] [i_0] [6]))))), (((unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483647) > ((-2147483647 - 1)))))) >= (9223090561878065152ULL)))));
                arr_4 [i_0] [20ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_0))))) == (((unsigned int) var_2))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-9713)) : (((/* implicit */int) (_Bool)1))))))), (var_4)));
    var_14 = ((/* implicit */unsigned int) 17795627135528491495ULL);
    var_15 = ((/* implicit */unsigned long long int) var_8);
}
