/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177927
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)36085)), (-1276177577)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47510)) && ((!(((/* implicit */_Bool) var_12)))))))) : (((((/* implicit */_Bool) (+(779779787)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_1 [i_1])), (min((max((1546233431U), (((/* implicit */unsigned int) (unsigned short)36072)))), (((/* implicit */unsigned int) ((signed char) arr_3 [i_0] [i_0] [i_1]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((var_10) % (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)29450)))))));
}
