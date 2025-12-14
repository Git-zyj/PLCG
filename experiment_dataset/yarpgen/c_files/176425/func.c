/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176425
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
    var_15 = ((/* implicit */unsigned short) var_8);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_12)) - (135)))))) < (var_2)));
    var_17 = ((((_Bool) ((((/* implicit */int) (short)7032)) == (((/* implicit */int) (short)-7033))))) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned char) var_4))))), (var_5)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-7033)) < (((/* implicit */int) (short)-30719)))))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    var_19 = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1315334181302050827LL)) ? (((/* implicit */int) (short)22461)) : (((/* implicit */int) (_Bool)0)))) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (arr_5 [i_0] [i_1] [i_0] [i_2 + 3])))))), (min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (signed char)127))))), (((6932633827987019835ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                }
            } 
        } 
    } 
}
