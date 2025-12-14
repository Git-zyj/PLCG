/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106940
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) 388644851)) : (528482304U)))), (arr_2 [i_1] [i_1]))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_2 [i_0] [i_1]) > (arr_2 [i_1] [i_0])))), (arr_4 [i_0] [i_1]))))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((528482298U) ^ (((/* implicit */unsigned int) -1))));
                var_10 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                arr_7 [i_1] [i_0] = min((((/* implicit */unsigned long long int) max((-388644872), (1845067974)))), (((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [(short)1]) >= (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (arr_1 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_11 += ((528482294U) | (1240556694U));
                                var_12 *= ((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (max((var_9), (var_9)))))) ? (((/* implicit */unsigned long long int) max((((-388644852) & (((/* implicit */int) var_9)))), (((/* implicit */int) ((351917183U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))))))))) : (var_3))))));
}
