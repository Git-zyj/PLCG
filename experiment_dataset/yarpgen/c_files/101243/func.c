/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101243
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
    var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-121))))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != ((~(((/* implicit */int) var_2))))))))))));
    var_18 = ((/* implicit */long long int) (signed char)120);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] |= ((/* implicit */long long int) (unsigned char)229);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_15))));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_12))))));
                }
            } 
        } 
    } 
}
