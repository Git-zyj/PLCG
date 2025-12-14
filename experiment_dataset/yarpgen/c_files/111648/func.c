/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111648
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)69))))) != (((/* implicit */int) var_9))))) % (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 2] = ((/* implicit */signed char) var_11);
                    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967279U), (((/* implicit */unsigned int) (signed char)55))))) ? (var_12) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) -481985650)) ? (-285958219) : (((/* implicit */int) var_6)))) : ((+(-2147483640)))));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_8)))))));
                    var_15 = ((/* implicit */int) min((((3454555677U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))))), (((8191U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)14)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))))));
}
