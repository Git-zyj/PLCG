/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175827
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
    var_17 = ((/* implicit */unsigned short) (+(min((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1958265481734944241LL)) ? (arr_1 [i_0]) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) 2782710682752028182LL)) : (1610944179270351554ULL)));
                    arr_6 [i_2] &= ((/* implicit */unsigned int) max(((~(arr_2 [i_2 - 2]))), (((((/* implicit */_Bool) (~(arr_3 [i_1] [4LL] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [(unsigned short)0] [i_0] [i_1] [i_0]))))) : (((-2782710682752028201LL) & (((/* implicit */long long int) 2085733599U))))))));
                    var_19 = ((/* implicit */short) min((var_19), ((short)(-32767 - 1))));
                }
            } 
        } 
    } 
}
