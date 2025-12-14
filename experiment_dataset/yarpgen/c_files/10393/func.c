/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10393
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)3298)) ? (3562411943U) : (var_5)))))) && (((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [0ULL] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) min((((unsigned short) var_9)), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1] [i_2 + 1])))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)13]))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) max(((+(((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_7))));
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((var_7) / (max((var_7), (((/* implicit */int) var_12))))))));
}
