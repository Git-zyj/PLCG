/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117191
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
    var_16 = ((((/* implicit */_Bool) ((unsigned char) max((var_11), (var_2))))) || (((/* implicit */_Bool) var_14)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) min((var_4), (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_10))))))));
                var_18 += ((/* implicit */signed char) max((((/* implicit */long long int) ((int) (signed char)-58))), (((long long int) ((signed char) 134217727)))));
            }
        } 
    } 
}
