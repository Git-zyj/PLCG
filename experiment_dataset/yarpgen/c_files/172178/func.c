/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172178
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
    var_11 = ((/* implicit */unsigned short) min((((unsigned long long int) (!(((/* implicit */_Bool) 1452718518U))))), (((/* implicit */unsigned long long int) ((_Bool) 1452718519U)))));
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)236), (var_1))))))), (((unsigned char) ((unsigned int) var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (~(((unsigned int) var_1)))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((signed char) ((unsigned long long int) max((var_2), (((/* implicit */int) var_10)))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) (+(((unsigned int) ((unsigned short) arr_3 [i_0])))));
            }
        } 
    } 
}
