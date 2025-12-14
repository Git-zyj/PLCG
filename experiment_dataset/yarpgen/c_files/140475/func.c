/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140475
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190))) : (((((/* implicit */_Bool) 134184960)) ? (-13LL) : (((/* implicit */long long int) var_7))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) (short)-1)) * (((/* implicit */int) var_1))))))) : (var_2)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)24)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-16777216LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)9]))))), (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1)))))))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) - (1183009246U)))) - (((((/* implicit */long long int) 978913588U)) / (-4059716887505974116LL))))), (((/* implicit */long long int) -1837387751)))))));
                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-3702165335394489671LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) ((-28251052) == (((/* implicit */int) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_5 [i_0])))))))) ? (((/* implicit */unsigned long long int) 8646911284551352320LL)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -1447003382))))));
            }
        } 
    } 
}
