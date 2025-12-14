/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171463
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
    var_16 -= ((/* implicit */_Bool) min((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_2)))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-4663)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) var_15))));
                var_17 = arr_0 [14];
                var_18 = arr_2 [i_0] [i_0] [i_1];
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_1);
                            arr_10 [i_0] [i_2] = ((/* implicit */short) var_15);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) >= (((min((((/* implicit */long long int) var_1)), (var_9))) & (((/* implicit */long long int) min((arr_1 [i_1] [i_2]), (((/* implicit */unsigned int) (signed char)-31)))))))));
                            var_21 = ((/* implicit */short) max(((!(((/* implicit */_Bool) (unsigned char)249)))), (((((/* implicit */int) (unsigned char)249)) != (((/* implicit */int) (short)27050))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
