/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142986
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
    var_14 -= ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_4 [i_1]);
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-19))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)13255))));
    var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -906301110)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
