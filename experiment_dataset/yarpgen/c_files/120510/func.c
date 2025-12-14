/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120510
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [17U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) 70368743129088LL)) : (arr_2 [i_0])));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))), (((((/* implicit */_Bool) -270669121)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (((((/* implicit */int) ((((/* implicit */int) (signed char)63)) <= (((/* implicit */int) arr_3 [i_0] [i_1]))))) - (((/* implicit */int) ((signed char) var_11)))))));
                var_12 &= ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((short) var_9)))));
    var_14 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (signed char)46)), ((~(var_6)))))));
}
