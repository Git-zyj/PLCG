/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148196
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
    var_11 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((var_5), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (var_9)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1931664320U))), ((~(2363302976U)))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (2133908717618476393ULL))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((unsigned char) (short)7027));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_1 [i_0]);
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 - 2]))))), (arr_2 [i_0] [i_1] [i_1])));
                }
            } 
        } 
    } 
}
