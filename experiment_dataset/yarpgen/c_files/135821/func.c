/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135821
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) == (0U)));
                arr_5 [(unsigned char)1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                var_12 = ((/* implicit */int) (-(min((2636262991U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 589188576U)))))))));
                var_13 -= (~(((((/* implicit */int) ((_Bool) (unsigned short)18860))) & (((/* implicit */int) (unsigned short)49152)))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min(((signed char)-127), ((signed char)-75))))));
            }
        } 
    } 
}
