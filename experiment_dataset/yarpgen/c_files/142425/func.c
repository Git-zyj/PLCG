/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142425
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(17888698095323187319ULL)));
                    arr_8 [i_2] [i_2] [7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_1)))))) ? (max(((+(var_0))), (7511802029894460906ULL))) : (((/* implicit */unsigned long long int) max((-5778004971028658234LL), (4314796650936623801LL))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned short) (unsigned char)1);
}
