/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154817
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)26408))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28191)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26408))) : (4180961529U)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27297)) ? (arr_4 [i_0] [15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) ? (max((((((/* implicit */_Bool) arr_2 [(unsigned short)16])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 4180961529U)))), (((/* implicit */long long int) (+(2147483647)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14)))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) 4604844235069121801LL);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (-(((int) (unsigned short)0)))))));
}
