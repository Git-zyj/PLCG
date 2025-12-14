/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164312
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) var_15))))) : (((unsigned long long int) ((signed char) (signed char)30)))));
    var_18 |= ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 = (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_8)))))));
                    arr_6 [i_0] [i_1 - 3] = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    arr_7 [i_2] = ((/* implicit */long long int) ((signed char) ((_Bool) (signed char)-42)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) (signed char)-40)))));
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
                                var_22 += ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((short) var_3))))));
                                var_23 = ((unsigned long long int) ((unsigned char) var_8));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
