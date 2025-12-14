/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147373
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
    var_15 = var_7;
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0 + 3]))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */long long int) (signed char)87)), (1847133756372783182LL))))));
                    var_17 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (666043195U)))) ? (((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_0 + 1])) : (((2147483633) / (((/* implicit */int) (signed char)97))))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */short) (((-(((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))))) > (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-97)) ? (1553945321) : (((/* implicit */int) var_0)))))))));
}
