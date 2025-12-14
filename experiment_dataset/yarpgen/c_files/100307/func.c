/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100307
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
    var_10 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1])), ((-(arr_0 [i_0] [i_0]))))) : (12792002564114107092ULL)));
                    var_12 = ((/* implicit */unsigned char) min((var_0), (((short) arr_1 [i_0]))));
                    var_13 = ((/* implicit */unsigned int) max((max((var_1), (((/* implicit */long long int) arr_8 [i_1 - 1] [(_Bool)1] [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
