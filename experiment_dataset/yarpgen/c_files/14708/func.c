/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14708
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
    var_13 = (+(((((/* implicit */long long int) var_12)) | (((-7376202832640300795LL) % (-7376202832640300795LL))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 6; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] &= ((/* implicit */int) (unsigned char)109);
                    arr_10 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((signed char)-75), (var_7)));
                    var_14 = min(((signed char)112), ((signed char)96));
                }
            } 
        } 
    } 
}
