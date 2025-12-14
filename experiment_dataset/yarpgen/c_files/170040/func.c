/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170040
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
    var_14 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_3 [i_0]))));
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)124))));
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_2))) < ((+(8126464)))))) >> (((max((8126462), (((/* implicit */int) min((var_11), ((_Bool)1)))))) - (8126454)))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (!(var_11)))))));
    var_18 = ((/* implicit */short) var_0);
}
