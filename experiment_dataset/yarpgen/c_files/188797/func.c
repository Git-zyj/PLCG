/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188797
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
    var_18 = ((/* implicit */signed char) 1757969258);
    var_19 = ((/* implicit */short) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))) / (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((var_15) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3612891189U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) -5226045143720361424LL);
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((4294967292U) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) >> (min((((/* implicit */unsigned int) var_2)), (4U))))) <= (((/* implicit */int) var_13))));
}
