/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150336
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((signed char)85), (var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)76))))));
                                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((signed char)-123), ((signed char)43))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)-64)))) : (((((/* implicit */_Bool) max(((signed char)60), ((signed char)-73)))) ? (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) ((signed char) var_10)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), ((signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_11), (var_12))))))) ? (max((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)66)))), (((/* implicit */int) max(((signed char)-84), ((signed char)0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) max((var_12), ((signed char)28))))))));
                                arr_15 [i_0] [i_0] [i_0] [(signed char)1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */int) (signed char)-30)) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (signed char)-54)))) - (17))))) : (max((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)6)))), (((/* implicit */int) min(((signed char)63), (var_10))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = var_8;
}
