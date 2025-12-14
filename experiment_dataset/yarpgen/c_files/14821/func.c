/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14821
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
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((2205417708U) | (((/* implicit */unsigned int) 1494689351))))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) var_2))))) * ((((+(var_8))) * (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (-1494689341))))))));
    var_12 = ((/* implicit */signed char) ((_Bool) -1494689351));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(((((/* implicit */_Bool) -1494689356)) ? (1494689341) : (1494689351))))))));
                    arr_7 [8] [i_0] [i_1 - 1] [i_1] = (-(((/* implicit */int) (signed char)-14)));
                }
            } 
        } 
    } 
}
