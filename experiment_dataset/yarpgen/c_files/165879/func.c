/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165879
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) + (75))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [3LL]))) ^ (var_6)))) ? (min((6364366383196217039LL), (((/* implicit */long long int) arr_1 [i_1])))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)13181)), (arr_2 [i_0]))))))) : (((unsigned long long int) 6364366383196217039LL))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 16128U)) + (6164464809475299716LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) var_5))))) : (var_8)));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((/* implicit */int) (!(var_2))))))) ? ((~(4294951167U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)102))))))))));
    var_16 = ((/* implicit */unsigned char) var_9);
}
