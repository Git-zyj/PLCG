/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134367
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (var_7))) <= (var_7)));
    var_11 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)100))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (-(arr_6 [2LL] [i_1] [8LL] [i_0])))) ? (((/* implicit */int) (signed char)102)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [13U])) : (arr_3 [3LL] [i_1] [i_1]))))) : (((/* implicit */int) ((signed char) ((signed char) var_6))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_1)))) - (((((/* implicit */int) (signed char)100)) - (((/* implicit */int) (signed char)127))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (arr_6 [i_0] [i_1 + 1] [19LL] [i_2])))))))))));
                    var_14 = ((/* implicit */unsigned char) var_4);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
                }
            } 
        } 
    } 
}
