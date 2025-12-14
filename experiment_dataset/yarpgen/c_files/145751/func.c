/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145751
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_4)) < (arr_3 [i_0])))))) * (max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_7 [i_0] [i_0] [i_1] [i_2])))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_2 [i_0] [i_1 + 1]), (arr_2 [i_0] [i_1 + 1])))), (((arr_2 [i_0] [i_1 + 1]) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1])) : (((/* implicit */int) (short)-10250))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) ((long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))))));
                    arr_10 [(_Bool)1] |= ((/* implicit */short) (~(((/* implicit */int) arr_2 [(signed char)18] [i_2 - 3]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) 275936946U);
}
