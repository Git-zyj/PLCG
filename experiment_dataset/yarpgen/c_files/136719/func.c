/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136719
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */int) ((((/* implicit */_Bool) -2214882261151856240LL)) && (var_6)))) % (((/* implicit */int) var_5))))));
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                var_13 = ((/* implicit */signed char) var_9);
                arr_4 [i_0] [i_1 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)50))));
                arr_5 [(unsigned char)7] = ((int) (unsigned short)65535);
            }
        } 
    } 
}
