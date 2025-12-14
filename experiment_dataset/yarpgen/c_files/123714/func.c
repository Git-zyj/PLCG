/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123714
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
    var_20 = min((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) max((var_0), ((signed char)-54))))))), ((~(((/* implicit */int) var_5)))));
    var_21 = var_7;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_22 += ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1]))))) && (((/* implicit */_Bool) var_6)));
                    var_23 = ((signed char) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0])), (((unsigned short) arr_0 [(signed char)15] [i_1]))));
                }
            } 
        } 
    } 
}
