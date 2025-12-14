/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111698
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-10)))) || (((((/* implicit */int) (short)15478)) <= (((/* implicit */int) (unsigned short)62621)))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (((((arr_0 [i_1] [i_2]) << (((((/* implicit */int) (signed char)-104)) + (138))))) << (((((/* implicit */int) ((short) var_4))) + (22097)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_8);
    var_15 ^= ((/* implicit */signed char) min((((unsigned short) (signed char)41)), (((/* implicit */unsigned short) var_6))));
}
