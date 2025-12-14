/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136807
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) > (((var_6) % (var_6))))))));
                    arr_6 [i_0] [(short)11] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) max((max((var_6), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_5 [(unsigned char)1] [i_1] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_3);
}
