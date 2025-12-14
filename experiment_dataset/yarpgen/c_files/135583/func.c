/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135583
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
    for (short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((arr_2 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))))) ? (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 - 2])), (4149248903551331334LL))) : (((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0])) ? (var_2) : (var_2))))));
                arr_6 [i_1] = ((/* implicit */int) ((long long int) 5626070935491173640LL));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) var_5);
                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (arr_3 [i_0 - 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_2 [i_0])))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_7);
    var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((long long int) var_6))) * (((var_9) % (((/* implicit */unsigned long long int) var_8)))))));
}
