/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189401
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) && ((!(((/* implicit */_Bool) arr_11 [i_0] [(short)22] [(_Bool)1] [i_0] [14]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = min((2147483647), (((2147483629) | (-2147483624))));
                                var_20 = ((/* implicit */short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 536870912U)))))))));
                                arr_15 [i_3] [16U] [i_3] [8ULL] [16U] [16U] [16U] = max((((/* implicit */int) arr_6 [i_0] [20ULL])), ((+(2147483629))));
                                var_21 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)203))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */long long int) -218820277);
                                arr_21 [(_Bool)1] [i_6] [i_6] [i_0] = ((/* implicit */int) arr_17 [i_6]);
                                var_23 = ((/* implicit */short) (+(((/* implicit */int) (((-(var_8))) <= (((((/* implicit */int) arr_6 [16U] [i_1])) - (((/* implicit */int) arr_4 [i_1] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = min((((unsigned long long int) (unsigned char)227)), (((/* implicit */unsigned long long int) var_12)));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) var_16)))))));
}
