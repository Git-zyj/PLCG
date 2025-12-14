/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173547
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
    var_10 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_0))))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned short)53704))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))), (((short) (+(((/* implicit */int) arr_3 [i_1])))))));
                var_12 -= arr_2 [i_0] [i_0];
                arr_7 [i_0] [(short)14] [(short)14] = min((((/* implicit */unsigned int) var_1)), (min((((((/* implicit */_Bool) (unsigned short)53704)) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53704))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)11832))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_13 &= ((/* implicit */_Bool) (unsigned short)11840);
        arr_12 [i_2] = ((/* implicit */unsigned int) (unsigned short)49500);
    }
}
