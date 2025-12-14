/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145215
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
    var_17 = ((/* implicit */unsigned short) (unsigned char)33);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [(signed char)14] [i_1 + 1] [(signed char)12] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_1 - 2] [13])))) ? (((/* implicit */int) (unsigned short)25525)) : (((((/* implicit */int) (signed char)3)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
                arr_7 [i_0] = ((/* implicit */_Bool) (~((((_Bool)0) ? (arr_0 [(signed char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [13LL] [13LL])))))));
            }
        } 
    } 
}
