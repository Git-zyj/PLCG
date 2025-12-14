/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116190
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) <= (min((((int) 14596344208814253697ULL)), (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) 2147483647)) < (1152780767118491648LL)));
                var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_4 [i_1])))), (15104292722694375449ULL)));
                arr_5 [i_0] [i_0] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8906717626702974473LL)) ? (((/* implicit */long long int) var_1)) : (-8906717626702974473LL)));
                var_15 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
}
