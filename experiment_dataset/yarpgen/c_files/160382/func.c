/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160382
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) var_6))), ((unsigned char)15))))));
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -17)) ? (((/* implicit */int) var_11)) : (0))), (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), ((~(var_10)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)32767)), (arr_2 [0]))))));
                    var_15 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
}
