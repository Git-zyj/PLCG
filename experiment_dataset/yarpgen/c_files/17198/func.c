/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17198
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
    var_20 = ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_1] [(unsigned short)1])) : (((/* implicit */int) arr_1 [i_1] [i_0])))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) arr_1 [4LL] [i_0]))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) -5461555839759676820LL)) ? (9599752413602294850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27884))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_1] [i_1])))))))));
                arr_5 [i_0] [i_1] [i_0] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)205)) ? (((144115188075855871LL) >> (((((/* implicit */int) (unsigned short)52545)) - (52493))))) : (((/* implicit */long long int) ((unsigned int) 2353517264441790224LL)))));
                var_22 += ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)134)) != (max((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_1]))), (((((/* implicit */int) arr_1 [i_0] [11LL])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) + (18549)))))))));
            }
        } 
    } 
}
