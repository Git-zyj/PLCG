/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142972
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
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (-(min((min((2807074029U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((_Bool) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])))))));
                var_11 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-512244262166041659LL))))))), (((long long int) min((((/* implicit */unsigned long long int) (unsigned char)8)), (262143ULL))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) max(((signed char)-91), (((/* implicit */signed char) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) var_10))))))));
}
