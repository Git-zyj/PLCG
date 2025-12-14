/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119989
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
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (((min((((/* implicit */unsigned int) 518582523)), (var_5))) - (((/* implicit */unsigned int) 7))))));
    var_21 -= ((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_0 + 1] [2U]))))));
                var_23 = ((/* implicit */unsigned short) (_Bool)1);
                var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-103)) <= (((((/* implicit */_Bool) 4228502685U)) ? (-2004351662) : (((/* implicit */int) var_18)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
