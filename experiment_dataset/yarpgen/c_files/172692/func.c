/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172692
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)6956)) * (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */int) var_8);
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_9)))) > (var_4))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [(unsigned short)7] [i_4] = ((/* implicit */short) arr_2 [i_2]);
                                arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)2169)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (((/* implicit */long long int) arr_10 [i_0] [i_1])) : (var_9)))));
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2027619119U)))))))));
                    arr_18 [i_0] [i_2] = ((/* implicit */_Bool) (unsigned short)57528);
                }
            } 
        } 
    } 
}
