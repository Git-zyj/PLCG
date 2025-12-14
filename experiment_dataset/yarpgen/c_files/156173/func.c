/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156173
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) max((-2022917928767389060LL), (var_4)))) : (min((((/* implicit */unsigned long long int) 4579936203051504103LL)), (arr_3 [i_2] [i_2]))))))));
                    var_12 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (short)23038)))));
                    var_13 ^= ((/* implicit */short) arr_3 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) max((((((long long int) var_5)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40127))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_5), (var_5)))), (max((1713965386U), (1249412608U))))))));
}
