/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130856
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_0))));
                    var_15 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (arr_5 [i_2 - 1] [i_2] [i_2 + 1])))) ? (max((arr_5 [i_2 + 2] [10ULL] [(short)3]), (((/* implicit */unsigned long long int) arr_6 [i_2 - 1] [i_2 + 1] [(_Bool)1] [i_0])))) : (((/* implicit */unsigned long long int) ((arr_6 [i_2 + 1] [i_2 + 2] [5U] [i_0]) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1] [11ULL] [i_1])) : (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
}
