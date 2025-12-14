/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143746
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
    var_20 = ((/* implicit */_Bool) var_16);
    var_21 = max((((/* implicit */unsigned long long int) var_5)), (var_15));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7863784115691243986LL)) ? (12574741845559691935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_2] = min((max((((/* implicit */unsigned long long int) ((5872002228149859680ULL) > (12574741845559691935ULL)))), (var_13))), (((min((((/* implicit */unsigned long long int) 3181940691U)), (12933935053139611316ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))));
                    var_23 *= ((/* implicit */unsigned int) (~(((arr_6 [i_0] [i_1] [i_2] [i_2]) >> (((arr_6 [i_0] [i_0] [i_2] [i_0]) - (8500465488708388675ULL)))))));
                }
            } 
        } 
    } 
}
