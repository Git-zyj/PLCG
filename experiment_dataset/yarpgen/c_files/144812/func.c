/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144812
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 *= 5763923047942796720ULL;
                arr_6 [i_0] [i_0] [i_0] = min((min((arr_2 [0ULL]), (((/* implicit */unsigned int) arr_5 [i_0])))), (((/* implicit */unsigned int) max((((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))), ((~(((/* implicit */int) arr_0 [3LL]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))) : (var_5))) >> (((((/* implicit */int) var_3)) + (46)))))) || (((/* implicit */_Bool) (((((+(((/* implicit */int) var_3)))) + (2147483647))) >> (((min((((/* implicit */long long int) var_8)), (9223372036854775806LL))) - (1057776701LL)))))))))));
    var_15 += ((/* implicit */short) var_5);
}
