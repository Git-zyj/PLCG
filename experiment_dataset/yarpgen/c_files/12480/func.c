/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12480
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
    var_19 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]);
                            arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_3] [i_2])) + (-1402775273)))), (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0 + 2] [i_1] [i_0] [i_1] = ((int) (!(((/* implicit */_Bool) var_14))));
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) (+(arr_11 [i_0] [i_0] [i_0])))), (arr_12 [i_0 + 2]))));
                            var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_7 [i_0 - 1])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (var_1)))))));
                            var_23 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */int) var_13)) << (((((/* implicit */int) arr_7 [i_0 + 2])) - (87)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [(short)6])))), ((-(((/* implicit */int) var_9))))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_11 [(signed char)13] [i_1] [i_0 - 1])) : (((unsigned int) var_7)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) (unsigned char)105);
}
