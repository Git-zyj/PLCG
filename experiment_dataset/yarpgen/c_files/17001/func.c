/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17001
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)8] [7LL] [7LL] [i_0])) ? (var_6) : (((/* implicit */int) var_13))))) : ((+(1222217745663614214ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (min((((/* implicit */long long int) (short)-24020)), (-3984347211725042920LL)))));
                    var_15 *= ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    var_17 = ((/* implicit */short) (+(((/* implicit */int) max((var_10), (var_10))))));
    var_18 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_13)))), ((~(481382625)))))));
}
