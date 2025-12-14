/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135231
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-95))))) - (arr_1 [17] [14LL])))) ? (max((var_0), (((/* implicit */unsigned int) var_4)))) : (arr_4 [(signed char)1] [i_1] [(short)10] [i_2])));
                    arr_6 [i_0] [i_1] [i_0] [(unsigned short)15] = ((/* implicit */unsigned char) var_0);
                    var_14 -= ((/* implicit */unsigned char) (_Bool)1);
                    var_15 = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) - (max((((/* implicit */unsigned long long int) var_4)), (var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((-4600783560346492839LL), (var_12)))));
    var_17 = ((/* implicit */unsigned int) (~(var_7)));
    var_18 = ((/* implicit */long long int) (((+(var_12))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_11))))) * (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
