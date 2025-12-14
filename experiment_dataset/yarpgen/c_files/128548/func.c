/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128548
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
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (((-(var_15))) == (((/* implicit */long long int) var_7)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((var_7) != ((-(var_3)))))), ((~(((/* implicit */int) var_9))))));
                    var_19 -= (short)-3341;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_21 ^= ((/* implicit */signed char) var_10);
}
