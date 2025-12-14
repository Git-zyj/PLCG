/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124057
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), ((-(0ULL))))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned short) max((((unsigned char) (unsigned char)60)), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-10774))) < (9LL))))))), (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned long long int) ((short) var_6)));
                var_21 ^= ((/* implicit */unsigned long long int) max((max(((short)-31928), ((short)10761))), (((/* implicit */short) (unsigned char)199))));
            }
        } 
    } 
}
