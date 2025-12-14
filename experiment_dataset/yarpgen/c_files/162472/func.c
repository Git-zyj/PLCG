/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162472
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
    var_18 = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) ((_Bool) var_11)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_19 = ((/* implicit */unsigned char) min(((+(arr_5 [i_0] [i_0] [i_1]))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)53)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)11113))))))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-14933)) ? (((/* implicit */int) (unsigned short)45887)) : (((/* implicit */int) (short)14957))))))), (-7648816823845330730LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
