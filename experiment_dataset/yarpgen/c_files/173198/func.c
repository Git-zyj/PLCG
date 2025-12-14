/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173198
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4225991689U))))) ? (((/* implicit */int) (!(((68975607U) == (68975590U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [11] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((arr_1 [i_2] [i_1]) - (min((((/* implicit */int) var_0)), (arr_1 [i_2] [i_2])))))));
                    arr_8 [i_0] [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15304))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 68975626U)) ? (68975607U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))))))));
}
