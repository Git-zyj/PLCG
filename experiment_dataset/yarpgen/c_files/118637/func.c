/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118637
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
    var_20 = ((/* implicit */unsigned char) var_19);
    var_21 = var_4;
    var_22 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) 33489474))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0])) > (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))))))) ^ (min((((/* implicit */unsigned int) ((unsigned char) arr_5 [i_0] [i_0] [i_1]))), (var_0)))));
                arr_6 [i_1] = ((/* implicit */short) max(((+((-(14U))))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (short)(-32767 - 1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (short)(-32767 - 1));
}
