/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17223
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_13)), (min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 254022711)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(unsigned short)11] = ((/* implicit */_Bool) ((int) ((_Bool) (~(((/* implicit */int) (signed char)101))))));
                    arr_11 [i_0] [i_0] [i_2] [11U] = ((/* implicit */short) max(((~(1986841594U))), (((/* implicit */unsigned int) var_0))));
                    arr_12 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) | (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [14U] [i_1])))))))));
                    arr_13 [(unsigned char)15] [i_0] [i_2] [(unsigned char)15] = ((/* implicit */int) ((unsigned long long int) 4250561951U));
                }
            } 
        } 
    } 
}
