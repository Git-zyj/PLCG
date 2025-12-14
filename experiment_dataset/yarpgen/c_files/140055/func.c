/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140055
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
    var_10 = ((/* implicit */short) -512718361);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned char)0)) ? (-217575867) : (512718360))) <= (((((/* implicit */_Bool) 512718361)) ? (var_5) : (((/* implicit */int) arr_6 [(short)6] [i_0] [(short)15])))))), (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_1 [i_0])))))))));
                    arr_8 [i_0] [i_0] [i_2] [(unsigned char)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (short)24866)))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -512718361)) ? ((~(var_8))) : (((/* implicit */int) ((min((var_8), (((/* implicit */int) arr_3 [i_0])))) == (((/* implicit */int) arr_2 [i_0])))))));
                }
            } 
        } 
    } 
}
