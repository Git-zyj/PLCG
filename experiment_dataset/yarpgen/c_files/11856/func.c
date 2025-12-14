/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11856
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32767)), (max((arr_6 [i_0]), (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (-1056516973) : (((/* implicit */int) var_16))))))));
                    var_21 &= ((/* implicit */short) var_7);
                    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (+(arr_6 [i_0]))))), (((unsigned long long int) arr_5 [i_2 + 2] [i_2 - 1] [i_1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((unsigned long long int) var_12))))))) / (max((((/* implicit */unsigned long long int) ((var_18) >= (((/* implicit */long long int) -1056516959))))), (var_11)))));
    var_24 = ((/* implicit */unsigned char) var_18);
}
