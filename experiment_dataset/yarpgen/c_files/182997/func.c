/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182997
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
    var_10 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))))) % (((/* implicit */int) ((unsigned short) ((unsigned short) var_1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (var_2)));
                arr_4 [i_0] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) max((var_3), (((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (var_9)))))));
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_9)))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_5))));
}
