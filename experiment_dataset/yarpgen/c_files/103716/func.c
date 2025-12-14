/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103716
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
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)3] [5U] [1U] = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)38060))), (min((arr_3 [i_0] [i_0 + 3] [i_0]), (var_15))))), (((/* implicit */unsigned short) arr_1 [8U]))));
                var_19 = ((((/* implicit */_Bool) max((((unsigned short) arr_3 [i_0 - 1] [i_0 - 1] [3])), (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_2 [0U] [i_1 + 2])));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max(((signed char)-57), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (unsigned short)28230))) <= (((/* implicit */int) var_15))))))))));
                var_21 = ((/* implicit */unsigned short) var_18);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_2);
}
