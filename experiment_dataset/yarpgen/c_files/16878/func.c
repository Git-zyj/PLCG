/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16878
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
    var_10 = ((/* implicit */long long int) var_4);
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) ((-312932549) > (((/* implicit */int) (unsigned short)6900)))))))));
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)6] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned char)84)), (1073741568)))));
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1073741569)) ? (((/* implicit */long long int) 2130551129)) : (576460752303423487LL)));
            }
        } 
    } 
}
