/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155104
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
    var_10 = ((/* implicit */_Bool) ((unsigned char) (!(((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_4))) || (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((unsigned int) -424897473)) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) -996333103302802767LL))))), (min((var_1), (((/* implicit */int) var_2)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_1)) & (4294967295U)))) == (var_8))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (var_7)));
}
