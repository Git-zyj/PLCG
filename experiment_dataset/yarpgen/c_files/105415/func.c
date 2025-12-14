/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105415
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
    var_12 = ((/* implicit */long long int) var_2);
    var_13 = ((/* implicit */signed char) 11437196727713848460ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(12230059586592288844ULL))))));
                arr_6 [i_1] = ((((/* implicit */_Bool) max((1401420144U), (((/* implicit */unsigned int) (unsigned char)199))))) ? ((+((+(((/* implicit */int) (unsigned char)140)))))) : (((/* implicit */int) (unsigned char)221)));
            }
        } 
    } 
}
