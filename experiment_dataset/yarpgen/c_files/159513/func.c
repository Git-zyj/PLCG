/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159513
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                var_20 = ((/* implicit */short) ((((/* implicit */int) var_13)) + (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0]))))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) ((var_4) ^ (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-90)) + (2147483647))) << (((((((/* implicit */int) (signed char)-35)) + (66))) - (31)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (signed char)90);
    var_22 = ((/* implicit */int) ((signed char) (-(((((/* implicit */_Bool) 43112045U)) ? (var_16) : (376332569))))));
    var_23 = ((/* implicit */unsigned short) ((int) var_13));
}
