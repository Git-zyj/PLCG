/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156028
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) 1029671464))) <= (arr_2 [i_0 - 1] [i_0] [i_0 + 1])))), (max((arr_4 [i_0 - 1] [i_0 + 2]), (((((/* implicit */_Bool) 4539628424389459968ULL)) ? (((/* implicit */long long int) arr_3 [i_0 + 1] [14U] [i_0 + 1])) : (var_10)))))));
                var_15 |= ((/* implicit */unsigned int) var_1);
                var_16 ^= ((/* implicit */short) ((unsigned long long int) ((unsigned char) ((arr_4 [i_0] [i_0]) < (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)59680)), (((((/* implicit */int) (_Bool)0)) % (1073741792)))))), (((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((var_12) >> (((((/* implicit */int) var_3)) + (25388)))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (max((((/* implicit */signed char) ((var_1) < (((/* implicit */int) (signed char)0))))), (var_7)))));
}
