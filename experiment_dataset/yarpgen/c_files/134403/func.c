/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134403
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 + 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) (short)128)) : (((/* implicit */int) (short)128)))), ((~(((/* implicit */int) (_Bool)0))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])))), (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1]))))));
                arr_6 [4] [i_0] [10LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+((-(arr_0 [i_1])))))) | ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) -8102392818975532271LL)) : (var_11)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) (-(var_3))))), (((long long int) var_9))));
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (_Bool)0)), (2741178114U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_13)))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29976)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3))))))));
}
