/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135530
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((int) var_4))))) | ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))))))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((var_6) << (((((/* implicit */int) (short)4096)) - (4048))))), (((/* implicit */unsigned long long int) ((unsigned int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((~(18027505892678549505ULL)))))) ? (((((unsigned long long int) 9223372036854775807LL)) | (((unsigned long long int) 1551058135U)))) : (18446744073709551614ULL)));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [16ULL])))))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1 + 1] [(_Bool)1])))))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_5))))));
}
