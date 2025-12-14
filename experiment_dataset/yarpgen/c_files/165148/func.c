/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165148
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
    var_13 = var_12;
    var_14 = ((/* implicit */long long int) var_9);
    var_15 = ((/* implicit */_Bool) ((var_3) % (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (var_3))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) -8101434425172436372LL);
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8241)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)123)))))))) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_5))))), (arr_0 [i_1] [i_1]))))));
                arr_7 [i_0] [i_0] [i_1] = var_8;
            }
        } 
    } 
}
