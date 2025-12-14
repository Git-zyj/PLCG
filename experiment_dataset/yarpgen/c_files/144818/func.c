/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144818
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
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_3)))) ? (max((((/* implicit */long long int) -1978670564)), (var_5))) : ((~(var_6))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (var_4)))) <= (var_11)))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) (unsigned short)25))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65491))) : (var_12))))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (((-(-997606379))) >> ((((+(min((var_11), (((/* implicit */unsigned long long int) (signed char)127)))))) - (102ULL)))));
                arr_4 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) var_13)) : (var_11))))))));
            }
        } 
    } 
}
