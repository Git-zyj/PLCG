/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16145
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
    var_11 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-33)) : (1064817127)));
                    arr_9 [i_0] |= ((/* implicit */long long int) min((arr_4 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                    var_13 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) (unsigned short)65525)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) min((var_6), (((/* implicit */int) var_8)))))), ((+(((var_7) / (var_7)))))));
}
