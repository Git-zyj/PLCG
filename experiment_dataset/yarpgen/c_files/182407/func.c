/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182407
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
    var_18 = ((/* implicit */unsigned short) (+(max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)27980)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) var_8);
                    var_20 *= ((/* implicit */_Bool) arr_3 [i_2]);
                    var_21 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned char)194))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))) ? (min((arr_4 [i_0]), (arr_4 [i_0]))) : ((+(arr_4 [i_0]))))))));
                }
            } 
        } 
    } 
}
