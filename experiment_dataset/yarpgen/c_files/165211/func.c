/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165211
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
    var_14 = ((/* implicit */unsigned short) ((var_8) / (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_1 - 4] [i_1] [i_1 - 3] [i_1])))) ? (((/* implicit */int) ((unsigned char) 926900304U))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [(_Bool)1] [i_1]))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                    arr_7 [i_0] [i_1] [i_1 - 2] [5ULL] = ((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((var_13) << ((((((~(var_9))) + (2122567102634469858LL))) - (12LL)))))));
}
