/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153096
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
    var_11 = min((-2829861136139043967LL), (((/* implicit */long long int) (unsigned short)3788)));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (min((var_8), (var_4)))));
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3LL), (((long long int) (short)32767))))) ? (((/* implicit */int) (unsigned short)61720)) : (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] [10LL] [i_1] = ((/* implicit */short) ((int) ((long long int) min((((/* implicit */long long int) (short)31)), (2740429771205799024LL)))));
                arr_7 [i_1] [i_1] [i_1] = (~(((((/* implicit */_Bool) (~(226491133)))) ? (min((3LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (226491129)))))));
            }
        } 
    } 
}
