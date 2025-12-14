/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18722
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) - (var_3)))), (((int) arr_0 [i_0 - 3])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3 + 2]);
                            var_18 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_0 + 1])) * (((/* implicit */int) arr_0 [i_0 - 2]))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((max((arr_6 [i_2] [i_2] [i_2]), (arr_6 [i_0 - 3] [i_0 - 3] [i_3]))), (arr_6 [i_1] [i_2] [i_3 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 3; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) max((((var_11) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0 - 3] [i_5 + 1] [i_5 - 1])))), (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_5 - 1] [i_5 - 3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_5 - 2] [i_5 + 1]))))));
                            var_20 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) arr_14 [i_0 - 1] [i_0 - 2] [i_5 - 3] [i_5 + 1])), (arr_13 [i_0 - 1] [i_0 - 2] [i_5 - 3] [i_5 + 1]))));
                            var_21 = ((/* implicit */_Bool) max((max((min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_4] [i_1])))), (((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned char) var_11))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_1] [i_0 + 1]))) | (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_7 [i_0] [i_1] [i_4] [i_4] [i_0] [i_1])))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_1 [i_0] [i_4]))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) ((_Bool) var_4))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */_Bool) ((var_2) & (((/* implicit */int) ((_Bool) var_3)))));
    var_25 = var_6;
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_0))));
    var_27 = ((/* implicit */short) ((((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (var_15))) <= ((~(var_15)))))) <= (((/* implicit */int) var_11))));
}
