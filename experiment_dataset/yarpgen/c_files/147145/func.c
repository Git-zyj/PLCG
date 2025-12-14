/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147145
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)4104)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned char)62)))), (((((/* implicit */_Bool) 3300950822U)) ? (((/* implicit */int) (short)240)) : (((/* implicit */int) (unsigned short)4104))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) 3300950822U);
                            arr_8 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_2]);
                            var_15 = ((/* implicit */signed char) ((((arr_2 [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_1])))) ^ (((/* implicit */int) max((arr_2 [i_1] [i_2 - 1] [i_1]), (arr_2 [i_2 + 1] [i_3] [i_1]))))));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((int) (unsigned short)4898))) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 0U))))));
                arr_10 [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) arr_7 [i_0] [i_0] [i_0] [i_1] [i_1]))), ((~(var_6)))))), ((~(arr_1 [i_1])))));
            }
        } 
    } 
}
