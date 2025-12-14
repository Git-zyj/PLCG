/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124779
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
    var_20 = ((/* implicit */unsigned long long int) var_17);
    var_21 += ((/* implicit */_Bool) (~(max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (6819830133812145733LL))))))));
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((_Bool)1), (var_8))))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((2613983047936875018LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 2] [i_1]))))));
                    arr_6 [i_2] [i_1] [i_2] |= ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
                }
            } 
        } 
    } 
}
