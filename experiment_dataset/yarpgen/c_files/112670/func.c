/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112670
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
    var_12 = ((/* implicit */long long int) 16198486731799133025ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = var_10;
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16198486731799133047ULL)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)-83))));
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) (signed char)-100)))))));
                var_16 = max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) ^ (14939511052510632012ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (9223372036854775807LL)))))), (((/* implicit */unsigned long long int) arr_3 [i_0])));
                arr_6 [i_0] [i_0] = ((/* implicit */int) (~(max((((((/* implicit */_Bool) (signed char)84)) ? (2248257341910418590ULL) : (arr_5 [(unsigned char)16] [(unsigned char)16]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2390)) && (((/* implicit */_Bool) 261888ULL)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (max((var_5), (((/* implicit */unsigned long long int) var_3)))))))));
}
