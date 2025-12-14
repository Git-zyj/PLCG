/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153452
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_0)) : (-9223372036854775806LL))))) ? (((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_0]), (((/* implicit */unsigned char) (signed char)82)))))) : ((~(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))));
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) arr_8 [i_2]);
                }
            }
        } 
    } 
}
