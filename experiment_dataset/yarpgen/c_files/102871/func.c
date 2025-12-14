/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102871
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
    var_14 = (-(((((unsigned long long int) (short)12353)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) (unsigned short)41980)));
                    var_15 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(2339947775U)))) ? (6354118017679400574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11212))))), (((/* implicit */unsigned long long int) (signed char)-88))));
                    arr_12 [i_2] [i_1 - 2] [i_0] = ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_7))) + (arr_0 [i_2]))))));
                }
            } 
        } 
    } 
}
