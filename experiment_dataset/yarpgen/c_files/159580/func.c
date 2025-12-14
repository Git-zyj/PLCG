/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159580
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-20423)))))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_1)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)17))))) / ((((!(((/* implicit */_Bool) var_10)))) ? (max((var_0), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)20423)) : (((/* implicit */int) var_6)))))))))));
                    arr_10 [i_1 - 2] [i_0] [15LL] [i_1 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) var_7)))))));
                }
            } 
        } 
    } 
}
