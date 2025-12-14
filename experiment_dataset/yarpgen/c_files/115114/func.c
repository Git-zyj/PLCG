/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115114
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
    var_12 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) 5081939258007810466LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((_Bool) 3506860262U)))) ? (((((/* implicit */int) arr_0 [i_1])) << (((((/* implicit */int) arr_0 [i_0])) - (3859))))) : ((~(((/* implicit */int) (short)-23657)))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) + ((+(((/* implicit */int) arr_0 [i_0]))))))), (((long long int) arr_1 [i_0]))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (unsigned short)31871)), (788107022U)))))) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_9))));
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */_Bool) ((unsigned char) -8501799327698211372LL));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
}
