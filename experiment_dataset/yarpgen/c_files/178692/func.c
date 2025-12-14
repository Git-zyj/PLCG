/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178692
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
    var_10 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) / (arr_1 [i_0])))) : (65408ULL)))));
                var_12 = ((/* implicit */short) ((11553392818045961815ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (short)-1913)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1643523039)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)741))));
            }
        } 
    } 
}
