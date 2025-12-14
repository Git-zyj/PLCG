/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165922
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((-3618028032708548165LL) != (0LL)))) : (((/* implicit */int) ((unsigned short) 0U)))));
                var_15 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (signed char)-119)), (-10LL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) var_2))));
    var_17 = ((/* implicit */unsigned short) var_4);
}
