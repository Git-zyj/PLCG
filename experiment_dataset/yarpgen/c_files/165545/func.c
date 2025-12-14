/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165545
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
    var_18 = ((/* implicit */unsigned char) max(((unsigned short)127), ((unsigned short)65404)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((unsigned int) var_1));
                arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (unsigned short)64088)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned int) min((min((arr_0 [i_0]), (((/* implicit */int) var_0)))), (((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) (unsigned char)229)))))))) : (((unsigned int) min((((/* implicit */int) var_7)), (arr_0 [i_0]))))));
                var_21 -= (unsigned short)127;
            }
        } 
    } 
}
