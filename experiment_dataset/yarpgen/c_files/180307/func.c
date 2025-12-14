/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180307
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14735)) + (((/* implicit */int) (unsigned short)171))))) ^ (var_8)));
    var_16 = ((/* implicit */short) ((unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)171)) : (((/* implicit */int) var_13)))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26749)) & (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]))))) ? (max((((/* implicit */unsigned int) var_11)), (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65365)))))));
                    arr_7 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_1 [i_0])))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0 + 1])), (arr_1 [i_0]))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_1 [i_2])))) ? (((6291375539980561303ULL) >> (((((6291375539980561310ULL) & (var_8))) - (163062695629119586ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_4 [i_0])))))))))));
                }
            } 
        } 
    } 
}
