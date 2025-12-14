/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118056
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
    var_19 = ((/* implicit */unsigned short) var_14);
    var_20 = ((/* implicit */short) (!(var_14)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 805306368U)))))));
                    var_22 = ((/* implicit */unsigned long long int) (!((!(((arr_5 [i_2]) || (arr_5 [i_0])))))));
                    arr_10 [i_0] [(_Bool)1] = (+(((((/* implicit */int) (short)19646)) >> (((/* implicit */int) arr_8 [i_0] [i_0])))));
                    var_23 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */short) var_0)))))))), (min(((+(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) 805306373U)))))))));
    var_25 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) (short)-3134)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15))))));
}
