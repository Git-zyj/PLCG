/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115109
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)0));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_5 [i_2] [i_1 - 2] [6LL] [6LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [14])))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_17)) ? (259417344) : (arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 4]))) : (((/* implicit */int) ((_Bool) (-(arr_4 [i_0] [(unsigned char)5] [9])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (~(var_13)));
}
