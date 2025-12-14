/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167296
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
    var_13 = ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) arr_0 [(signed char)16])))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3] [(unsigned short)12]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (3967372061U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)13485))))))))))));
                var_16 = ((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)52030)) != (((/* implicit */int) (unsigned short)52050))))) : (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
}
