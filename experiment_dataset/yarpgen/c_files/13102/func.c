/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13102
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [3U] [i_1] = ((/* implicit */unsigned char) max(((-(arr_3 [i_0] [i_1]))), (((/* implicit */unsigned int) max(((-2147483647 - 1)), (max((((/* implicit */int) var_9)), (1163053016))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)183))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (-(arr_0 [i_0])));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (max((var_3), (((/* implicit */unsigned char) var_4)))))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65100)) ? (-2147483631) : (2147483642))))) << (((/* implicit */int) ((_Bool) (signed char)-74)))));
                var_16 ^= ((/* implicit */unsigned short) var_1);
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (signed char)69))));
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_12 [i_2 + 4] [i_2 + 3] [i_2 + 3])))));
            }
        } 
    } 
    var_18 = ((int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned short)59064)) & (((/* implicit */int) (unsigned char)178))))));
}
