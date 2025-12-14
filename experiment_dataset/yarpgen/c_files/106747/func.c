/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106747
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [8ULL] [i_0 + 2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((long long int) var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (var_7))) : (var_7)));
                    arr_10 [i_0] [i_1 - 1] [i_1] [i_2] = (-(((/* implicit */int) ((((long long int) arr_3 [i_0] [i_1] [i_2 + 2])) >= (((/* implicit */long long int) var_15))))));
                    arr_11 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) != (14820248264237597125ULL))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [16LL])) ? (arr_6 [i_0 + 2]) : (((/* implicit */int) var_2))))), (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (var_5))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((1920870537), (((/* implicit */int) (unsigned char)52))));
    var_19 -= ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) min((((/* implicit */int) var_1)), (var_9))))), ((+(((long long int) (unsigned char)52))))));
}
