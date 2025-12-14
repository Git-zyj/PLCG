/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186771
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
    var_15 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)13))));
                    var_16 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)20278)))) | (((/* implicit */int) max((((/* implicit */unsigned short) min((var_5), (arr_5 [(_Bool)1])))), (((unsigned short) (unsigned short)5648)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (-((-(((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
}
