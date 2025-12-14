/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153758
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
    var_12 -= ((/* implicit */long long int) (~(((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((unsigned int) var_3))))))));
    var_13 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [(signed char)2] [i_0]);
                arr_5 [i_0] [(signed char)9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(-34359738368LL))), (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)107)), ((unsigned short)29925))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) 928393729U)) : (var_5)))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)229))))))));
            }
        } 
    } 
}
