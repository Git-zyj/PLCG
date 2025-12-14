/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112536
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
    var_16 = ((/* implicit */short) var_5);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 353647236750156484LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (1125899906842623LL))), (((/* implicit */long long int) (signed char)126))))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (signed char)111))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */long long int) arr_1 [i_0 - 1])))), (((/* implicit */long long int) var_12))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(arr_8 [i_0 + 1] [(signed char)4] [i_3 + 1] [i_3]))), (((/* implicit */unsigned int) arr_6 [i_0] [i_3] [i_3 - 1]))));
                            arr_12 [4U] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 2] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_0])) >> (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 - 1])) - (146))))));
            }
        } 
    } 
}
