/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146947
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
    var_20 = ((/* implicit */signed char) ((long long int) var_4));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (var_12) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((signed char) arr_5 [i_0] [i_0] [i_1])))));
                arr_6 [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                var_22 += ((unsigned int) (unsigned short)28799);
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)6])) ? (arr_4 [(unsigned char)12]) : (arr_4 [(unsigned char)0])))) ? (((((/* implicit */_Bool) arr_4 [2LL])) ? (arr_4 [6LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 85276993U)) ? (arr_4 [(signed char)22]) : (arr_4 [16LL])))))));
                var_24 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_4 [i_0]))));
            }
        } 
    } 
}
