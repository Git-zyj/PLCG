/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139371
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
    var_17 = max((max((((/* implicit */unsigned int) max(((signed char)48), ((signed char)-48)))), (var_10))), (((/* implicit */unsigned int) 1655680777)));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((var_9) + (795594964)))));
    var_19 = ((/* implicit */unsigned char) ((int) var_1));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [i_1])), ((unsigned char)190)))) : (((/* implicit */int) ((arr_2 [i_0] [i_0]) || (var_7))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) / (3747808283574152428LL)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (arr_0 [(unsigned short)3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))))));
            }
        } 
    } 
}
