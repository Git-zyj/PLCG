/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170793
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
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))))) ? (min((((/* implicit */long long int) (short)-1)), (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))))))) : (((/* implicit */long long int) ((/* implicit */int) max((min((((/* implicit */unsigned short) var_13)), (arr_3 [i_2 - 1] [i_1] [i_0]))), (((/* implicit */unsigned short) arr_6 [i_1] [i_3]))))))));
                            var_21 += ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_18)), (arr_9 [i_0 + 2]))), (((/* implicit */unsigned long long int) var_3))));
                            arr_11 [i_3] = ((((/* implicit */unsigned long long int) var_15)) / ((~(arr_9 [i_0 - 3]))));
                            arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                var_22 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_8))))));
                var_23 = ((/* implicit */long long int) arr_0 [i_0] [i_0 + 4]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_15);
}
