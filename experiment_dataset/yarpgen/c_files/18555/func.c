/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18555
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 + 1])))));
                arr_4 [i_0] = max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 232132458U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2706))) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (var_2) : (arr_1 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))) ? (arr_0 [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3172612711U))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((unsigned int) (((~(var_2))) | (((/* implicit */long long int) arr_0 [i_0])))));
                arr_6 [i_1] = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 2]))) : (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-118)) >= (((/* implicit */int) (unsigned short)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (+(0ULL)));
    var_21 = ((signed char) max((((((/* implicit */_Bool) var_13)) ? (-3377014135146302713LL) : (8561167841715232049LL))), (((/* implicit */long long int) ((var_9) / (var_16))))));
}
