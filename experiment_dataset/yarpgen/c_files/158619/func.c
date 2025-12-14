/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158619
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) 2965765691U);
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1475333136)) || (((/* implicit */_Bool) 271044052)))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0]))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_7)), (var_13)))))) ? (((var_2) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
    var_19 = ((/* implicit */short) (~(max((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_13)))))));
}
