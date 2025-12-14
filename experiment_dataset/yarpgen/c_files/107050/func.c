/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107050
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? (var_4) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_9))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_3] [(unsigned short)6] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((min((max((var_6), (var_6))), (var_11))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_10))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                arr_13 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_7)))))) : (min((var_0), (((/* implicit */unsigned long long int) var_9))))));
            }
        } 
    } 
}
