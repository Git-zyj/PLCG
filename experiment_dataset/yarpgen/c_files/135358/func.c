/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135358
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
    var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (10174812609735318351ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -975572829))))))))));
    var_14 &= ((/* implicit */long long int) min(((+((~(((/* implicit */int) (short)0)))))), ((-(min((var_3), (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_6 [i_0 - 2]))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (arr_4 [i_2])));
                }
            } 
        } 
    } 
}
