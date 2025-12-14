/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126252
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
    var_14 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65523)))) : (var_5))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                    arr_8 [i_0] [i_0] [i_2] [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_1 - 1] [i_0 - 1]))))));
                }
            } 
        } 
    } 
}
