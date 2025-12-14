/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170675
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = var_9;
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), ((((!(((/* implicit */_Bool) (signed char)-117)))) ? (((unsigned int) (_Bool)1)) : (1235209754U)))));
                            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                var_14 &= ((/* implicit */signed char) (unsigned char)15);
                var_15 += ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_9))), (((/* implicit */long long int) arr_4 [(unsigned short)14] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((((/* implicit */short) var_6)), (var_7)));
    var_17 = ((/* implicit */short) var_10);
    var_18 &= ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */long long int) var_6);
}
