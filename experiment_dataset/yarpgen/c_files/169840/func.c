/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169840
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 30U)) ? (max((4294967266U), (((/* implicit */unsigned int) (unsigned short)50720)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))) ? (14418811128221160001ULL) : (((/* implicit */unsigned long long int) ((long long int) 4203454127U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_2 + 1] [i_2 + 2] = (-(((/* implicit */int) ((min((((/* implicit */long long int) var_17)), (var_16))) < (((/* implicit */long long int) var_9))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(min((arr_8 [i_0] [i_1] [6U]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))))))));
                }
            } 
        } 
    } 
}
