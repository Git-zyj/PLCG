/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130391
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)3)) | (((/* implicit */int) (unsigned char)3))))) <= (var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)253))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */signed char) ((var_17) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))) <= (((((var_5) >> (((var_5) - (7792088093299856457LL))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))))));
            }
        } 
    } 
}
