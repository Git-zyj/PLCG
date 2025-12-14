/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115775
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (arr_3 [i_2] [i_0]))), (((((/* implicit */int) (unsigned char)66)) & (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                    var_11 = var_9;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)41)))) % (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (signed char)-65))));
}
