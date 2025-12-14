/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142088
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */_Bool) (+(((arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 2]) + (arr_7 [(signed char)6] [i_2 - 2] [i_2 + 1] [i_2 - 2])))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) << (((var_0) - (10038164515832303252ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : ((~(var_4)))))) ? (arr_2 [i_0]) : (max((min((arr_7 [i_0] [i_1] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))))));
                    var_16 += ((/* implicit */int) ((short) max((((((/* implicit */_Bool) (unsigned short)63133)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63133))))), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (215880493U))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_2))))) : (min((var_1), (((/* implicit */unsigned int) var_6))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
