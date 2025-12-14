/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137865
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
    var_11 += max(((signed char)2), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))));
    var_12 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))) : (var_7));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 0)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_0 + 4] [i_1])))))));
                    var_14 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((arr_0 [i_0]) >= (var_2))))))));
                }
            } 
        } 
    } 
}
