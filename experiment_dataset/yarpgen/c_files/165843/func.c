/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165843
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [(unsigned short)1] [(signed char)1])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) > (((/* implicit */int) min((arr_2 [(short)15]), (var_4)))))))));
                arr_5 [i_0] [(unsigned short)7] = ((/* implicit */int) (signed char)112);
                arr_6 [i_0] [i_1] [i_0] |= max((((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_1 + 1] [i_1])), (var_4)))), ((+(((/* implicit */int) arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((65528) != (((/* implicit */int) var_6)))) ? (((/* implicit */int) min(((signed char)-102), ((signed char)-106)))) : (-633802550))))));
    var_12 = ((/* implicit */int) var_4);
}
