/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18076
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
    var_14 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)55))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_2 [(signed char)12] [i_1]))))))));
            }
        } 
    } 
}
