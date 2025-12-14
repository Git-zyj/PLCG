/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127851
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_2 [i_1 - 3]), (arr_0 [i_1 + 1])))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_1 - 3])) + (46))) - (4)))));
                var_11 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                var_12 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_2 [i_1 + 1])) / (((/* implicit */int) arr_3 [i_1 - 3] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) max((var_13), (var_9)));
    var_14 = var_8;
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_15 *= var_4;
                    var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_2] [i_3] [(signed char)18])) ? (((/* implicit */int) min((arr_8 [i_2] [i_4]), ((signed char)105)))) : (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 4])))) / (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
}
