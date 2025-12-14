/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144094
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
    var_20 = min(((-(1216960427U))), (((/* implicit */unsigned int) var_12)));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32756))))), (var_11)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_7 [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) min(((_Bool)1), (var_17)))), (958695718094688052ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1467823001)))))) > ((((_Bool)0) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) -1467822993))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (_Bool)1);
}
