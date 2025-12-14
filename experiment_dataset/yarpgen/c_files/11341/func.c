/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11341
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
    var_20 = ((/* implicit */int) var_19);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (var_18))))))), ((-(max((var_5), (((/* implicit */long long int) (short)19957)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] [i_2] = ((int) ((signed char) var_1));
                            arr_10 [i_2] [i_0] [i_2] = ((/* implicit */signed char) arr_7 [(unsigned short)11] [i_0] [i_0] [7LL] [i_0] [i_0]);
                            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))))) << (((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [6] [i_0] [i_1] [i_0]))))))))));
                            var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0]))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */unsigned int) arr_6 [0] [i_1] [i_1] [i_1]);
                var_25 ^= arr_5 [i_0] [i_0] [i_0] [12LL];
                arr_11 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((unsigned int) 0U)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_0);
}
