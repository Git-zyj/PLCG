/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138101
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
    var_18 = ((/* implicit */unsigned int) var_17);
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) var_9)) >> (((max((var_6), (((/* implicit */int) var_17)))) - (90149392))))), (((/* implicit */int) ((unsigned short) min((var_11), (((/* implicit */unsigned long long int) var_5))))))));
    var_20 = var_10;
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [(_Bool)1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((unsigned char) var_14))))))));
                    var_21 = ((/* implicit */unsigned int) ((long long int) arr_5 [i_2 - 3] [i_1] [i_0 + 2]));
                    arr_10 [i_0] [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_13))), (max((((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 1])), (var_1)))))), ((~(var_8)))));
                }
            } 
        } 
    } 
}
