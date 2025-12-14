/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101881
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
    var_11 = ((/* implicit */unsigned short) (signed char)112);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)));
                var_13 = arr_5 [(_Bool)1] [i_1];
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (unsigned char)108);
}
