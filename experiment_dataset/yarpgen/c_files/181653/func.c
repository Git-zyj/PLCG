/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181653
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [12U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) & (max((var_8), (2147483647)))));
                    arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) >> (((var_9) - (3907031867U)))))))), ((-(348356289U)))));
                    var_11 += ((/* implicit */signed char) ((arr_2 [i_0] [i_0]) / ((+(max((-2147483647), (((/* implicit */int) (short)255))))))));
                    var_12 ^= ((/* implicit */short) 348356289U);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) max(((~(var_9))), (((/* implicit */unsigned int) var_4))));
}
