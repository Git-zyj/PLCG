/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11909
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((((var_5) + (((/* implicit */long long int) -332967646)))) == (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (-1834507804)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) (-(-1834507798)))) <= (min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_2]))))) ? (((((((/* implicit */_Bool) 332967645)) ? (var_5) : (arr_4 [i_2] [i_1] [9]))) | (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_2]))) & (-4996441631721104294LL))))) : (((/* implicit */long long int) 1834507803))));
                    var_17 = max((((/* implicit */int) ((arr_6 [i_2] [i_1] [i_0]) != (((/* implicit */int) ((var_5) > (((/* implicit */long long int) 1834507789)))))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-41))))), (((((/* implicit */_Bool) 332967634)) ? (((/* implicit */int) (unsigned char)49)) : (332967631))))));
                    arr_8 [i_1] = ((/* implicit */unsigned int) 5133485075570467415LL);
                }
            } 
        } 
    } 
    var_18 = (-(((((/* implicit */long long int) ((/* implicit */int) ((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) * (var_15))));
    var_19 = (+((-(((((/* implicit */_Bool) -1509432239)) ? (var_13) : (((/* implicit */int) var_10)))))));
}
