/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183730
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
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) var_11)) ? (9239683179378282948ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                    arr_8 [(_Bool)1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_0), (var_0))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [13] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_7 [i_0])))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1] [i_2])))) ? (max((var_7), (((/* implicit */unsigned long long int) var_2)))) : (min((arr_3 [i_0] [i_2] [i_0]), (arr_3 [i_0] [i_1] [i_2])))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_5)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_10), (var_0)));
    var_16 = ((/* implicit */unsigned long long int) var_0);
}
