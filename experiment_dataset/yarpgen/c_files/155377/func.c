/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155377
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1 - 1] [i_1 - 1] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_8))))))) < (max((min((arr_3 [i_0]), (((/* implicit */long long int) arr_4 [5U] [i_0] [i_1])))), (min((1073479680LL), (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)9])))))));
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_5))));
}
