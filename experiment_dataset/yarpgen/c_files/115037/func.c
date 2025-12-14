/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115037
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (unsigned char)224);
                var_20 ^= ((/* implicit */int) var_0);
                arr_6 [i_0] = ((/* implicit */signed char) var_18);
                arr_7 [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)8962);
            }
        } 
    } 
    var_21 += 612491710;
    var_22 = ((/* implicit */short) 1757460052U);
    var_23 = ((/* implicit */_Bool) 3902977862U);
}
