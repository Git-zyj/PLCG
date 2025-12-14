/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179798
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)34865)), (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : (min((1118892122U), (((/* implicit */unsigned int) var_7)))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= (arr_3 [(signed char)11] [i_1] [i_0])))), (arr_3 [i_0] [i_0] [i_0])));
                arr_6 [(signed char)6] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((min((var_14), (((/* implicit */short) arr_1 [i_1])))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)65))))))))));
            }
        } 
    } 
}
