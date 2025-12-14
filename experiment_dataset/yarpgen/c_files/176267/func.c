/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176267
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
    var_13 += ((/* implicit */short) var_2);
    var_14 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)-27024)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                var_16 = ((/* implicit */int) var_5);
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)181))) ? (max((((/* implicit */unsigned long long int) ((long long int) (unsigned char)181))), ((~(357468536834885156ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16797)))));
                var_17 = ((/* implicit */int) min((var_17), (((arr_3 [i_0] [i_1] [i_1]) + (((/* implicit */int) var_10))))));
                var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
