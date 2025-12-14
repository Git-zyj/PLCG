/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149329
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) -682905079))))) + (((/* implicit */int) ((_Bool) var_6))))), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_10))))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_16)))), (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_0] [(signed char)18] = ((/* implicit */signed char) var_17);
                                var_20 ^= ((/* implicit */_Bool) arr_2 [i_0]);
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */_Bool) min(((~(arr_0 [i_0] [i_0]))), (((min((arr_0 [i_1 - 1] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_1])))) | (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)17))))))));
                arr_14 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29676))))) ? (min((((/* implicit */long long int) var_8)), (arr_6 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))))), (((/* implicit */long long int) ((((arr_1 [(unsigned char)20]) ^ (var_2))) ^ (((/* implicit */int) min((var_12), (arr_3 [(unsigned char)2] [(unsigned char)2])))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
    var_23 = ((((((/* implicit */_Bool) min(((short)-21), ((short)-19)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_16)))) << (((((((((/* implicit */int) var_10)) * (((((/* implicit */int) var_7)) * (((/* implicit */int) var_12)))))) + (2377920))) - (14))));
}
