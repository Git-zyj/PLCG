/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139497
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)71))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((max((var_8), (((/* implicit */unsigned int) (_Bool)0)))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))) - (10066LL))))) * (((/* implicit */unsigned int) max((((((/* implicit */int) (short)-18533)) | (2147483647))), (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((((var_5) ^ (var_0))) <= (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1]))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_1]), (arr_3 [i_1] [i_1] [i_1])))) * (((/* implicit */int) arr_3 [i_1] [i_1 + 3] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_1 [i_1 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [(signed char)20])) : (var_2)))))))));
                var_14 = ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) arr_1 [i_1 - 1]))))) || ((((-(598997020U))) != (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (signed char)119))))))));
                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)119))))));
            }
        } 
    } 
}
