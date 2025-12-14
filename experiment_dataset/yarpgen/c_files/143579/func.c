/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143579
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [1] [1] = ((/* implicit */long long int) var_9);
                arr_8 [i_0] = (~((+(((((/* implicit */_Bool) (short)-13061)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13044))) : (17419951578430386735ULL))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? (((((((/* implicit */int) (_Bool)1)) != (arr_11 [i_0] [i_1] [3ULL] [i_3] [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_4] [(unsigned short)17])) != (((/* implicit */int) (short)-13061)))))) : (arr_9 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)13082)) ? (32767) : (32787))) | (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_18 = ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) min((arr_13 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2]), (arr_13 [i_1 - 2] [i_1] [i_0 - 1] [i_0] [i_0 - 2])))) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 ^= ((/* implicit */short) ((int) (~(var_14))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -32767)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (short)13093))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)13061)))))))), ((~(var_1))))))));
    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((var_3), (var_3)))))))) * (((long long int) max((var_12), (var_3))))));
}
