/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107377
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
    var_19 = (!(((/* implicit */_Bool) var_4)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_1] [i_1] [i_2] [i_1 + 2]));
                    arr_10 [i_1] [(unsigned char)4] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))))));
                    arr_11 [i_2] [i_2 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) % (((/* implicit */int) max(((short)22586), (((/* implicit */short) (_Bool)0))))))))));
                    arr_12 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_1 + 2])) : (arr_6 [i_1 - 3] [i_2 + 1])))), (((unsigned long long int) arr_5 [9] [i_1 + 3]))));
                    var_21 = ((/* implicit */unsigned short) arr_9 [i_2] [i_2] [i_1 + 3] [i_2]);
                }
            } 
        } 
    } 
}
