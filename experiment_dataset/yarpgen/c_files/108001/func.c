/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108001
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [7U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4559574521676721031LL)) ? (((/* implicit */unsigned long long int) 4559574521676721031LL)) : (16084068701475766600ULL))))));
                arr_8 [i_1] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (short)-4)))) <= (var_10)));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
}
