/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110960
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
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0] [(signed char)0] [i_0]))), (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) arr_2 [i_0 - 1] [(_Bool)1] [i_0 - 1]))), (min((arr_2 [10ULL] [(short)8] [i_1]), (((/* implicit */long long int) arr_0 [18]))))))))))));
                var_15 = ((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((int) min((arr_0 [i_0 + 4]), (((/* implicit */int) arr_5 [i_0]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 3]);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) var_11)), (var_10))))), (max((var_0), (max((var_9), (var_5)))))));
    var_17 = ((/* implicit */int) max((var_9), (max((((/* implicit */unsigned long long int) min((5437201192564512490LL), (((/* implicit */long long int) var_2))))), (min((var_10), (((/* implicit */unsigned long long int) var_7))))))));
}
