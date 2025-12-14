/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144585
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
    var_10 = ((/* implicit */int) var_5);
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((max((min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_2 [(short)19]))), (((/* implicit */unsigned long long int) min((arr_5 [i_2]), (arr_1 [i_0] [i_2])))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521)))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36371))) : (var_5))))))));
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_2]))));
                    arr_6 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (~(min((var_0), (((((/* implicit */int) arr_1 [i_0] [i_1])) * (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
}
