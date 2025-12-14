/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176747
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(0LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((-5399822494702714793LL) < (((/* implicit */long long int) var_7)))))) : (((0LL) / (((/* implicit */long long int) var_10)))))))));
    var_12 = ((((/* implicit */long long int) 3479333804U)) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) var_7)), (0LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */short) ((((/* implicit */int) ((815633514U) != (((/* implicit */unsigned int) -1673085272))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_0])))))))));
                var_14 = ((/* implicit */unsigned char) ((2958653891U) / (815633491U)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_1])) < (arr_1 [i_1])))) != (((/* implicit */int) ((_Bool) (unsigned char)207)))));
                arr_6 [i_0] = ((/* implicit */short) ((min((-336416701122191359LL), (((/* implicit */long long int) 3238726190U)))) + (((/* implicit */long long int) ((/* implicit */int) (!(var_0)))))));
            }
        } 
    } 
}
